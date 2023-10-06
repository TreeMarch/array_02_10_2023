#include <stdio.h>

//int test_01(){
    int main() {
        int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int i;
        int so_can_tim ;// output cua bai
        int found ; // la mot bien dung de kiem tra xem so can tim co o trong mang hay khong .
        int phan_tu  = sizeof(arry) / sizeof (arry[0]); //bien dung de kiem tra xem co bn phan tu trong mang

    printf("Cac phan tu cua mang la : ");
    for ( i = 0; i < phan_tu ; ++i) {
        printf("%d\n",arry[i]);
    }

    printf("\nNhap phan tu can tim la : ");
    scanf("%d",&so_can_tim);

    for (i = 0; i < so_can_tim ; i++){
        if (arry[i] == so_can_tim){
            printf("Phan tu %d duoc tim thay o vi tri %d\n",so_can_tim,i);
            found = 1; //
        }
    }
    if(!found){
        printf("Phan tu % khong co trong mang. \n", so_can_tim);
    }
}
