#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *filename = "bt01.txt";
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
    }else{
    	char input[100];
        printf("Nhap chuoi moi de them vao file: ");
        fgets(input, sizeof(input), stdin);
        fprintf(file, "%s", input);
        fclose(file);
	}

    return 0;
}
