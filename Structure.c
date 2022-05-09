/*
Structure is a user defined Complex and diverse data type in C. Arrays are accessed using subscript variable and
similarly structure members are accessed using dot operator named structure member operator.
"Structure_name.Member_name" this is the way.

What is a Structure in C?
Structures are usually used when we want to store dissimilar data together.For example, we want to store data about a book. Book has its title, author name, number of pages and price. All of the book attributes belong to different data types. One way to store the data is to construct individual arrays, and another method is to use a structure variable. Structure elements are always stored in contiguous memory locations.
How to Access the Structure Elements?
As we use subscript to access individual elements of an array. But in the case of structures, to access any element, we use the operator (.). This dot operator is coded between the structure variable name and the structure member that we wish to access.

Note that before the dot operator there must always be a structure variable and after the dot operator there must always be a structure element.
Additional Features of Structures:-
We can assign the values of a structure variable to another structure variable of the same type using the assignment operator.
Structure can be nested within another structure.
We can pass the structure variable to a function. We can pass the individual structure elements or the entire structure variable into the function as an argument.
We can have a pointer pointing to a struct just like the way we can have a pointer pointing to an int, or a pointer pointing to a char.
Where are structures useful?
Structures can be used for a variety of purposes like:

Structures are used to store a large amount of data.
They are used to send data to the printer.
For placing the cursor at an appropriate position on screen, we can use structure.
It can be used in drawing and floppy formatting.
We use structures in finding out the list of equipment attached to the computer

Basic Syntax -
*/
#include <stdio.h>
#include <string.h>
// we have to struct the new variable globally in this way
struct Student // name of the data type
{
    int rno; // variables under Students
    int class;
    char section;
    char full_name[100];
} tabu; // now we have created a data type as int and we can use it in same way. and you can create instant variable using it.
// Now you can create those variable globally if you write those into functions those can only be accessed with in function scope.
struct Student Raja; // raja having global scope.
int main(int argc, char const *argv[])
{
    struct Student Ane, Tanee, Tha, Soumya; // name of Student data type variables
    // Now you can set their data like this
    Ane.rno = 3;
    Tanee.rno = 7;
    Tha.rno = 10;
    Soumya.rno = 1;
    Ane.class = 10;
    Tanee.class = 10;
    Tha.class = 10;
    Soumya.class = 10;
    Ane.section = 'C';
    Tanee.section = 'C';
    Tha.section = 'C';
    Soumya.section = 'C';
    // but you can't store character array means string like others you can use copy function from string
    strcpy(Ane.full_name, "Anirudhya Das");
    printf("%c\n", Ane.section);
    puts(Ane.full_name);
    // Basic Facts to know about structure as you work with it you will know more about it.
    return 0;
}
