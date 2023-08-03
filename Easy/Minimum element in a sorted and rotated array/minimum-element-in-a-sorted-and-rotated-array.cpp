//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int temp = INT_MAX;
        
        int l=0,h=n-1;
        
        while(l<=h){
            int m = (l+h)/2;
            temp = min(temp,arr[m]);
            
            if(arr[l]<arr[m]){
                temp=min(temp,arr[l]);
                l=m+1;
            }
            else{
                temp=min(temp,arr[h]);
                h=m-1;
            }
        }
        
        return temp;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends