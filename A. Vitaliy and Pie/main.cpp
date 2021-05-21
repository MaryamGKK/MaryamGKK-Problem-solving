#include <iostream>
using namespace std;

int main()
{
    int n, ans=0;
    string s;
    cin>>n>>s;
    int cnt[26] = {0} ;

    for(int i = 0;i<s.size();i++){
        if(islower(s[i])){
            cnt[s[i]-'a']++;
        }
        else{
            if(cnt[tolower(s[i])-'a'] > 0){
                cnt[tolower(s[i])-'a']--;
            }
            else{
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
