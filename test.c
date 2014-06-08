#include <stdio.h>
#include <stdlib.h>
# define N 100
void main()
{
int square[N];
int m,n,k;
int i=0,j=0;
scanf("%d",&n);
tc:
scanf("%d",&m);
j=0;
square[i]=0;
tcin:
scanf ("%d",&k);
if(k>0) {
    square[i] += k*k;
}
j++;
if(j<m) goto tcin;
i++;
if (i<n) goto tc;
i=0;
printf("\n Output \n");
print:
printf("%d\n",square[i]);
i++;
if (i<n) goto print;
}
