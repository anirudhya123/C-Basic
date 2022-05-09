// Switch is a simplified form of a If else in some cases. Let's see syntax and other
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("What is your Case: \n");
    scanf("%d", &a);

    switch (a) // switch takes a variable according to the value it has it takes cases and finally if any of them doesn't match it will print default.
    {
    case 1: // case 1 should run when the value of a is 1
        printf("I have Crush on you.");
        break; // break isn't mandetory after all if you use break after case satisfaction it will leave the switch else it will visit other cases and so on.
    case 2:
        printf("I love you."); // into switch case you can use another switch case that is called as nested Switch same as nested loop and if else etc.
        scanf("%d",&b);
        switch (b) // this is a nested switch 
        {
        case 1:
            printf("I Don't even Like You.");
            break;// this will break from the child swich not from the Parent 
        case 2:
            printf("I Love You. too");
            break;
        case 3:
            printf("I love You. But as a Friend.");
            break;
        default:
            printf("Who are you?");
            break;
        }
        break;
    case 3:
        printf("You are One of my good Friends.");
        break;
    case 4:
        printf("You are Just Friend.");
        break;

    default:
        printf("You are just a Class mate"); // when any of cases doesn't satisfy then it will run else if no break statement is used then it will also run and it doesn't need a break as it is the end of the Swich .
    }

    return 0;
}
