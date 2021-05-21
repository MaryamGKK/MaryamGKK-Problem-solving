#include <iostream>

using namespace std;

int main()
{
    string s;
    bool flag[26] = {false};
    getline(cin, s);
    int dist = 0;
    for(int i = 1;i<s.size()-1;i+=3){
        if(flag[s[i] - 97] == false){
            dist++;
            flag[s[i] - 97] = true;
        }
    }
    cout<<dist;
    return 0;
}
