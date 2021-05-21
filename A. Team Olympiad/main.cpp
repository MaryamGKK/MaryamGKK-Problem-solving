#include <iostream>

using namespace std;

int main()
{
    int n, tn = 0,n1 = 0,n2 = 0,n3 = 0;
    cin>>n;
    int arr[n];
    bool flag[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 1){n1++;}
        if(arr[i] == 2){n2++;}
        if(arr[i] == 3){n3++;}
    }
    tn = min(min(n1,n2),n3);
    cout<<tn<<endl;
    int arr1[n1],arr2[n2],arr3[n3],i1 = 0,i2 = 0,i3 = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            arr1[i1] = i+1;
            i1++;
        }
        if(arr[i] == 2){
            arr2[i2] = i+1;
            i2++;
        }
         if(arr[i] == 3){
            arr3[i3] = i+1;
            i3++;
        }
    }
    for(int i = 0;i<tn;i++){
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
    }
    return 0;
}
