#include<stdio.h>
int main()
{
    int n=0,m=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int sum=0,row=0,col=0;
        scanf("%d",&m);
        int a[m][m];
        for(int i=0;i<m;i++)
        {
            int f=0;
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                if(i==j)
                sum=sum+a[i][j];
            }
            for(int j=0;j<m;j++)
            {
                for(int k=j+1;k<m;k++)
                {
                    if(a[i][j]==a[i][k])
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                break;
            }
            if(f==1)
            row=row+1;
        }
        for(int j=0;j<m;j++)
        {
            int l=0;
            for(int i=0;i<m;i++)
                {
                    for(int k=i+1;k<m;k++)
                    {
                        if(a[i][j]==a[k][j])
                        {
                            l=1;
                            break;
                        }
                    }
                    if(l==1)
                    break;
                }
                if(l==1)
                col=col+1;
        }
        printf("Case #%d: %d %d %d\n",i,sum,row,col);
    }
    return 0;
}
