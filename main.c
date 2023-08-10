#include <stdio.h>
#include <stdlib.h>
void menu() {
    const char *menu[] = {"Add", "Subtract", "Multiply","Divide","Exit"};
        int menuSize = sizeof(menu) / sizeof(menu[0]);

        for (int i = 0; i < menuSize;i++) {
            printf("%d %s\n", i + 1, menu[i]);
            printf("--------------------------------\n");
        }
}

void chooseNumbers(int *num1, int *num2) {
    printf("Enter two numbers\n");
    scanf("%d %d", num1, num2);
}


int main()
{
    int num1, num2;
    // Show menu
    menu();

    // Choose numbers
    chooseNumbers(&num1, &num2);

    printf("You have chosen: %d and %d\n", num1, num2);
    return 0;
}
