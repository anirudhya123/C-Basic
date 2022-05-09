/*
Entry Controlled loops: In entry controlled loops, the test condition is evaluated before entering the loop body. The For Loop and While Loop are an example of entry controlled loops.
Exit Controlled Loops: In exit controlled loops, the test condition is tested at the end of the loop. The loop body will execute at least once, whether the test condition is true or false. The do-while loop is an example of an exit controlled loop.
break statement:
When a break statement is encountered inside a loop whether it is a for loop or a while loop, the loop is terminated and the program continues with the statement immediately following the loop.
continue statement:
Using a continue statement in the loop will cause the control to go directly to the test-condition and then it will continue the loop process.

*/
// To do looped works we uses loops. three types of loops in C . Today we will learn Do while . Basically when we have to execute minimum one time whatever the condition is then do while is good.
// syntax  for do while
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Enter a Desire NUmber \n");
    scanf("%d",&num);
    do{
        printf("%d\n",index); // what ever the condition is it will run minimum one time
        index += 1; 
    }while(index <= num); // No explanation needed
    return 0;
}
