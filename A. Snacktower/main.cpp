#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int snacks[n];
    bool visited[n];
    for(int i = 0;i<n;i++){
        cin>>snacks[i];
    }
    int cnt = n;
    for(int i = 0;i<n;i++){
        visited[snacks[i]] = true;
        while(visited[cnt]&&cnt>0){
            cout<<cnt<<" ";
            cnt--;
        }
        cout<<" "<<endl;
    }
    return 0;
}
