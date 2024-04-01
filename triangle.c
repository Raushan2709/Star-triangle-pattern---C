// star printing pattern 
/*

*
**
***
****

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n+4;i++)
    {
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            printf("*");

        }
        n=n-1;
    }
    return 0;
}