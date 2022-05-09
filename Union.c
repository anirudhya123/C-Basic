/*
// Basic Concept -
Union is another User defined datastructure into C. It is same as Structure so what is the difference ? Uninon saves
lots of memory that's it. But how ? It takes only one memory location for all the variable located into a union.
Confusing? yes it is. But the concept is union used only one memory location as you can use or print only one
variable at a time others will contain garbage values. But in case of Structure it doesn't think about space it just take
whatever you want . as you get to pro level in C you will understand the real value of space and uninon till then you
must have to know the concept and it is uninon only use one memory location to control multiple variable.

// Some  formal theory :
What are the similarities between Structure and Union
Structure and union are user-defined data types used to store data of different types.
The members of structure and union can be objects of any type, including other structures and unions or arrays.
A union or a structure can be passed by value to functions and returned by value by functions.
‘.’ operator is used for accessing union and structure members.
What are the differences between Structure and Union
The keyword union is used to define a union and a keyword struct is used to define the structure
Each member within a structure is assigned a unique storage area of location whereas memory allocated is shared by individual members of the union.
Individual members can be accessed at a time in structure whereas only one member can be accessed at a time in union
Altering the value of the member will not affect other members of the structure, whereas altering the value of any member will affect other member's values.
Several members of a structure can be initialized at once, whereas only one member can be initialized in union

Basic Syntax -
*/
#include <stdio.h>
#include <string.h>
union Employee
{
    int id;
    float grade;
    char position[50];
};

int main(int argc, char const *argv[])
{
    union Employee Ramesh;
    Ramesh.id = 4005896;
    strcpy(Ramesh.position, "Junior");
    Ramesh.grade = 0.85;
    // until it is structure it will take 4 + 4 + 1 * (50) == 58 bytes what ever the condition is but in case of uninon
    // it will take the highest byte and it will use for every time and only save single variable at a time just see
    // Just replace struct with union
    printf("%d \n", Ramesh.id);
    printf("%f \n", Ramesh.grade);
    printf("%c \n", Ramesh.position); // see in case of union only the final command is taking space others are garbage .
    return 0;
}
