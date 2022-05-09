// Travel Agency maneger - Easy version limited count
#include <stdio.h>
#include <string.h>
typedef struct Driver
{
    char Name[100];
    int License_No;
    char Route[250];
    int Driven_Km;

} Dr;

int main(int argc, char const *argv[])
{
    // for 3 drivers
    Dr Driver1, Driver2, Driver3;
    for (int i = 0; i < 3; i++)
    {
        char name[100], route[250];
        int lic_no, dri_km;
        if (i == 0)
        {
            printf("Give a Name : ");
            strcpy(Driver1.Name, gets(name));
            printf("Give Route : ");
            strcpy(Driver1.Route, gets(route));
            printf("Give Licence No : ");
            scanf("%d", &lic_no);
            Driver1.License_No = lic_no;
            printf("Give Driving Km : ");
            scanf("%d", &dri_km);
            Driver1.Driven_Km = dri_km;
        }
        if (i == 1)
        {
            printf("Give a Name : ");
            gets(name);
            strcpy(Driver2.Name, name);
            printf("Give Route : ");
            strcpy(Driver2.Route, gets(route));
            printf("Give Licence No : ");
            scanf("%d", &lic_no);
            Driver2.License_No = lic_no;
            printf("Give Driving Km : ");
            scanf("%d", &dri_km);
            Driver2.Driven_Km = dri_km;
        }
        if (i == 2)
        {
            printf("Give a Name : ");
            strcpy(Driver3.Name, gets(name));
            printf("Give Route : ");
            strcpy(Driver3.Route, gets(route));
            printf("Give Licence No : ");
            scanf("%d", &lic_no);
            Driver3.License_No = lic_no;
            printf("Give Driving Km : ");
            scanf("%d", &dri_km);
            Driver3.Driven_Km = dri_km;
        }
        
    }
    printf("~|%s |~| %s |~| %d |~| %d |~\n",Driver1.Name,Driver1.Route,Driver1.Driven_Km,Driver1.License_No);
    printf("~|%s |~| %s |~| %d |~| %d |~\n",Driver1.Name,Driver2.Route,Driver2.Driven_Km,Driver2.License_No);
    printf("~|%s |~| %s |~| %d |~| %d |~\n",Driver1.Name,Driver3.Route,Driver3.Driven_Km,Driver3.License_No);
    // Bug in Taking Driver names
    
    return 0;
}
