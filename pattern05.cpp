#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    char ch='A';
    while(i<n){
        int j=0;
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
// D E F
// G H I
