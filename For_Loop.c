/*
In C language most important loop is For loop there is some arguments we have to know as using the for loop.
for ( initialize counter ; test counter ; increment/decrement counter)
 {
 //set of statements
 }
initialize counter: It will initialize the loop counter value, i.e., i=0.
test counter: It verifies whether the condition is true.
Increment/decrement counter: Incrementing or decrementing the counter.
Set of statements: Execute the set of statements.
Every arguments can be optional and you can give more than oen condition or cases for each
Break Statement :
Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after loop or switch case.
Break statements are used to bring the program control out of the loop.
The break statement is used inside loops or switch statement in C Language.
Continue Statement :
The continue statement is used inside loops in C Language. When a continue statement is encountered inside the loop, control jumps to the beginning of the loop for next iteration, skipping the execution of statements inside the body of loop after continue statement.
It is used to bring the control to the next iteration of the loop.
The continue statement skips some code inside the loop and continues with the next iteration.
It is mainly used for a condition so that we can skip some lines of code for a particular condition.
It forces next iteration in loop i.e. as break terminates the loop but continue forces the next iteration of the loop.
*/
// Primary Syntax
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    for (int i = 0; i < 100; i += 10) // here 1st argument is the initializing a variable it is optional as the variable can be initialized already. 2nd One is the Condition to be reached you can give more than one condition but only the final condition will be treated as Prime others will be statements and it is also optional but with out it it will become a infinite loop. and last one is for increment it is also optional and more than one giveable.
    {
        printf("%d\n", i);
    }
    for (; a < 5, b < 10; a -= 1, b++) // you can see it is controlled by the second condition and both side they are increasing and decreasing.
    {
        printf("%d %d\n", a, b);
        if (a < -5){
            break; // it will left the loop
        }
        if (b > 5){
            continue; // it will stop the further executuion for this iteration and start next iteration.
        }
        printf("It will Be not Executed if continue condition matched\n");
    }

    return 0;
}
