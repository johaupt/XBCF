#!/usr/bin/env python

"""
setup.py file for SWIG example
"""
import setuptools
from setuptools import setup, Extension
import numpy

from sys import platform
if platform == "win32":
  compile_args = []
else:
  compile_args = ["-std=gnu++11", "-fpic",  "-g"]
if platform == "darwin":
  compile_args.append("-mmacosx-version-min=10.9") # To ensure gnu+11 and all std libs

XBART_module = Extension('_xbart',
                           sources=['xbart_wrap.cxx', 'xbart.cpp',
                                    "src/utility.cpp",'src/fit_std_main_loop.cpp',
                                      "src/sample_int_crank.cpp",  "src/treefuns.cpp",
                                        "src/common.cpp" ,   "src/forest.cpp",    
                                        "src/tree.cpp","src/thread_pool.cpp"

                                    ],


                            language= "c++",
                            #libraries =["/Library/Frameworks/Python.framework/Versions/3.6/lib"],
                            #include_dirs = ['/Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m'], # temp...
                            include_dirs = [numpy.get_include(),'.', "src"],
                           extra_compile_args=compile_args#,"-larmadillo", "-llapack", "-lblas"]
                           )

setup (name = 'xbart',
       version = '0.1',
       author      = "Saar Yalov",
       description = """XBART project""",
       include_dirs = [numpy.get_include(),'.',"src"],
       ext_modules = [XBART_module],
       sources = ["xbart.py"],
       install_requires=['numpy'],
       py_modules = ["xbart"]
       )

