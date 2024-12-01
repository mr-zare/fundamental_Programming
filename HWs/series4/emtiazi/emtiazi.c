#include<stdio.h>
int main()
{
    int a[100],i,j,t=0,b[100],n,max=0,m=0,k,l,m1,m2;
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    m1=a[0];
    m2=b[0];
    c=1;
    for ( i = 0; i < n; i++)
    {
        
        for ( j = 0; j <= 24; j++)
        {
            t=0;
            for ( k = 0; k <n; k++)
            {
                if(a[k]<=j && b[k]>=j)
                {
                    t++;
                }
            }
            l=n-t;

            if(t>max)
            {
                max=t;
                m=j;
            }
        }
    }
    printf("%d\n%d",max,m);
    
    


}
