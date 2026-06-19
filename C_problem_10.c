#include<stdio.h>
int main()
{
    char a[50];
    int i=0, j;
    printf("Enter the Number : ");
    scanf("%s",&a);
    while(a[i]!='\0')
    {
    i++;
    }
    for(j=i-1;j>=0;j--)
    {
    printf("%c",a[j]);
    }
}