#include <math.h>
#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter an number: ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\n",2*i);
        i--;
    }
    getch();
}
