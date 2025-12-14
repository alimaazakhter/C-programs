#include <stdio.h>

int main() {
    int choice;
    
    printf("Select an option:\n");
    printf("1. Print float numbers series (22.0 to 23.5)\n");
    printf("2. Play 21 Match Sticks Game\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Part 1: Float numbers
        float num;
        printf("\nFloat numbers series:\n");
        for(num = 22.0; num <= 23.50; num += 0.25) {
            printf("%.2f\t", num);
        }
        printf("\n");
    }
    else if(choice == 2) {
        // Part 2: 21 Match Sticks Game
        int sticks = 21;
        int player = 1;
        int pick;
        printf("\n21 Match Sticks Game\n");
        printf("Players can pick 1 to 4 sticks. Last stick loses.\n\n");

        while(sticks > 1) {
            printf("Sticks remaining: %d\n", sticks);
            printf("Player %d, pick 1-4 sticks: ", player);
            scanf("%d", &pick);

            if(pick < 1 || pick > 4) {
                printf("Invalid choice! Pick 1 to 4 sticks.\n");
                continue;
            }

            sticks -= pick;

            if(sticks <= 1) {
                printf("Player %d picked the last stick. Player %d loses!\n", player, player);
                break;
            }

            // switch player
            player = (player == 1) ? 2 : 1;
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

