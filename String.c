/*
There is no such datatype named C in String. In stead we make string using arrays of Character.
Now problem is you take a 10 length of array and you are filled only till 6th as your string is 6 in length then what
will be the future for the remains for information this will be filled with garbag strings. And how would user know
the last position for this we have to put a '\0' this means NULL at the end of the array. With example things will be
more clear.
Another thing is when we put letters into double quotes compiler takes it as an character array with '\0' at the end default.


##Note:  There is difference between ‘\0’ and ‘0’. The ASCII value of ‘\0’ is 0, and for ‘0’, the value is 48.
The terminating null ‘\0’ and ‘0’ are not same.

Basic Syntax
*/
#include <stdio.h>
void print_Str(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    // Method - 1
    char str[] = {'A', 'n', 'i', '\0'}; // you must have to put "\0" at the end other wise you will see a garbage value while printing
    // if you defining string like upper method don't use double quote as then it will be saved as an string array.
    // print_Str(str);
    // MEthod - 2 
    char name[] = "Anirudhya"; // in this case compiler will do just upper thing by own
    // print_Str(name); // Using written function
    // Now showing some conceptual problems described in starting 
    // char a[5] = "World"; // and you can see it is printing more words after world this happend when you give less ot equal length to your array of string it can't create the space for "\0" and it ends up with garbage value so always you have to provide +1 length of array while giving length of string as an array in C.
    // print_Str(a);
    // # How to take string as an input - use get() function
    char user_str[50]; // initializing a string where user can give minimum 49 character
    gets(user_str); // user input will be stored into user_str now you can use scanf to take string but it will not accept white space so using gets and puts is recommended.
    print_Str(user_str);
    puts(user_str); // you can use puts() function to print string in C
    printf("%s",user_str); // you can print using simple print function also

    return 0;
}
