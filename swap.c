#include <stdio.h>
#define p printf(
#define s scanf(
#define f )
#define m printf("\n")

void swap(int a,int b);
int main()
{
	int a,b;
		p"Enter the value of a :" f;
		s"%d",&a f;
		p"Enter the value of b :" f;
		s"%d",&b f;
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	a=a-b;
	b=b+a;
	a=b-a;
		p"The value of a after swapping is %d\nThe value of b after swapping is %d\n",a,b f;
}
