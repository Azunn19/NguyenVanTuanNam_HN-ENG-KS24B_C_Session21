#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *filename = "bt01.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
    }else{
        char firstLine[100];
        if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong file %s la: %s", filename, firstLine);
        }else{
            printf("File %s rong hoac khong co dong nao\n", filename);
        }
        fclose(file);
	}

    return 0;
}
