//Reversort
#include<iostream>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int cost=0,j,n,temp,poi,k;
        cin>>n;
        int arr[n];
        //Input
        for(j=0;j<n;j++)
            cin>>arr[j];
        //Processing
        for(j=0;j<n-1;j++)
        {
           k=j;
           while(arr[k]!=j+1)
                k++;
            
            //found k for reversal
            cost = cost+k-j+1;
            //reversing
            for(poi=j;poi<=j+(k-j)/2;poi++)
            {
                temp=arr[poi];
                arr[poi]=arr[k-poi+j];
                arr[k-poi+j]=temp;
            }
            
        }
        
        //Processing ends
        
        
        
        //Output
        cout<<"Case #"<<i<<": "<<cost<<"\n";
    }
    
    return 0;
}
