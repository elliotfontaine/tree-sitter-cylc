"""
Cylc xtrigger script. Monitor the filesystem for the presence of a completed raw
file corresponding to the current workflow cycle point.
Xtriggers are referenced in the flow.cylc file, and called asynchronously in the
process pool. They must be defined in a module with the same name as the xtrigger
function. For more informations, see:
https://cylc.github.io/cylc-doc/8.2.4/html/user-guide/writing-workflows/external-triggers.html#custom-trigger-functions
"""

from pathlib import Path
import filenamesutil as fnu

# Using the logging module won't work because Cylc handles everything behind the
# scenes.
# But if you use print() and set the --debug flag when launching `cylc play`,
# Cylc will show the print() output in the scheduler log. That's why we use
# `print("Debug: 🟠 ...)` here.


def catch_raw_internal(point: str, workflow_run_dir: str) -> tuple[bool, dict]:
    """Return `(True, {"file": raw_path})` if a raw file corresponding to the
    current cycle point is found in the internal `raws` directory, meaning the
    one located at the root of the workflow run directory.\n
    Return `(False, {})` otherwise.
    """
    print("Debug: 🟠 `catch_raw_internal` debug statements.")
    point = int(point)

    rawfiles_dir = Path(workflow_run_dir, "raws").expanduser().resolve()
    rawfiles_dir.mkdir(exist_ok=True)

    filenames = fnu.get_local_filenames(rawfiles_dir)
    print(f"Debug: 🟠 Filenames in {rawfiles_dir}: {filenames}")

    fn_components = [fnu.FileNameComponents.from_filename(f) for f in filenames]
    print(f"Debug: 🟠 Filename components: {fn_components}")

    for filename in fn_components:
        if filename.is_cyclepoint_raw(point):
            current_raw = str(filename)
            raw_path = rawfiles_dir / Path(current_raw)
            print(f"Debug: 🟢 Found raw file: {raw_path}")
            return True, {"file": str(raw_path)}
    print("Error: 🔴 No corresponding raw file found.")
    return False, {}
