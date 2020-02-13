#include<stdio.h>
int main()
{
    int c,n,j;
    float moni,m;
    scanf("%d",&c);
    while(c > 0)
    {
        scanf("%d",&n);
        moni = 0;
        m = 0;
        int num[n];
        for(j = 0; j < n; j++)
        {
            scanf("%d",&num[j]);
            moni+=num[j];
        }
        moni /= n;
        for(j =0; j < n; j++)
        {
            if(num[j] > moni)
                m++;
        }
        printf("%.3f%c\n",m/n*100.00,'%');
        c--;
    }
    return 0;
}

