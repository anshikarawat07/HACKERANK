#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  int a,b, m1=0,m2=0,m3=0;
  for(a=1;a<n;a++)
  {
      for(b=a+1;b<=n;b++)
      {
      if((a&b)>m1 && (a&b) < k)
      m1= a&b ;
      if((a|b)>m2 && (a|b) < k)
      m2=a|b;
      if((a^b)>m3 && (a^b) < k)
      m3=a^b;
      } 
  }
  printf("%d\n",m1);
  printf("%d\n",m2);
  printf("%d",m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
