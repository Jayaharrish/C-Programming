#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
    for(int i=a;i<b;i++)
    {
        for(int j=a;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d",i);
        }
 
    }
    return 0;
}
