#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int pos = 0;
    for(int i = 0;i<b.size();i++){
        if(b[i] == a[pos]){
            pos++;
        }
    }
    cout<<pos+1;
    return 0;
}
