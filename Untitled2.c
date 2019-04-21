#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("ini.txt", "r");

    int c;

    printf("Enter a number:");
    scanf("%d", &c);

    fseek(fp, 0, 0, "%d", &c);
    //fprintf(fp, "%d", c);

    fclose(fp);

    return 0;
}

