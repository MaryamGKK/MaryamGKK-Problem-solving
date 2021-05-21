#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float n, t, k, d;
   cin>>n>>t>>k>>d;
   int nofbatches = ceil(n/k);
   int t1 = nofbatches * t;
   int t2;
   int to1 = t, to2 = t+d;
   n-=2*k;
   while(n>0){
        if(to1<to2){
            to1+=t;
            n-= k;
        }
        else{
            to2+=t;
            n-=k;
        }
   }
   t2 = max(to1, to2);
   if(t1<=t2){
    cout<<"NO";
   }
   else{
    cout<<"YES";
   }

    return 0;
}
