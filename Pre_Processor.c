/*
We have learned about how the C works in the behind. it follows some steps - PreProcessing -> Compilation -> Assembly -> Linking.

# Pre Processing - Not a part of the Compiler just a text submission tool also instruct compiler to do required pre
processing before compiling. it refers as CPP. C pre processor directives are Started with # and followed by an identifier
that is directive name. Let's learn about some directives.

#include - will insert a particular header file from another file.
#define - this will substitute a pre processor macro
#undef - undefine a pre processor macro
#ifdef - return true if macro is defined
#if - test if compile time condition is true
#elif - can define #else and #if in one statement
#endif - will end pre processor conditional
#error - can print error message on stderr
#pragma - will special command to compiler using standardized method

Pre-processors Examples:-
The following are examples of pre-processors in C.

#define ARRAY_LENGTH 46
This directive tells the CPP to set the ARRAY_LENGTH with 46.

#include <stdio.h>
These directives will get stdio.h from system libraries.

#undef FSIZE
#define FSIZE 30
It will undefine existing FSIZE and define it as 30.


# include directive causes the pre processor to fetch the contents from some other file to be included into current file
most commonly thr included files have a ".h" extention to indicate they are header files.

Formats -
#include<headfile.h> -> angle bracket tell to look in system directories.
#include "file.c" -> to look into current directory we use double quotes.
though giving full path is allowed but don't preferesd to be used.

# Define Directive is used to define pre processor variables .
can be used to replace a word with number globally. similar work as find and replace functionality .
also can be used for debugging along with other pre processor as #ifdef etc.
Macros Also can be created same as function but defining here makes more faster.


# Pre Defined Marco - is a marco already been defined and understood by C and Doesn't need to be defined again.
some Pre defined macros
__DATE__:
It prints the current date on to the screen. The date format it follows is MMM DD YYY.
__TIME__:
It prints the current time on to the screen. The date format it follows is HH:MM:SS.
__FILE__:
It prints the current file name on to the screen. The name will be printed as a string literal.
__LINE__:
It prints the current line number on to the screen. The number will be printed as a decimal constant.
__STDC__:
It is used to check whether our program is being compiler using ANSI standard or not. It will return 1 if true.

Basic Syntax -
*/
#include <stdio.h>  // from system files
#include "Random.c" // from this directory
#define PI 3.14     // used to define global variable #define constantname value/(expression)
#define SQUARE(a) a*a // faster way to create some global functions. this is a macro

int main(int argc, char const *argv[])
{
    printf("%d\n", RandInt(5)); // see you can use randint function defined into Random.c and we already used headerfiles may time
    printf("%d",SQUARE(4));
    // Pre defined macro
    printf("File name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("Time is %s \n",__TIME__);
    printf("Line No is %d \n",__LINE__);
    printf("ANSI is %d\n",__STDC__);
    return 0;
}
