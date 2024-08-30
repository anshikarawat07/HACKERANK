#include <stdio.h>
void update(int * ,int *);
int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
void update(int *a,int *b) 
{
        int x;
        x= *a;
        *a= *a + *b;
        if(x > *b)
        {
         *b=x - *b;
        }
       else 
        {
         *b = *b - x; 
        }
}
