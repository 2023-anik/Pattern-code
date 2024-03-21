#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=n*n;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<k--<<" ";
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
//Output:
// 3
// 9 8 7
// 6 5 4
// 3 2 1

