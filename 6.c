#include <math.h>
#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter an number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i+1);
        i++;
    }
    getch();
}
