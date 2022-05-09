// Sample If else code for C
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int age;
    // printf("Enter Your Age: ");
    // // scanf("%d",&age);
    // if (age > 18){
    //     printf("You can Vote");
    // }
    // else if (age <= 1){
    //     printf("You can't vote");
    // }
    // else{
    //     printf("Do what ever you wa2nt.");
    // }

    int Subject;
    printf("Choose Your Subject : ");
    scanf("%d",&Subject);
    if (Subject == 1){
        printf("You have got 50 Points");
    }
    else if (Subject == 2)
    {
        printf("You have got 70 points");
    }
    else if (Subject == 3)
    {
        printf("You have got 100");
    }
    else
    {
        printf("Bye Bye.");
    }
    
    
    

    return 0;
}
