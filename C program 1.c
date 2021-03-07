//Write a program in C to print the array elements using recursion.
#include <stdio.h>
#include <conio.h>
int arr(int b)
{
    int n;
    for(int j=1;j<=b;j++)
    {scanf("%d",&n);
    return n;}
}
int main()
{
    int a,z[20];
    printf("Number of array element\n");
    scanf("%d",&a);
    printf("Enter elements:\n");
    for(int i=1;i<=a;i++)
    {
    z[i]=arr(a);
    }
    printf("Array elements: ");
    for(int i=1;i<=a;i++)
    printf("%d ",z[i]);
    return 0;
}
