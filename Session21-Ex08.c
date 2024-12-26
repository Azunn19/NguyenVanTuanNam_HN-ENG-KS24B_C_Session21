#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
};
int readFromFile(struct Student students[]) {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file students.txt.\n");
        return 0;
    }
    int i = 0;
    while (fscanf(file, "%d,%49[^,],%d\n", &students[i].id, students[i].name, &students[i].age) == 3) {
        i++;
        if (i >= 100) {
            break;
        }
    }
    fclose(file);
    return i;
}
void printStudents(struct Student students[], int size) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d\n",
               students[i].id, students[i].name, students[i].age);
    }
}
int main() {
    struct Student students[100];
    int size = readFromFile(students);

    if (size > 0) {
        printStudents(students, size);
    } else {
        printf("Khong co du lieu sinh vien trong file hoac file bi loi.\n");
    }

    return 0;
}
