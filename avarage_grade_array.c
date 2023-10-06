#include <stdio.h>

int diem_trung_binh_mang(){
//    int main(){
        char subject[] [50] = {"toan","van","ly","hoa","sinh"};
        float grades[5];
        float total_grades = 0.0;
        float avarge_grades;

        //nhap diem cho tung mon hoc
    for (int i = 0; i < 5; i++) {
            printf("nhap diem cho mon hoc %s: ", subject);
            scanf("%f",&grades[i]);
            total_grades += grades[i];
    }

    // tinh diem trung binh
    avarge_grades = total_grades / 5.0;

    // Hien thi diem cua tung mon ho va diem trung binh
    printf("\nDiem cua tung mon hoc : \n");
    for (int i = 0; i < 5 ; i++) {
        printf("%s : %.2f \n ",subject[i],grades[i]);
    }

    printf("\n Diem trung binh : %.2f \n",avarge_grades);
    return 0;

    }
//}