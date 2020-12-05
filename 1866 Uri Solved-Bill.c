#include <stdio.h>
int main()
{
    int moni,noman,love;
    scanf("%d", &moni);
    for(noman=1; noman<=moni; noman++)
    {
        scanf("%d", &love);

        if(love%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
