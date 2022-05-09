/*Storage Class defines Scope, Default Initial Value, Lifespan of a variable in C. don't confuse with Scope and Life span
Scope means the range and lifespan is the time.

# Depending on Those classification we can divide into some type of variable.
1. Automatic Variable - Default , Local Scope, Garbage value, end of function block into they are called. int x == auto int a
2. External Variable - Global Variables -written out side any function initial value is 0 ,Using Extern Keyword - used to inform compiler that this variable is defined in another function or another programme can be.
3. Static Variable - Takes a constant value while defining and can't be defined more than one time.
4. Register Variable - to get a space in Register in CPU as it is very fast memory. have to request to get it. Classifications are same as auto just storage location is different for faster use.

As we know about auto and Static and we can't visualize Register value so we will just learn External Variable.
 */
#include <stdio.h>
#include "extern.c" // if we include some another c file it's all code will be accessed by this programme now so it will error that two main
// to understand use of extern keyword we have to create a c file and have to include here.
int x = 100;  // Global Variable or External
extern int l; // now it will confuse that we have called l previous but here defined again. now you can use extern key word to tell complier that this will come from some where this is one use of extern
int func(int a)
{
    // int x; when normal int x is defined it is printing some garbage value
    extern int x; // but while using extern it is catching global x so we can use a extern keyword to use global key word into function.
    static int r; // Static Variable
    r++;
    printf("%d", x);
}
int main(int argc, char const *argv[])
{
    register int y = 10;  // you can't find any difference but it will be more faster.
    auto int a, b; // Declaration // Local / Auto
    a = 50;        // Definition
    func(a);
    return 0;
}
