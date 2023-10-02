#include <stdio.h>

//int demo_array(){
    int main (){
//        int ary[10];
//        int i;
//        int total = 0;
//        int max = 0;
//        int min = 0;
//        for (i = 0; i < 0;i++)
//        {
//
//        }
    int ary[7];
        int i ;
        ary [0] = 1;
        ary [1] = 6;
        ary [2] = 8;
        ary [3] = 3;
        ary [4] = 9;
        ary [5] = 2;
        ary [6] = 4;

            int max = ary[0];
            int min = ary[0];
            for (i = 0; i < 7 ; i++) {
                printf("\n number at [%d] is %d \n", i, ary[i]);

                if (max < ary[i]) max = ary[i];
                if (min > ary[i]) min = ary[i];

//                printf("\n max - %d\n", max);
//                printf("\n min - %d\n", min);
            }
    printf("\n max - %d\n", max);
    printf("\n min - %d\n", min);

}
//}