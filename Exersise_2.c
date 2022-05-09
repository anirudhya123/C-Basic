// Small Type Converter Programme Using Loop.
#include <stdio.h>
float km_miles(int a)
{
    return (float)(a * 0.621371);
}
float inches_foot(int a)
{
    return (float)(a * 0.0833);
}
float cm_inches(int a)
{
    return (float)(a * 0.393701);
}
float pound_kg(int a)
{
    return (float)(a * 0.45359237);
}
float inches_meter(int a)
{
    return (float)(a * 0.0254);
}
int main(int argc, char const *argv[])
{
    int a;
    while (1)
    {
        printf("Choose Number between 0 to 5 : ");
        scanf("%d",&a);
        if (a == 0){
            printf("Thanks For Using Converter.");
            break;
        }
        else if (a == 1)
        {
            int f;
            printf("Give your Values in Inches : ");
            scanf("%d",&f);
            printf("# %d Inches ~ %f Foots\n", f, inches_foot(f));

        }
        else if (a == 2)
        {
            int f;
            printf("Give your Values in Kilo Meter : ");
            scanf("%d",&f);
            printf("# %d Km ~ %f miles\n", f, km_miles(f));

        }
        else if (a == 3)
        {
            int f;
            printf("Give your Values in Cent Meter : ");
            scanf("%d",&f);
            printf("# %d Cm ~ %f Inches\n", f, cm_inches(f));

        }
        else if (a == 4)
        {
            int f;
            printf("Give your Values in Pound : ");
            scanf("%d",&f);
            printf("# %d Pound ~ %f Kilograms\n", f, pound_kg(f));

        }
        else if (a == 5)
        {
            int f;
            printf("Give your Values in Inches : ");
            scanf("%d",&f);
            printf("# %d Inches ~ %f Meters\n", f, inches_meter(f));

        }
        else{
            printf("Invalid Input.\n");
        }
        
    }
    // you can use switch case also.
    
    return 0;
}
