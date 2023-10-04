#include <stdio.h>

int cur_weather(){
//    int main(){

        int i ;
        float temp[3];
            for (int i = 0; i < 3; i++) {
                printf("\ntemperature of day %d\n",i+1);
                scanf(" %f",&temp[i]);
            }
//            int index_max = 0;
//            int index_min = 0;
            float max = temp[0];
            float min = temp[0];


            for (int i = 1; i < 3; i++)
            {
                if (temp[i] > max)
                    max = temp[i];

                if (temp[i] < min)
                {
                    min = temp[i];

                }
            }

            printf("Ngay co nhiet do cao nhat la : %.2f\n",max);
            printf("Ngay co nhiet do thap nhat la : %.2f\n",min);


    }
//}