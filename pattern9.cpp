#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<++k<<" ";
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
// Output:
// 3
// 1
// 2 3
// 4 5 6
