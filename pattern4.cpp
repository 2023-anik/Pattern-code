#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<n-j<<" ";
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
// output:
// 4
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
