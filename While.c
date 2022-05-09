/*
while loop:-
While loop is called a pre-tested loop. The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. While studying for loop, we have seen that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated on the basis of the Boolean (true or false) test condition.
*/
//Syntax for while loop.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    while(i< 10){
        printf("I am Counting on you.\n");
        i+=1;
    }
    return 0;
}
