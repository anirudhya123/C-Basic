// It is a simple html parser as input - <b>Hello World</b> output - Hello World
#include<stdio.h>
#include<string.h>
void html_parser(char html[200]){
    typedef char* char_pointer;
    char_pointer a,b,c;
    a = strtok(html,">");
    // puts(a);
    b = strtok(NULL,"<");
    printf("%s \n",b);
}
int main(int argc, char const *argv[])
{
    char input[200];
    printf("Give a Simple Html line to Parse :  ");
    gets(input);
    html_parser(input);
    return 0;
}
