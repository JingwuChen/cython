from distutils.core import setup
from Cython.Build import cythonize
import numpy
setup(
    ext_modules=cythonize("apply_version.pyx"),
    include_dirs=[numpy.get_include()]
)
