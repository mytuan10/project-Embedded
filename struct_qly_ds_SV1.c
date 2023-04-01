#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct SinhVien
{
    char name[30];
    int age;
    char gt[5];
    float dL, dT, dH;
    float dtb = 0;
}

typedef SinhVien SV;

void nhap(SV &sv);
void xuat(SV a[], int n);
void dtb(SV &sv);
void xepLoai(SV a[], int n);
void xuatFile(SV a[], int n, char FileName[]);

int main()
{
    int key;
    char fileName[] = "new_file.txt";
    int n;
    bool daNhap = false;
    do
    {
        printf("Nhap so luong SV \n");
        scanf("%d", &n);

    } 
    while {
        
        
    }
    return 0;
}

void nhap(int n)
{
    

}


