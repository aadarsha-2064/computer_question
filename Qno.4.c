/* 
To input 5 food items with food id,Name,Food type and price display
the food list whose proce is grater than 100
*/
#include <stdio.h>
struct food {
    int food_id;
    char name[50];
    char food_type[50];
    float price;
};
int main() {
    struct food f[5]; 
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter Food ID: ");
        scanf("%d", &f[i].food_id);
        printf("Enter Food Name: ");
        scanf("%s", f[i].name);
        printf("Enter Food Type: ");
        scanf("%s", f[i].food_type);
        printf("Enter Food Price: ");
        scanf("%f", &f[i].price);
    }
    for (i = 0; i < 5; i++) {
        if (f[i].price > 100) {
            printf("Food ID: %d\n", f[i].food_id);
            printf("Food Name: %s\n", f[i].name);
            printf("Food Type: %s\n", f[i].food_type);
            printf("Price: %.2f\n", f[i].price);
        }
    }

    return 0;
}
