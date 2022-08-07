#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[200] = "He Prefers. I Prefers You Prefers.";
    char word[100] = "Prefers";
    printf("%s\n", str);
    int i = 0, ini = 0, end = 0, count = 0;
    while (i <= strlen(str) + 1)
    {
        if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '\0')
        {
            end = i - 1;

            int word_ini = 0;
            while (word[word_ini] != '\0')
            {
                if (word[word_ini] != str[ini + word_ini])
                {
                    for (int j = ini; j <= end; j++)
                    {
                        printf("%c", str[j]);
                    }
                    break;
                }
                if (word_ini == strlen(word) - 1)
                {
                    printf("Refers");
                    count += 1;
                }
                word_ini += 1;
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
    printf("|| It Presents %d times into the Sentence. \n", count);
    return 0;
}
