#include <stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
		printf("Enter the value of a :");
		scanf("%d",&a);
		printf("Enter the value of b :");
		scanf("%d",&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int t;
		t=a;
		a=b;
		b=t;
		printf("The value of a after swapping is %d\nThe value of b after swapping is %d\n",a,b);
}