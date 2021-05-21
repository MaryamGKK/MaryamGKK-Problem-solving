#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int birds[n];
    for(int i=0; i<n;i++){
        cin>>birds[i];
    }
    int m,x,y;
    cin>>m;
    while(m){
        cin>>x>>y;
        int temp = birds[x-1];
        if(x-1 == 0){
            birds[0] = 0;
            birds[1] += temp-y;
        }
        else if(x == n){
            birds[x-1] = 0;
            birds[x-2] += y-1;
        }
        else{
            birds[x-1] = 0;
            birds[x-2] += y-1;
            birds[x] += temp-y;
        }
        m--;
    }
    for(int i=0; i<n;i++){
        cout<<birds[i]<<endl;;
    }
    return 0;
}
