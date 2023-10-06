#include <stdio.h>


int tim_so_chan_trong_mang(){
//    int main(){
        int n ;

        // nhap so luong phan tu cua mang
        printf("Nhap so luong phan tu cua mang :  ");
        scanf("%d",&n);

        //khai bao mang voi so luong phan tu n
        int arr[n];

        // nhap cac phan tu vao mang
        printf("nhap cac phan tu cua mang : \n");
        for (int i = 0; i < n; i++){
            printf("phan tu %d:", i + 1);
            scanf("%d", &arr[i]);
        }

        //In ra cac so chan trong mang
        printf("cac so chan trong mang la : ");
        for (int i = 0 ; i < n ; i++){
            if(arr[i] % 2 == 0){
                printf("%d",arr[i]);
            }
        }
        printf("\n");

    return 0;


    }
//}