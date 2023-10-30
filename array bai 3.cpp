#include <stdio.h>

#define MAX_STUDENTS 50 

int main() {
    int numStudents, i;
    float marks[MAX_STUDENTS], sum = 0.0, average;

    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        printf("So luong sinh vien khong hop le.\n");
        return 1;
    }

    
    for (i = 0; i < numStudents; i++) {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &marks[i]);

        
        sum += marks[i];
    }

    
    average = sum / numStudents;

    
    printf("Diem trung binh cua lop la: %.2f\n", average);

    return 0;
}
