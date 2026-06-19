#include<stdio.h>
int main()
{
    int a,c, i=0, j;
    char b[100];
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b[i]=a%10;
    a=a/10;
    i++;
    }
    for(j=i-1;j>=0;j--)
    {
    printf("\n%c",b[j]+'0');
    }
    return 0;
}