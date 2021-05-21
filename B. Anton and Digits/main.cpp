#include <iostream>

using namespace std;

int main()
{
    int k2, k3, k5, k6, k256 = 0, k32 = 0;
    cin>>k2>>k3>>k5>>k6;
    while(k2&&k5&&k6){
        k256++;
        k2--;
        k5--;
        k6--;

    }
    while(k2&&k3){
        k32++;
        k2--;
        k3--;
    }
    cout<<k256*256+32*k32;
    return 0;
}
