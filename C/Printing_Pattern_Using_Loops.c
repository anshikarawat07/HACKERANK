#include <stdio.h>
int main() 
{
      int n,i,j,a=0,b,k,p,c;
      scanf("%d", &n);
      for(i=0;i<(n*2)/2;i++)
      {
              a=0;
              while(a<=i)
                {
                    printf("%d ",n-a);
                    a++;
                }
                for(k=a;k<n*2-1-i;k++)
                {
                    printf("%d ",n-i);
                }
                a=k;
                c=1;
                while(a<n*2-1)
                {
                    printf("%d ",n-i+c);
                    a++;
                    c++;
              }
            printf("\n");
      }
        c=0;
        for(i=n;i<n+n-1;i++)
        {
              a=0;
              while(n-a>2+c)
              {
                  printf("%d ",n-a);
                  a++;
              }
              b=a+1;
              while(b != n*2-a)
              {
                  printf("%d ",2+c);
                  b++;
              }
              for(k=b,p=1;k<n*2;k++,p++)
              {
                  printf("%d ",2+c+p);
              }
              c++;
          printf("\n");
        }
      
    return 0;
}
