/*Three Turn Computer vs human  Rock Paper Scissor using Randint function.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int RandInt(int a)
{
    srand(time(NULL));
    return rand() % a;
}
int Eval(int user, int computer)
{
    if (user == computer)
    {
        return 3;
    }
    else
    {
        if (user == 0 && computer == 2)
        {
            return 1;
        }
        else if (user == 2 && computer == 0)
        {
            return 2;
        }
        else
        {
            if (user > computer)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    char user_name[200];
    int response;
    puts("*** Welcome to Rock Paper Scissor World . Anirudhya Creation. ***\n");
    puts("Please Give your UserName : ");
    gets(user_name);

    while (1)
    {
        printf("Hello %s . Please Read rules : \n*Press 0 for Scissor; \n*Press 1 for Rock; \n*Press 2 for Paper\n+*Press 9 for Exit.", user_name);
        puts("Now Give Response : ");
        scanf("%d", &response);
        if (response == 9)
        {
            printf("Thanks For Visiting Us.\n");
            break;
        }
        else
        {
            int computer = RandInt(3);
            printf("%s's Input - %d\n", user_name, response);
            printf("Computer's Input - %d\n", computer);
            int result = Eval(response, computer);
            if (result == 3)
            {
                printf("Draw. \n");
            }
            else if (result == 1)
            {
                printf("%s Won\n", user_name);
            }
            else
            {
                printf("Computer Won.\n");
            }
            // printf("%d",result);
        }
    }

    return 0;
}
