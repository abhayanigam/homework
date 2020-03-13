#include <stdio.h>

void printer(int lines);
void printerline(int i);

int main()
{
	
	printer(10);
	return 0;	
}

void printer(int lines){
 	
	for (int i = 0; i < lines; ++i)
	{

   	 printerline(i);

	}	

}
void printerline(int i)
{
	char a='*';
   for (int j = 0; j < (4*i); )
		{
			printf(" %c ",a);

			j = j +1;
		}
		printf("\n");
}