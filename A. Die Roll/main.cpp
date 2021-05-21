#include <iostream>

using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    if(max(y,w)== 6){
        cout<<"1/6";
    }
    else if(max(y,w) == 5){
        cout<<"1/3";
    }
    else if (max(y,w) == 4){
        cout<<"1/2";
    }
    else if(max(y,w) == 3){
        cout<<"2/3";
    }
    else if(max(y,w) == 2){
        cout<<"5/6";
    }
    else{
        cout<<"1/1";
    }
    return 0;
}
