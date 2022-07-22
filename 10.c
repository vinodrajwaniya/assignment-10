#include <math.h>
#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter an number: ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\n",i*i*i);
        i--;
    }
    getch();
}
