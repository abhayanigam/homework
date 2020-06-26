#include <stdio.h>
#define max 100
void line_by_line(int no){
    int arr[100];
    int j,i=0,r;
        while (no!=0) {
            r = no%10;
            arr[i] = r;
            i++;
            no = no/10;
        }
        for (j=i-1; j>-1; j--) {
            printf("Number : %d\n",arr[j]);
        }
}
void sum_digit(int no){
    int sum=0;
        while (no) {
            sum += no%10;
            no /=10;
        }
    printf("The sum of the number is %d\n",sum);
}
void total_digit(int no){
    int n=0;
    while (no!=0) {
        no = no/10;
        n++;
    }
    printf("Number of digit are %d\n",n);
}
int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    line_by_line(no);
    sum_digit(no);
    total_digit(no);
}
