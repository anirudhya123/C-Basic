/*
When we need to pass arguments in command line we use command line argument basically when we want to control our
programme from console. this arguments are passed into main() method. Basic Example can be pip install.

## FFmpeg.exe is free open source projetc consisting of a vast software suit of libraries and programmes for handleing
video audio and other multimedia files and streams it is written in c. git, brew other examples

argc:
If we divide the keyword into two parts, the first will be 'agr', a short form for arguments. The second one will be 'c,' which stands for count. Some argc as a whole stands for argument count, which means that it stores the total number of arguments passed to the utility. The first argument count is reserved for the executable program's name, and the next ones are for the arguments passed to the program.

argv:
Same as in argc, the arg stands for argument, but he ‘v’ stands for vector. Vector can be said as a one-dimensional array in this case because argv stores the pointer to the arguments passed to the program in an array of strings.

Note: argv does not store the actual argument, but the pointer to that argument.

Examples:

Suppose that we have a .exe executable, named xyz. We are passing two arguments to xyz, i.e., a and b.
Now the value of argc will be three as there are two arguments.

And argv will store pointers xyz, a, and b.

To create a command-line utility, we must pass int argc and char const *argv[] to the program as arguments. Then we can make any kind of programs that take arguments from the terminal to display the result instead of accessing the compiler every time.

We can create many applications using command-line utility such as a calculator, as one of the simplest

Basic Syntax - 
*/
#include<stdio.h>
int main(int argc, char const *argv[]) // the arguments into the main is the commandline purpose argc is the count of argument which is minimum oen as the file name and 2nd is array of character. Count will be one plus length of array always 
{
    printf("The Value of ARG is %d",argc); // you can give argument to check.
    // you can run for loop for getting the arguments
    for (int i = 0; i < argc; i++)
    {
        printf("The Value stored into index %d is %s\n",i,argv[i]);
    }
    
    return 0;
}
