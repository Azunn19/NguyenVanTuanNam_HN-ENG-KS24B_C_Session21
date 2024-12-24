#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *filename = "bt01.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
    }else{
    	char firstChar = fgetc(file);
        if (firstChar == EOF) {
            printf("File %s trong\\n", filename);
        }else{
            printf("Ky tu dau tien trong file %s la: '%c'\n", filename, firstChar);
        }
        fclose(file);
	} 
	
    return 0;
}
