#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,j,n,i,k;
    cin>>m;
    for(j=1;j<=m;j++)
    {
        long long int a=0,c=0;
        string str,ans="";
        cin>>str;
        for(i=0;i<str.length();i++)
        {
            c=0;
            for(k=i+1;k<str.length();k++)
            {
                if(str[i]!=str[k]) break;
                else c++;
            }
            for(a;a<(str[i]-48);a++) {ans+="(";}
            for(k=0;k<=c;k++) {ans+=str[i];}
            i=i+c;
            if((i+1)<str.length())
            {
                if((str[i+1]-48)<(str[i]-48))
                {
                    for(k=1;k<=((str[i]-48)-(str[i+1]-48));k++) {ans+=")"; a--;}
                }
            }
            if(i==str.length()-1)
            {
                for(k=1;k<=a;k++) {ans+=")";}
                break;
            }
        }
        cout<<"Case #"<<j<<": "<<ans<<endl;
    }
    return 0;
}
