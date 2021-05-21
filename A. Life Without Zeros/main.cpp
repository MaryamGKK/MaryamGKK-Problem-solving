#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c = a + b;
    string x,y,z;
    x = to_string(a);
    y = to_string(b);
    z = to_string(c);
    x.erase(remove(x.begin(), x.end(), '0'), x.end());
    y.erase(remove(y.begin(), y.end(), '0'), y.end());
    z.erase(remove(z.begin(), z.end(), '0'), z.end());
    string z2 = to_string(stoi(x) + stoi(y));
    if(z.compare(z2) == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
