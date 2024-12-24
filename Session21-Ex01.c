#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *filename = "bt01.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Khong the tao hoac mo file %s\n", filename);
    }else{
    	char input[100];
        printf("Nhap mot chuoi bat ki: ");
        fgets(input, sizeof(input), stdin);
        fprintf(file, "%s", input);
        fclose(file);
	}

    return 0;
}
