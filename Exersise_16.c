#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[200] = "Yes! I am Alone, No one Prefers me from myself too. Hope It will be Fine.";
    printf("%s\n",str); 
    int i = 0, ini = 0, end = 0;
    while (i <= strlen(str)+1)
    {
        if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '\0')
        {
            end = i - 1;

            for (int j = end; j >= ini; j--)
            {
                printf("%c", str[j]);
            }
            if (str[i] == '.')
            {
                printf(".");
            }
            else if (str[i] == ',')
            {
                printf(",");
            }
            else if (str[i] == '!')
            {
                printf("!");
            }
            else
            {
                printf(" ");
            }

            ini = i + 1;
        }
        i++;
    }

    return 0;
}
