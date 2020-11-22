#include<stdio.h>
#include<stdlib.h>
int main()
{
    int noman,moni,a,b,c;
    int cont, love;
    int meetup[50];
    scanf("%d",&noman);
    for(a = 0; a < noman; a++)
    {
        scanf("%d", &moni);
        cont = 0;
        for(b = 0; b < moni; b++)
        {

            scanf("%d",&meetup[b]);
        }
        for(b = 0; b < moni; b++)
        {

            for(c = b+1; c < moni; c++)
            {

                if(meetup[b] > meetup[c])
                {

                    love = meetup[b];
                    meetup[b] =meetup[c];
                    meetup[c] = love;
                    cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cont);
    }
    return 0;
}
