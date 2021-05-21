#include <iostream>

using namespace std;

int main()
{
    int n, b,d,o,juiced=0, e = 0;
    cin>>n>>b>>d;
    for(int i = 0;i< n;i++){
        cin>>o;
        if(juiced >d){
            e++;
            juiced = 0;
        }
        if(o<=b){
                juiced+=o;;
        }

    }
    if(juiced > d){
            e++;
            juiced = 0;
        }
    cout<<e;
    return 0;
}
