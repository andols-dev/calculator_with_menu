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

void chooseMenuNumber(int *menuNumber) {
    printf("Choose a number from the menu");
    scanf("%d",menuNumber);
}
int main()
{
    int num1, num2, menuNumber;
    // Show menu
    menu();

    // Choose menu number
    chooseMenuNumber(&menuNumber);

    printf("You have chosen menu number: %d", menuNumber);

    // Choose numbers
    chooseNumbers(&num1, &num2);

    //printf("You have chosen: %d and %d\n", num1, num2);

    //Choose menu number

    return 0;
}
