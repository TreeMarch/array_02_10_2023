#include <stdio.h>

//int so_luong_va_diem_thi_sinh(){
    int main(){
        int sv;
        int count = 0;
        float diem[sv];
        printf("nhap so luong sinh vien : ");
        scanf("%d",&sv);

        for (int i = 0; i < sv; ++i) {
            printf("\nnhap diem cho sinh vien %d : ", i+ 1);;
            scanf("%f",&diem[i]);
        }
        for (int i = 0; i <sv; ++i) {
            if(diem[i] < 5){
                count++;
            }
        }
        printf("so luong sinh vien truot la %d", count);
    return 0;
    }
//}