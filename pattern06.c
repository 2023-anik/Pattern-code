#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k=1;
    for(int i=1; i<=n; ++i){
        for(int l=i; l<n; ++l)
            printf("  ");
        for(int j=1; j<=k; j++)
            printf("* ");
        printf("\n");
        k+=2;
    }
    return 0;
}
//input: 3
// output:
//     *
//   * * *
// * * * * *
