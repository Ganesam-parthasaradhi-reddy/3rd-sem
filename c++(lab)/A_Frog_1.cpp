#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int idx){
    int min =0;
    while(idx<n-1){
    if(idx + 2 >= n ||abs(arr[idx]-arr[idx+1])<abs(arr[idx]-arr[idx+2]))
    {
        min+=abs(arr[idx]-arr[idx+1]);
        idx++;
    }
    else{
        min+=abs(arr[idx]-arr[idx+2]);
        idx+=2;
    }
    
   }
   return min;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
          {
            cin >> arr[i];

          }
         cout << solve(arr,n,0) << endl;
    }
}