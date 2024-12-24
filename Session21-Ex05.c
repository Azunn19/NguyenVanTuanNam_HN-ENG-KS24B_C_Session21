#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *filename = "bt05.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Khong the tao hoac mo file %s\n", filename);
    }else{
    	int numLines;
        printf("Nhap so dong can ghi vao file: ");
        scanf("%d", &numLines);
        getchar();
        for (int i = 0;i < numLines; i++){
            char line[100];
            printf("Nhap noi dung cho dong %d: ", i + 1);
            fgets(line, sizeof(line), stdin);
            fprintf(file, "%s", line);
        }
        fclose(file);
	}
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
        return 1;
    }else{
    	printf("\nNoi dung file %s:\n", filename);
        char line[100];
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
	}

    return 0;
}
