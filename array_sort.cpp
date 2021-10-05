#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,v[1001],i,ok,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    ok=0;
    while(ok==0)
    {
        ok=1;
        for(i=1;i<=n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                k=v[i];
                v[i]=v[i+1];
                v[i+1]=k;
                ok=0;
            }
        }
    }
    cout<<"Ascending order:"<<endl;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl<<endl<<endl;
    cout<<"Descending order:"<<endl;
    for(i=n;i>=1;i--)
        cout<<v[i]<<" ";
    return 0;
}
