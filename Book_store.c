#include <stdio.h>

int book_store(){
//    int main(){
        int choice;
        int cart[3] = {0};
        int total_price = 0;

        printf("\t\t\t Welcome to our BOOK STORE \t\t\t\n");

        do {
            printf("1. The Lord Of The Ring\n");
            printf("2. Harry Potter\n");
            printf("3. The Hunger Game\n");
            printf("4. Check Out\n");

            printf("Please ,enter your choice :");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    cart[0]++;
                    total_price = +10;
                    printf("You just added The Lord Of The Ring to your cart.\n");
                    break;
                case 2:
                    cart[1]++;
                    total_price = +12;
                    printf("You just added Harry Potter to your cart.\n");
                    break;
                case 3:
                    cart[2]++;
                    total_price = +8;
                    printf("You just added The Hunger Game to your cart.\n");
                    break;
                case 4:
                    printf("Thank you for shopping at the BOOK STORE.\n");
                    printf("Total price is : %d$\n",total_price);
                    break;
                default:
                    printf("Invalid Choice. \n");
                    break;
            }
        } while (choice != 4);
    return  0;
    }
//}