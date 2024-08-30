#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    gets(s);
    s = realloc(s, strlen(s) + 1);
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        s[i]='\n';
    }
    puts(s);
    return 0;
}
