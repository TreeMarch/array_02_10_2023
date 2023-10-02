#include <stdio.h>

//int demo02_array(){
    int main(){
        int arry[10];
        int i ;
        int total ;
        int avarage;

        arry[0] = 4;
        arry[1] = 8;
        arry[2] = 5;
        arry[3] = 3;
        arry[4] = 2;
        arry[5] = 0;
        arry[6] = 9;
        arry[7] = 10;
        arry[8] = 11;
        arry[9] = 6;

        int max = arry[0];
        int min = arry[0];

    printf("\n tat ca cac so trong chuoi la :");

    for (i = 0; i < 10; ++i) {
            printf("\n [%d] is %d ",i , arry[i]);
                if(max < arry[i] ) max = arry[i];
                if(min > arry[i] ) min = arry[i];
                total += arry[i];
        }

        printf("\n so lon nhat la - %d", max);
        printf("\n so lon nhat la - %d", min);
        printf("\n tong cua tat ca la - %d \n",total);
        printf("so trung binh la  - %d\n", total/10);

}
//}