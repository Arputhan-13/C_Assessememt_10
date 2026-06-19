#include<stdio.h>
int main()
{
    char a[100];
    int i = 0;
    printf("Enter the String : ");
    scanf("%s", a);
    while(a[i] != '\0')
    {
    i++;
    }
    printf("Length of String : %d", i);
}