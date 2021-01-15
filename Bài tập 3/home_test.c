#include <stdio.h>

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);
    int a, b, c;
    int i,j;
    int max_and = 0, max_or = 0, max_xor = 0;
    //int max_and = 0;
    for( i = 1; i <= k; i++)
    {
        for(j = i + 1;j <= n; j++)
        {
            a = i & j;
            if((a<k) && (a>max_and))
                max_and  = a;
            b = i | j;
            if((b<k) && (b>max_or))
                max_or = b;
            c = i ^ j;
            if((c<k) && (c>max_xor))
                max_xor = c;
        }
    }
   printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
  // printf("%d\n", max_and);
 
    return 0;
}
