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
            j++;
        }ch++;
        i++;
        cout<<endl;
    }return 0;
}
//Output:
// 3
// A A A
// B B B
// C C C
