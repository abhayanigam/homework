// Function-like Macros

#include <stdio.h>
#define max(x,y) ((x) < (y) ? (y) : (x))

int main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    int ans = max(a,b);

    printf("The max no. is %d \n",ans);
}