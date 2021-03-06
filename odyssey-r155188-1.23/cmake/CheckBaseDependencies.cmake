IF(NOT WIN32)
    ## Pkg-config under cygwin gives to cmake .a lib and we need .lib for Visual Studio projects so we search them with cmake tools. 
    find_package(PkgConfig REQUIRED)
ENDIF(NOT WIN32)
find_package(Perl REQUIRED)
find_program(BISON_EXECUTABLE bison)
if(NOT BISON_EXECUTABLE)
    message(FATAL_ERROR "bison package not found. Install it to be able to compile owb.")
endif(NOT BISON_EXECUTABLE)
find_program(FLEX_EXECUTABLE flex)
if(NOT FLEX_EXECUTABLE)
    message(FATAL_ERROR "flex package not found. Install it to be able to compile owb.")
endif(NOT FLEX_EXECUTABLE)
find_program(GPERF_EXECUTABLE gperf)
if(NOT GPERF_EXECUTABLE)
    message(FATAL_ERROR "gperf package not found. Install it to be able to compile owb.")
endif(NOT GPERF_EXECUTABLE)
find_program(RUBY_EXECUTABLE ruby)
if(NOT RUBY_EXECUTABLE)
    message(FATAL_ERROR "ruby package not found. Install it to be able to compile owb.")
endif(NOT RUBY_EXECUTABLE)

