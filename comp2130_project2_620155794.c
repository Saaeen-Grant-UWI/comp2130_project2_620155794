#include <stdio.h>

void startMenu();
int checkOptions(char option);

int main() {

    startMenu();

    return 0;

}


void startMenu() {
    char input = ' ';

    while(input != 'q') {
        
        printf("Enter a command l, r, b or q: ");
        scanf(" %c", &input);

        if(checkOptions(input) ==  0) {

            printf("INVALID INPUT \n");

        } else {

            switch (input) {

            case 'l':
                printf("launch \n");
                break;

            case 'r':
                printf("refuel \n");
                break;    

            case 'b':
                printf("bomb \n");
                break;  

            default:
                break;

            }

        }

    }
    
}

int checkOptions(char option) {

    if((option != 'l') && (option != 'r') && (option != 'b') && (option != 'q')) { 
        return 0; 
    } 
    else { 
        return 1; 
    }
    
}


