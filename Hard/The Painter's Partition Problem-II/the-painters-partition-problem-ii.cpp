//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool check(long long int p, int arr[], int n, int m){
        
        long long int c = 1, sum = 0;
        
        for(int i=0;i<n;i++){
            if(sum+arr[i]>p){
                sum=0;
                c++;
            }
            if(sum+arr[i]<=p){
                sum+=arr[i];
                
            }
            else{
                return false;
            }
        }
        
        return c<=m;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        long long int ans = INT_MAX, l = *min_element(arr,arr+n), h = 0;
        for(int i=0;i<n;i++){
            h+=arr[i];
        }
        
        while(l<=h){
            long long int mid = (l+h)/2;
            
            if(check(mid,arr,n,k)){
                ans=min(ans,mid);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends