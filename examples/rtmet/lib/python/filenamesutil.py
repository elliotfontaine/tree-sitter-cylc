"""
This module contains utility functions to process raw files names. It is mainly
used by the xtriggers in the bioreactor workflow.
"""

from typing import Optional
from pathlib import Path, PurePath
from dataclasses import dataclass


@dataclass
class FileNameComponents:
    """Dataclass to hold the components of a file name.
    Given that the file name is in the format `prefix_suffix.extension`, it
    holds the `prefix`, `suffix` and `extension` separately.
    """

    stem_prefix: Optional[str]
    stem_suffix: Optional[str]
    extension: Optional[str]

    def __str__(self):
        return f"{self.stem_prefix}_{self.stem_suffix}{self.extension}"

    def __repr__(self) -> str:
        return f"FileNameComponents({self.stem_prefix}, {self.stem_suffix}, {self.extension})"

    def is_cyclepoint_raw(self, point: int) -> bool:
        """Return True if the file name ends with _n where n is the cycle point
        number. Zero padding (01, 001, etc. for 1) is supported.
        """
        if self.extension == ".raw" and self.stem_suffix.isdigit():
            return int(self.stem_suffix) == point
        return False

    @staticmethod
    def from_path(filepath: PurePath):
        """Return a FileNameComponents object from a Path object. It will only
        look at the final element of the Path.
        """
        extension = filepath.suffix
        stem = filepath.stem
        if "_" not in stem:
            stem_prefix = stem
            stem_suffix = None
        else:
            stem_prefix = "_".join(stem.split("_")[0:-1])
            stem_suffix = stem.split("_")[-1]
        stem_prefix = stem_prefix if stem_prefix else None
        extension = extension if extension else None
        return FileNameComponents(stem_prefix, stem_suffix, extension)

    @staticmethod
    def from_filename(filename: str):
        """Return a FileNameComponents object from a string."""
        return FileNameComponents.from_path(PurePath(filename))


def get_local_filenames(directory: Path) -> list[str]:
    """Return a list of all filenames in a local directory."""
    return [str(f) for f in directory.iterdir() if f.is_file()]
