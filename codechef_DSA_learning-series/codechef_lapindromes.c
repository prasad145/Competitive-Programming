#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,i,j,c;
    char str1[1001],str2[501],str3[501],search;
    scanf("%d",&t);
    while(t--)
    {
    	memset(str1, '\0' ,sizeof str1);
        memset(str2, '\0',sizeof str2);
        memset(str3, '\0' ,sizeof str3);

        scanf("%s",str1);

        a=strlen(str1);

        for(i=0;i<a/2;i++)
        {
            str2[i]=str1[i];
        }

        if(a%2!=0)
        {
            j=0;
            for(i=a-1;i>a/2;i--)
            {
            str3[j]=str1[i];
            j++;        
            }
        }
        else
        {
            j=0;
            for(i=a-1;i>=a/2;i--)
            {
                str3[j]=str1[i];
                j++;
            }
        }
        
        for(i=0;i<strlen(str2);i++)
        {
            search=str2[i];
            for(j=0;j<strlen(str3);j++)
            {
                if(str3[j]==search)
                {
                    str3[j]='0';
                    break;
                }
            }
        }
        for(i=0;i<strlen(str3);i++)
        {
            if(str3[i]!='0')
            {
                printf("NO\n");
                break;
            }
        }
        if(i==strlen(str3))
        {
            printf("YES\n");
        }
    }
    return 0;
}