#include<stdio.h>
#include<string.h>
  
struct _INFO
{
        int num; 
        char str[256];
};
  
int main()
{
        struct _INFO A; 
        A.num = 2018;
        strcpy(A.str,"Welcome to this fu*king thing");
        printf("This year is %d %s\n",A.num,A.str);
        return 0;
}