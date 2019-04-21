#include<stdio.h>

int main()
{
    FILE *output_file;
    output_file = fopen("b.txt", "w");
    char input[80];
    gets(input);
    fputs(input, output_file);

    return 0;
}

