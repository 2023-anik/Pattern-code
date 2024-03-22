#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int k=i;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k--<<" ";
            j++;
        }i++;
        k=i;
        cout<<endl;
    }return 0;
}
//Output:
// 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
