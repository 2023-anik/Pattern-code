#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i+1<<" ";
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
// Output:
// 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
