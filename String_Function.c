/*
Last video we came to know There is no such data type as String but we can use array of character terminated using
Null or "\0". and we can use some functions with them but we have to include another header file to use those functions
as we can use printf, scanf,puts,gets etc using <stdio.h> we have to include <string.h> to use below functions :
strcat() - to combine two given string
strlen() -  to get length of string
strrev() -  to reverse string
strcpy() - to copy . takes two argument 1st one name of the variable to save copied string second one which to copy
strcmp() -  to compare two string according their ascii values. it gives 0 if two strings are same other wise it will give random -ve or +ve number.

Basic Syntax
*/
#include <stdio.h>
#include <string.h> // have to include to use string functions
int main(int argc, char const *argv[])
{
    char str_1[] = "I am a Boy.";
    char str_2[] = "Ramesh";
    char str_3[50]; // you have to give array length if you just declare it.
    char str_4[50];
    puts(strcat(str_1, str_2)); // concades two strings.
    printf("The length of str_1 - %d \n", strlen(str_1));
    printf("The Length of str_2 - %d \n", strlen(str_2)); // see it is giving the length
    puts(strrev(str_1));                                  // using puts as while printing string in C we have to prefer it over printf
    puts(strrev(str_2));
    puts(str_3);
    strcpy(str_3, str_1); // it will copy str_1 content into str_3
    puts(str_3);
    // you can't store concatenate values into a variable directly instead you can copy it
    strcpy(str_4, strcat(str_1, str_2));                           // this way you can store concate value into another variable
    puts(str_4);                                                   // gets used to with it in C
    printf("The Value for comparing %d \n", strcmp(str_1, str_2)); // when it will be zero it can be same

    // Taking strings from user and returning concate values
    char name_1[50], name_2[50], sen_1[] = " is one of the best friend of ", sen_2[] = ", he thinks !";
    printf("Give friend 1 name : ");
    gets(name_1);
    printf("Give friend 2 name : ");
    gets(name_2);
    puts(strcat(strcat(strcat(name_1, sen_1), name_2), sen_2)); // complex use example.
    char s1[] = "Hey,123,Blogsdope";
    char *p;
    p = strtok(s1, ","); // it finds s2 in s1  and returns a pointer to it and returns null if not found
    
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, ",");
    }
     // now how strtok works it finds s2 in s1 if not found gives null other wise give pointer and into pointer 
     // it gives all strings before the s2 if you want to scan further you have to run again with NULL as S1 and s2 
     // as your desire break point. html parser is good for understanding it.
    return 0;
}
