#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
};
void saveToFile(struct Student students[], int size) {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }
    fclose(file);
    printf("Thong tin sinh vien da duoc luu vao file students.txt.\n");
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
    saveToFile(students, n);

    return 0;
}
