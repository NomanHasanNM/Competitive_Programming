
#include<stdio.h>
int main()
{
    int x,y,z,m;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)break;
        scanf("%d%d",&y,&m);
        z=sqrt(x*y*100/m);
        printf("%d\n",z);
    }
}
