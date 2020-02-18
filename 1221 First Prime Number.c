#include <stdio.h>
#include <math.h>
int main()
{
    int n, moni, i, j;
    long m;
    scanf("%d", &n);

    for(i = 0; i <n; i++)
    {
        moni = 0;
        scanf("%ld", &m);
        if(m == 0)
        {
            printf("%s\n", "Not Prime");
            continue;
        }
        if(m == 1)
        {
            printf("%s\n", "Not Prime");
            continue;
        }
        if(m == 2)
        {
            printf("%s\n", "Prime");
            continue;
        }
        for(j = 2; j < sqrt(m)+1; j++)
        {
            if(m%j == 0)
                moni++;
            if(moni == 2)
                break;
        }
        if(moni >= 1)
            printf("%s\n", "Not Prime");
        else
            printf("%s\n", "Prime");
    }
    return 0;
}
