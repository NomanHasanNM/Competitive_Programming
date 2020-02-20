#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char moni, noman[200];
    int M,a,b;
    scanf("%c", &moni);
    scanf("%c", &noman);
    while(moni  != '0')
    {
        M = strlen(noman);
        for(a = 0; a < M; a++)
        {

            if(noman[a] == moni)
            {
                for(b = 0; b < M; b++)
                noman[b] = noman[b+1];
                noman[M-1] = 0;
                M--;
                a++;
            }
            else
                break;
        }
        if(M == 0)
        {
            noman[0] = '0';
            noman[1] = '\0';
        }
        printf("%s\n",&moni);
        scanf("%c", &moni);
        scanf("%s", &noman);
    }
    return 0;
}
