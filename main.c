#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *menu[] = {"Add", "Subtract", "Multiply","Divide","Exit"};
    int menuSize = sizeof(menu) / sizeof(menu[0]);

    for (int i = 0; i < menuSize;i++) {
        printf("%d %s\n", i + 1, menu[i]);
        printf("--------------------------------\n");
    }
    return 0;
}
