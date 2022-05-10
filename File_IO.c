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

Modes - 
1. r - Opens for reading only
2. w - Opens for Writing if not exist creates if exists cleans the file and starts from scratch.
3. a - Same as W just it doesn't clean exist file writes after it.
4. r+ - text file open for write and read
5. w+ - Same for writing and reading functionality same as w.
6. a+ - Opens for reading and writting. same as a . there is separate use for each other you need experience to understand.

More functions for file handling -
fputc():
fputc() is used to write characters to the file. The C in the name of the function stands for character. The function takes two parameters as input. The first one is the single character that we want to input to the file. The second parameter is the pointer to the file. On successful implementation, it returns the character on to the screen. If it couldn't do so in case of any other issue, it would display an EOF exception. EOF stands for End of File. You will see a lot of this exception while working with files.

Syntax: type fputc(‘character’,file_pointer);

fputs():
fputs() is used to write a null-terminated string to the file. The S in the name of the function stands for string.it also takes two parameters, the same as fputc(). One is the variable storing the string and the second one is the pointer to the file. A null-terminated string is a character string that can be terminated by a null character i.e., \0. You do not have to bother much about null-terminated strings as our computer automatically converts character strings to null-terminated strings.

Syntax: fputs(“string”,file_pointer);

fgetc():
fgetc() works exactly the opposite of fputc(). It reads the character from the file. It reads only one character at a time. We can print it as many times as we want to get the next character and so on. Its syntax is straightforward, as we have to send the file pointer as a parameter. We can store the character into another character to display it onto the screen.

Syntax: type = fgetc(file_pointer);

fgets():
fgets() is used to read a string from a file. It takes three parameters as input and stores them in a null terminated array. Now talking about the parameters, the first one is the storage array we want our string to store. The third one is the file pointer, and the second one is the count of variables we want to get from the files. For example, we want to take the first four characters from the string, so we will input the second parameter equals to 5. The purpose of doing that is that the null character will hold the fifth place.

Note: Blank space is also considered as a character.

Syntax: int fgets(const char *s, int n, file_pointer);

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
    // ptr = fopen("Example.txt", "a"); // first argument as file name second one is action using append it will not delete previous content and write after it
    // fprintf(ptr, "%s", string);      // here we will provide the string in case of write or append. see your file has changed for ever.
    // using append it is writing after previous thing.

    // More functions
    ptr = fopen("Example.txt","a");
    // char c = fgetc(ptr); // it will pick 1st letter from the file
    // printf("The Character Read is - %c\n",c);
    // c = fgetc(ptr); // it will pick the second one means when ever you call it, will pick next one 
    // printf("The Character Read is - %c\n",c);

    // char str[5]; 
    // fgets(str,4,ptr); // it will pick desired no of character from the file. 1st the variable 2nd number and 3rd file pointer
    // printf("The String is %s\n",str); 

    fputc('A',ptr);  // it will add a single character at the start .
    fputs(" Useless meterial is me. ",ptr); // same as just adds a line at the beginning.



    fclose(ptr);
    return 0;
}
