#include<stdio.h>
//using namespace std;
int main()
{
    int t,initial_state,rounds,prediction;
    scanf("%d\n",&t);
    scanf("%d\n",&g);
    for(int i=0;i<g;i++)
    {
        printf("%d%d%d\n",initial_state,rounds,prediction);
        while(t--)
        {
            if((rounds%2!=0) && (initial_state==prediction))
            {
                printf("%d\n",(rounds>>1));
            }
            printf("%d\n",(1+(rounds>>1)));
        }
    }
}