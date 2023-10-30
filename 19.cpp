#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int studentID;
    char name[50];
    int age;
    float gpa;
};

void addStudent(struct Student students[], int *count);
void deleteStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void sortStudentsByName(struct Student students[], int count);

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("===== Quan Ly Sinh Vien =====\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. Hien thi danh sach sinh vien\n");
        printf("4. Sap xep sinh vien theo ten\n");
        printf("0. Thoat\n");
        printf("Chon mot chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                deleteStudent(students, &count);
                break;
            case 3:
                displayStudents(students, count);
                break;
            case 4:
                sortStudentsByName(students, count);
                printf("Da sap xep sinh vien theo ten.\n");
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

void addStudent(struct Student students[], int *count) {
    if (*count == MAX_STUDENTS) {
        printf("Khong the them sinh vien. Danh sach da day.\n");
        return;
    }

    struct Student newStudent;

    printf("Nhap ma sinh vien: ");
    scanf("%d", &newStudent.studentID);

    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]s", newStudent.name);

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);

    printf("Nhap diem GPA cua sinh vien: ");
    scanf("%f", &newStudent.gpa);

    students[*count] = newStudent;
    (*count)++;

    printf("Da them sinh vien moi.\n");
}

void deleteStudent(struct Student students[], int *count) {
    if (*count == 0) {
        printf("Khong co sinh vien de xoa.\n");
        return;
    }

    int studentID;
    int found = 0;

    printf("Nhap ma sinh vien can xoa: ");
    scanf("%d", &studentID);

    for (int i = 0; i < *count; i++) {
        if (students[i].studentID == studentID) {
            found = 1;

            for (int j = i; j < (*count) - 1; j++) {
                students[j] = students[j + 1];
            }

            (*count)--;
            printf("Da xoa sinh vien co ma %d.\n", studentID);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ma %d.\n", studentID);
    }
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien de hien thi.\n");
        return;
    }

    printf("Danh sach sinh vien:\n");
    printf("------------------------------\n");
    printf("Ma SV\tTen\t\tTuoi\tGPA\n");
    printf("------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", students[i].studentID, students[i].name, students[i].age, students[i].gpa);
    }

    printf("------------------------------\n");
}

void sortStudentsByName(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien de sap xep.\n");
        return;
    }

    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
