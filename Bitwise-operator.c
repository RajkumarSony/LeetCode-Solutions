#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return a>b?a:b;
}

void calculate_the_maximum(int n, int k) {
    int max_and=0, max_or=0, max_xor=0;
    int and, or, xor, i, j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            and = i&j;
            or = i|j;
            xor = i^j;
            if(and<k)
            {
                max_and = max(and, max_and);
            }
            if(or<k)
            {
                max_or = max(or, max_or);
            }
            if(xor<k)
            {
                max_xor = max(xor, max_xor);
            }
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
