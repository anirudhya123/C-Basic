#include <stdio.h>
#include <stdlib.h>

struct person
{
	int age;
	float weight;
	char name[30];
};
int main(int argc, char const *argv[])
{
	struct person *ptr;
	int n;
	printf("Enter the Number of Persons:\n");
	scanf("%d", &n);
	ptr = (struct person *)malloc(n * sizeof(struct person));
	for (int i = 0; i < n; i++)
	{
		printf("Enter Name and Age Respectively: ");
		scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
	}
	printf("Displaying Information:\n");
	for (int i = 0; i < n; i++)
	{
		printf("Name: %s\tAge:%d\n", (ptr + i)->name, (ptr + i)->age);
	}

	return 0;
}
