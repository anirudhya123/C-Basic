// Take one dynamic array and save three employee id one by one
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *pointer;
    int a;
    for (int i = 0; i < 3; i++)
    {
        printf("Length of your Id. : \n");
        scanf("%d", &a);
        pointer = (char *)malloc((a + 1) * sizeof(char));

        printf("Give your %d th letter\n", i);
        scanf("%s", pointer);

        printf("Your Id is : \n");
        printf("%s", pointer);
        free(pointer);
    }
    return 0;
}
