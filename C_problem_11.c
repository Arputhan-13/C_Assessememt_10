#include<stdio.h>
int main()
{
    char a[50];
    int b[50];
    int i=0, j;
    printf("Enter the Number : ");
    scanf("%s",&a);
    while(a[i]!='\0')
    {
    i++;
    }
    for(j=0;j<i;j++)
    {
    b[j]=a[j]-'0';
    printf("%d",b[j]);
    }
}