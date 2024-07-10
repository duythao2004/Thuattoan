#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    int day, month, year;
} Date;

typedef struct Node {
    char SBD[10];
    char hoTen[50];
    Date ngaysinh;
    float Toan, Van, Anh, DTB;
    struct Node *next;
} Node;

Node *head = NULL;

void nhapThiSinh() {
    Node *newNode = (Node*)malloc(sizeof(Node));
    printf("Nhap SBD: ");
    scanf("%s", newNode->SBD);
    printf("Nhap ho ten: ");
    getchar(); 
    fgets(newNode->hoTen, 50, stdin);
    newNode->hoTen[strcspn(newNode->hoTen, "\n")] = 0; 
    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &newNode->ngaysinh.day, &newNode->ngaysinh.month, &newNode->ngaysinh.year);
    printf("Nhap diem Toan: ");
    scanf("%f", &newNode->Toan);
    printf("Nhap diem Van: ");
    scanf("%f", &newNode->Van);
    printf("Nhap diem Anh: ");
    scanf("%f", &newNode->Anh);
    newNode->DTB = (newNode->Toan + newNode->Van + newNode->Anh) / 3.0;
    newNode->next = head;
    head = newNode;
}

void hienThiDanhSach() {
    if (head == NULL) {
        printf("Danh sach trong!\n");
        return;
    }

    Node *temp = head;
    int stt = 1;
    printf("DANH SACH DIEM THI\n");
    printf("STT\tSBD\tHo Ten\t\tNgay sinh\t\tToan\tVan\tAnh\tDTB\n");
    while (temp != NULL) {
        printf("%d\t%s\t%s\t%02d/%02d/%04d\t%.2f\t%.2f\t%.2f\t%.2f\n", stt, temp->SBD, temp->hoTen, 
               temp->ngaysinh.day, temp->ngaysinh.month, temp->ngaysinh.year, temp->Toan, temp->Van, temp->Anh, temp->DTB);
        temp = temp->next;
        stt++;
    }
}

void xoaThiSinh() {
    char sbd[10];
    printf("Nhap SBD cua thi sinh can xoa: ");
    scanf("%s", sbd);

    Node *temp = head, *prev = NULL;

    while (temp != NULL && strcmp(temp->SBD, sbd) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Khong tim thay thi sinh voi SBD: %s\n", sbd);
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("Da xoa thi sinh voi SBD: %s\n", sbd);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Tao danh sach thi sinh\n");
        printf("2. Hien thi danh sach thi sinh\n");
        printf("3. Xoa thi sinh\n");
        printf("4. Ket thuc\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapThiSinh();
                break;
            case 2:
                hienThiDanhSach();
                break;
            case 3:
                xoaThiSinh();
                hienThiDanhSach();
                break;
            case 4:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}