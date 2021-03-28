#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int t,q;
    cin>>t;
    for(q=1;q<=t;q++)
    {
        int n,ce,j,i,remain,pos,poi,temp;
        cin>>n;
        cin>>ce;
        int jarr[n-1];
        int arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        
        if(ce<(n-1)||ce>(n*(n+1)/2-1))
        {
            cout<<"Case #"<<q<<": IMPOSSIBLE\n";
        }
        else
        {
            //Processing
            for(i=0;i<n-1;i++)
            {
                //found remainder
                remain=ce-(n-i-2);
                
                //logic
                
                if(remain>=n-i)
                {
                    jarr[i]=n-1;
                    ce=ce-(n-i);
                }
                else if(remain==1)
                {
                    jarr[i]=i;
                    ce=ce-1;
                }
                else
                {
                  pos=(n-i)-remain;
                  jarr[i]=n-1-pos;
                  ce=ce-(jarr[i]-i+1);
                  //review logic for ce
                }
                
              
            }
            
            
            //jarr with value for j is ready
            //now just backtracking is needed
            
            //backtracking in this loop
            for(i=n-2;i>=0;i--)
            {
                j=jarr[i];
                
                //swapping
                
                for(poi=i;poi<=i+(j-i)/2;poi++)
                {
                    temp=arr[poi];
                    arr[poi]=arr[j-poi+i];
                    arr[j-poi+i]=temp;
                }
                
            }
            //output
            cout<<"Case #"<<q<<": ";
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            
        }
    }
    
    return 0;
}
