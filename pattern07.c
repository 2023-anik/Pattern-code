#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k=n+2;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<i; j++)
            printf("  ");
        for(int j=1; j<=k; j++){
            printf("* ");
        }
        printf("\n");
        k-=2;
    }
    return 0;
}
// input: 5
// output:
// * * * * * * * 
//   * * * * * 
//     * * * 
//       * 
