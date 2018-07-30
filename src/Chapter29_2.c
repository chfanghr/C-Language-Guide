/*用*跳过scanf接收的数字*/
#include<stdio.h>
int main(void)
{
        int num;
        printf("Please enter three number:\n");
        scanf("%*d %*d %d",&num);
        printf("The last number is %d\n",num);
        return 0;
}