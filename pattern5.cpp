#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=1;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<k++<<" ";
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
//Output:
// 3
// 1 2 3
// 4 5 6
// 7 8 9
