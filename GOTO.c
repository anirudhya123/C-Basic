/*In C  we have a jump statemnt named Go to it is mostly avoided by programmers as it causes some confusion. But it can be used to get out from all nested loops as we know if we use break it will be out from only obe for loop not from the parent one. only in this case we can use it.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Confusing syntax
    // label:
    //     printf("We are Inside the level \n");
    // printf("Hello World. \n");
    // goto label;     // as a result you can see it is infinite loop and it is also not understandable.

    // Useful Syntax :
    int a; 
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter 0 to exit this Loop \n");
            scanf("%d",&a);
            if(a == 0){
                goto end; // se how you make can use it.
                // break; // it will break for this loop not it's parent one but if we want to leave both we can use go to
            }
        }
        
    }
    end :
        printf("We are out of the loop.");
    
    return 0;
}
