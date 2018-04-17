#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    getchar();
    while (tc--)
    {
        char s1[1000],s2[1000];
        gets(s1);
        gets(s2);
        if (!strcmp(s1,s2)) printf("Case %d: Yes\n",c++);
        else
        {
            char s3[1000];
            int l=strlen(s1);
            int k=-1;
            for (int i=0;i<l;i++)
                if (s1[i]!=' ') s3[++k]=s1[i];
            s3[++k]='\0';
            if (!strcmp(s2,s3)) printf("Case %d: Output Format Error\n",c++);
            else printf("Case %d: Wrong Answer\n",c++);
        }
    }
    return 0;
}
