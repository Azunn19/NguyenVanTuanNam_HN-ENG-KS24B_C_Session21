#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *sourceFile = "bt01.txt";
    const char *destFile = "bt06.txt";
    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Khong the mo file %s de doc.\n", sourceFile);
        return 1;
    }
    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Khong the mo file %s de ghi.\n", destFile);
        fclose(src);
        return 1;
    }
    char input[100];
    while (fgets(input, sizeof(input), src) != NULL) {
        fputs(input, dest);
    }
    fclose(src);
    fclose(dest);

    return 0;
}
