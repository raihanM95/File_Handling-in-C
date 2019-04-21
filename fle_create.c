#include<stdio.h>

int main()
{
    FILE *name;
    char n[3]=
    scanf("%s", &n);

    char *n_n = ".txt";

    name = fopen(n, "w");

    fclose(name);
    return 0;
}
