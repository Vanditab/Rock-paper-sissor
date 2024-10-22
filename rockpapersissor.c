#include <stdio.h>

#define CHOICES 3

void play_game();
void display_choices();

int main() {
    play_game();
    return 0;
}

void play_game() {
    char choices[CHOICES][10] = {"Rock", "Paper", "Scissors"};
    int user_choice;
    int computer_choice = 1; // Fixed computer choice (1 = Paper)

    display_choices();
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &user_choice);

    // Validate user input
    if (user_choice < 0 || user_choice >= CHOICES) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return;
    }

    printf("You chose: %s\n", choices[user_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    // Determine winner
    if (user_choice == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice == 0 && computer_choice == 2) || 
               (user_choice == 1 && computer_choice == 0) || 
               (user_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

void display_choices() {
    printf("Choices:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
}