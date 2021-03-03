
#include<stdio.h>
#include<string.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t--)
    { int count=0;
    char str[100],str1[100],str2[100],str3[100];
    char ani[100],ani1[100],ani2[100],ani3[100];
    scanf("%s %s %s %s",str,str1,str2,str3);
    scanf("%s %s %s %s",ani,ani1,ani2,ani3);
    if(strcmp(str,ani)==0)
    {
        count++;
    }
    if(strcmp(str,ani1)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str,ani2)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str,ani3)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str1,ani)==0)
    {
        count++;
    }
    if(strcmp(str1,ani1)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str1,ani2)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str1,ani3)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }

    }
    if(strcmp(str2,ani)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str2,ani1)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str2,ani2)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str2,ani3)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str3,ani)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str3,ani1)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str3,ani2)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(strcmp(str3,ani3)==0)
    {
        count++;
        if(count==2)
        {
            goto label;
        }
    }
    if(count<2)
    {
        printf("dissimilar\n");
    }
    else
    {
        label:
        printf("similar\n");
    }

    }
}
