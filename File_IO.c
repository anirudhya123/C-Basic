/*
Purpose of files in C:
Files are used to store content hence reducing the program's size.
We can read or access data from files.
The data in files remain stored even after the program's execution is terminated.

Files are stored in non-volatile memory. To understand what a non-volatile memory is, we have to see the difference between volatile and non-volatile memory.


VOLATILE MEMORY -
1. The data can only remain in it while the computer’s power is on.
2. Can only hold information when having a constant power supply.
3. Will hold data for a short period.
4. RAM is an example

NON- VOLATILE MEMORY -
1. The data will also be present in it while the computer’s power is off
2. Can also hold information, in case of inconstant power supply
3. Will hold data for a long term.
4. Hard Disk is an example.

Types of Files:
There are two types of files:
1. Binary Files
2. Text Files

Binary Files:
1. Binary files stores data in 01 i.e., binary format.
2. They are not directly readable.
3. An application or software is required to read binary files.
4. An example is a .doc file.
Text Files:
1. They store data in simple text format.
2. They are directly readable.
3. No software is required to access them.
4. An example is a .txt file.

Operations on files:
By using C language, we can perform four different tasks related to files. We will see them theoretically in this tutorial, and in the next one's, we will see their practical implementation.

Creating a File:
We can create a file using C language, in any directory, without even leaving our compiler. We can select the name or type we want our file to have, along with its location.

Opening a File:
We can open an existing file and create a new file and open it using our program. We can perform different operations on a file after it has been opened.

Closing a File:
When we are done with the file, meaning that we have performed whatever we want to perform on our file, we can close the file using the close function.

Read/Write to a file:
After opening a file, we can access its contents and read, write, or update them.

Conclusion:
We can perform many operations using files, as we can read, write, or append them. We can also open, close, or create a file. Using files in our programs can make them much more efficient and save a lot of memory space. We can also store our data for an extended period.

Working with files in C -

1. we have to create FILE type pointer with NULL first it helps us to access the file entire programme.
2. Stdio.h contains function called fopen("file_name","mode"). mode means write, Read, append .
3. stdio.h also contains fclose(file_name_pointer) and we must close a file after using it.
4. In order to read a file we can use fscanf function and will have to open in read mode to achieve that. fscanf(file_pointer,"%format_specifier",String_name)
5. Using fprintf function we can write into a file as we have to open the file in write mode or append mode. arguments are almost same as scanf


Basic Syntax -
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;                                                       // as instructed we have to create a file pointer in order to use the file in whole programme
    char string[250] = "So It will be the end :(.\n "; // here we will store the returned strings from function
    // Reading a File -
    // ptr = fopen("Example.txt","r"); // first argument as file name second one is action
    // fscanf(ptr,"%s",string); // first pointer name , then format specifier as String then the variable we will store returned text.
    // printf("The Text Under this file is  : %s\n ",string); // though it will not return whole file just the string length.
    // writing and appending a file -
    // ptr = fopen("Example.txt", "w"); // first argument as file name second one is action . it will start from scratch means will clean the file and write new 
    ptr = fopen("Example.txt", "a"); // first argument as file name second one is action using append it will not delete previous content and write after it
    fprintf(ptr, "%s", string);      // here we will provide the string in case of write or append. see your file has changed for ever.
    // using append it is writing after previous thing.

    return 0;
}
