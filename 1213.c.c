#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int noman,moni,jan;
    while(scanf("%lli", &noman) == 1)
    {
        moni = 1;
        jan = 1;
        while(moni % noman != 0)
        {
            moni = (10 * moni + 1) % noman;
            jan++;
        }
        printf("%lli\n",jan);
    }
    return 0;
}


