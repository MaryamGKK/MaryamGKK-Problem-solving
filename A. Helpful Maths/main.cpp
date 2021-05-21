#include <iostream>

using namespace std;

int main()
{
    string s,s2 = "";
    cin>>s;
    int n1 = 0, n2 = 0, n3 = 0;
    for(int i= 0;i<s.size();i+=2){
        if(s[i] == '1'){n1++;}
        if(s[i] == '2'){n2++;}
        if(s[i] == '3'){n3++;}
    }
    for(int i = 0;i<n1;i++){
        s2 = s2 + '1' +'+';
    }
    for(int i = 0;i<n2;i++){
        s2 = s2 + '2' +'+';
    }
    for(int i = 0;i<n3;i++){
       s2 = s2 + '3' +'+';
    }
    s2 = s2.substr(0, s2.size()-1);
    cout<<s2;
        return 0;
}
