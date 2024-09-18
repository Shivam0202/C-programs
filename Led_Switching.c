#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    bool switchPressed = false; // Set switch state
    char input;

    printf("Press 's' to simulate switch press, 'o' to open the switch, 'q' to quit:\n");

    while (1) {
        input = getchar();
        
        // Taking Input 
        while (getchar() != '\n');

        if (input == 's') 
        {
            switchPressed = true;  
            // Switch is pressed
            printf("Switch is pressed. LED is OFF.\n");
        } else if (input == 'o') {
            switchPressed = false; 
        // Switch is open
            printf("Switch is open. LED is ON.\n");
        } else if (input == 'q') {
            break;
            // Exit the loop if 'q' is pressed
        }
    }

    printf("Program terminated.\n");
    return 0;
}
