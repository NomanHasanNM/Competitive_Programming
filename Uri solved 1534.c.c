#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    int ara[72][72];
    while(scanf("%d",&h)!=EOF)
    {
        for(a=0; a<h; a++)
        {
            for(b=0; b<h; b++)
                ara[a][b]=3;
        }
        for(a=0; a<h; a++)
            ara[a][a]=1;
        d=h-1;
        for(a=0,b=d; a<h;a++,b--)
            ara[a][b]=2;
        for(a=0; a<h; a++)
        {
            for(b=0; b<h; b++)
                printf("%d",ara[a][b]);
            printf("\n");
        }
    }
    return 0;
}
