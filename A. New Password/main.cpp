#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string password = "";
    for(int i = 0;i<k;i++){
        char c = char('a'+i);
        password.push_back(c);
    }
    for(int i = 0;i<(n-k);i++){
        password.push_back(password[i]);
    }
    cout<<password;
    return 0;
}
