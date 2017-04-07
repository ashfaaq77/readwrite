#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;

    printf("Enter a text\n");

    fp = fopen("test.txt", "w+");

    char str[200];

    gets(str);

    fprintf(fp,str);



    return 0;
}
