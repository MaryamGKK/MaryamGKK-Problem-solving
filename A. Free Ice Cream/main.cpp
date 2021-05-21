#include <iostream>

using namespace std;

int main()
{
   long long int n,x,d;
    cin>>n>>x;
    long long int s = 0;
    char ind ;
    while(n){
        cin>>ind>>d;
        if(ind == '+'){
            x+=d;
        }
        else{
            if(d>x){
                s++;
            }
            else{
                x-=d;
            }
        }
        n--;
    }
    cout<<x<<" "<<s;
    return 0;
}
