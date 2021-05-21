#include <iostream>

using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;
    for(int i =0;i<n;n--){
        cin>>a;
        int b = a/2;
        if(a%2==0){
            cout<<b<<endl;
            sum += b;
        }
       else{
        if(sum%2==0&&b%2==0||sum%2!=0&&b%2!=0){
            cout<<b<<endl;
        }
        else if(sum%2!=0&&b%2==0||sum%2==0&&b%2!=0){
            if(b>=0){
                 b+=1;
                 cout<<b<<endl;
            }
            else{
                b-=1;
                cout<<b<<endl;
            }
        }
            sum+=b;
       }
    }
    cout<<sum<<endl;
    return 0;
}
