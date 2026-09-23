// WAP TO CONTINUE THE LOOP UNTIL USER WANTS TO EXIT
#include <stdio.h>

int main() {
    int choice;
    while(1) {
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
        if(choice == 0) {
            break;
        }
        printf("Continuing...\n");
    }
    printf("Exiting...\n");
    return 0;
}