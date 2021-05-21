#include <iostream>

using namespace std;

int main()
{
   long long int n;
   cin>>n;
   long long int arr[n];
   for(long long int i = 0;i<n;i++){
    cin>>arr[i];
   }
   cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0]-arr[n-1])<<endl;
   for(int i = 1;i<n-1;i++){
        long long int mn1 = abs(arr[i-1]-arr[i]);
        long long int mn2 = abs(arr[i]-arr[i+1]);
        long long int mx1 = abs(arr[0]-arr[i]);
        long long int mx2 = abs(arr[i]-arr[n-1]);
        cout<<min(mn1,mn2)<<" "<<max(mx1,mx2)<<endl;
   }
   cout<<abs(arr[n-2]-arr[n-1])<<" "<<abs(arr[0]-arr[n-1]);
    return 0;
}
