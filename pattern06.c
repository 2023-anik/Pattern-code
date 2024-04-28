#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
typedef long long int ll;
const int N=1e5+10;
char str[(int)1e7+10];
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
