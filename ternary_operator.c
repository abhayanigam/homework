// implimentation ternary operator in array and return.
#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d.\n",i == 2 ? arr[i] : arr[i]);
    }
    //return(i==2 ? 1 : 0);
}