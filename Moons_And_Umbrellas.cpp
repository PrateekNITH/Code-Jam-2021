#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x,y,cost=0,j=0,k=0;
        bool flag=0;
        cin>>x>>y;
        string arr;
        cin>>arr;
        char a[1000];
        
        for(j=0;j<arr.length();j++)
        {
            if(arr[j]!='?')
            {
                flag=1;
                a[k]=arr[j];
                k++;
            }
        }
        
        for(j=1;j<k;j++)
        {
            if(a[j]=='J')
            {
                if(a[j-1]=='C')
                cost=cost+x;
            }
            
            if(a[j]=='C')
            {
                if(a[j-1]=='J')
                cost=cost+y;
            }
        }
        
        if(flag==1)
        {
            cout<<"Case #"<<i<<": "<<cost<<"\n";
        }
        else
        {
            cout<<"Case #"<<i<<": 0\n";
        }
        
    }
    
    return 0;
}
