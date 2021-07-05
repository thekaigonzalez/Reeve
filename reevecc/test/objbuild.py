import random
import os as system
import typing
import platform as psutil
def lnk_file(file, args: typing.List[str], env: str):
    if args.__contains__("-v") or args.__contains__("--verbose"):
        print("compile file using " + psutil.python_compiler() ) # usually same as C++ Compiler...
    system.mkdir("temporary")
    system.mkdir("binary")
    system.system("gcc " + env + file + " -o " + env + "" + file + " -o " + env + file + ".o")
    system.system("gcc " + env + file + ".o " + "bin/reeve-headers.o -o binary/" + file)


lnk_file("PrintHello.cpp", ["-v"], "./Tests/") # lnk_file: (file, args: List[str], env: str)