#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char ten[100];
    float diem;
} SinhVien;

void sap_xep_theo_ten(SinhVien danh_sach[], int n) {
    int i, j;
    SinhVien temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(danh_sach[i].ten, danh_sach[j].ten) > 0) {
                temp = danh_sach[i];
                danh_sach[i] = danh_sach[j];
                danh_sach[j] = temp;
            }
        }
    }
}

void sap_xep_theo_diem(SinhVien danh_sach[], int n) {
    int i, j;
    SinhVien temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (danh_sach[i].diem < danh_sach[j].diem) {
                temp = danh_sach[i];
                danh_sach[i] = danh_sach[j];
                danh_sach[j] = temp;
            }
        }
    }
}

void tim_kiem_theo_ten(SinhVien danh_sach[], int n, char ten_can_tim[]) {
    int i;
    printf("Ket qua tim kiem sinh vien theo ten '%s':\n", ten_can_tim);
    for (i = 0; i < n; i++) {
        if (strstr(danh_sach[i].ten, ten_can_tim) != NULL) {
            printf("ID: %d, Ten: %s, Ðiem: %.2f\n", danh_sach[i].id, danh_sach[i].ten, danh_sach[i].diem);
        }
    }
}

void tim_kiem_theo_id(SinhVien danh_sach[], int n, int id_can_tim) {
    int i;
    printf("Ket qua tin kiem  sinh vien theo ID '%d':\n", id_can_tim);
    for (i = 0; i < n; i++) {
        if (danh_sach[i].id == id_can_tim) {
            printf("ID: %d, Ten: %s, Diem: %d\n", danh_sach[i].id, danh_sach[i].ten, danh_sach[i].diem);
            return;
        }
    }
    printf("Khong tim thay sinh vien nao co ID la %d\n", id_can_tim);
}

int main() {
    int n, i, sap_xep_theo;
    SinhVien *danh_sach;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    danh_sach = (SinhVien *)malloc(n * sizeof(SinhVien));

    for (i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("  ID: ");
        scanf("%d", &danh_sach[i].id);
        printf("  Ten: ");
        scanf("%s", &danh_sach[i].ten);
        printf("  Diem: ");
        scanf("%f", &danh_sach[i].diem);
    }

    printf("\nDanh sach sinh vien truoc khi xap xep:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Tên: %s, Diem: %.2f\n", danh_sach[i].id, danh_sach[i].ten, danh_sach[i].diem);
    }

    printf("\nChon cach sap xep (1 - theo ten, 2 - theo diem): ");
    scanf("%d", &sap_xep_theo);

    if (sap_xep_theo == 1) {
        sap_xep_theo_ten(danh_sach, n);
    } else if (sap_xep_theo == 2) {
        sap_xep_theo_diem(danh_sach, n);
    }
}
