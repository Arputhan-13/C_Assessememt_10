#include<stdio.h>
int main()
{
    int a[50];
    char b[51];
    int n, i;
    printf("Enter the Number of Digits : ");
    scanf("%d",&n);
    printf("Enter the Digits : ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    b[i]=a[i]+'0';
    }
    b[i] = '\0';
    printf("%s",b);
    return 0;
}