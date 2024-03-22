#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=i;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<++k<<" ";
            j++;
        }
        i++;
        k=i;
        cout<<endl;
    }return 0;
}
//Output:
// 4
// 1
// 2 3
// 3 4 5
// 4 5 6 7
