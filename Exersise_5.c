// Reversal of Array
#include<stdio.h>
#include<string.h>
void arr_rev(int arr[],int size_arr){
    // Style - 1
    for (int i = 0; i < size_arr; i++)
    {   
        printf("%d ",arr[size_arr-i-1]);
    }
    printf("\n");
    // Style - 2
    for (int i = 0; i <= size_arr/2; i++)
    {
        int x = arr[i];
        arr[i] = arr[size_arr-i-1];
        arr[size_arr-i-1] = x;
    }
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    int array[] = {12,5,85,96,45,78,65,23,14,8};
    // Determining Size of array using (Size of array / size of single element of array)
    size_t n = sizeof(array) / sizeof(array[0]); 
    arr_rev(array,n);

    return 0;
}
