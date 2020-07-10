//to store sentence with new line like :- scanf("%[^\n]%*c",&variable_name);
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the no.:");
    scanf("%[ A-Za-z]",str);
    printf("%s\n",str);
}


//brk(0) terminates the program and acts like return statement.
#include <stdio.h> 
int main() 
{ 
    printf("geeksforgeeks"); 
    brk(0); 
}


//“%m” when used within printf() prints “Success”:
#include <stdio.h> 
int main() 
{ 
    printf("%m"); 
    return 0; 
}


#include <stdio.h>
int main()
{
    int x =10;
    while (x-->0) // x goes to 0
    {
        printf("%d\n",x);
    }
    printf("\n");
}
/*
Output:
9 8 7 6 5 4 3 2 1 0
Press any key to continue . . .
*/


//Add numbers without ‘+’ operator
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number x:");
    scanf("%d",&x);
    printf("Enter the number y:");
    scanf("%d",&y);
    if (y==0) {
        return x;
    }
    else{
        printf("%d\n",x^y,(x&y)<<1);
        //(>>) for substraction
        //(>>) for addition
    }
}
