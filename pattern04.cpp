#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        char ch='A';
        while(j<n){
            cout<<ch<<" ";
            ch++;
            j++;
        }i++;
        cout<<endl;
    }return 0;
}
//Output:
// 3
// A B C
// A B C
// A B C
