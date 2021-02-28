//-----------------------------------------------------------------------------
// ConsoleLib.c
//   Main routine for frozen programs which run in a console from lib directory
//-----------------------------------------------------------------------------

#include <Python.h>

// define format for sys.path
// this consists of <dir>/library.zip and <dir>
// where <dir> refers to the directory in which the executable is found
#if defined(MS_WINDOWS)
    #define CX_PATH_FORMAT              L"%ls\\library.zip;%ls"
#else
    #define CX_PATH_FORMAT              "%s/library.zip:%s"
#endif

#include "Console.c"
