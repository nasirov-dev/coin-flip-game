#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void backspace(){
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}
void show_player_choice(int your_choice){


    if (your_choice == 1){
        printf("Heads");
    }
    else if (your_choice == 2){
	
        printf("Tails");
   }
}

void show_bot_choice(int bot_choice){


    if (bot_choice == 1){
        printf("Heads");
    }
    else if (bot_choice == 2){
	
        printf("Tails");
   }
}

void sound_effect(){
	
	Beep(600, 500);
	Beep(500,500);
	Beep(400, 500);
}

void start(int *your_choice){
	
	printf("\n");
	printf("1. Heads  ");
	printf("\n2. Tails  ");
	printf("\n3. Exit ");
	printf("\n");
	printf("Choose one:    ");
	scanf("%d", your_choice);
}


void get_info(char *username){
	
	
	printf("Please enter your username:  ");
	scanf("%s", username);
	printf("\n");
}

void welcome(char *username){
	
	
	printf("Hello %s to the Heads and Tails (Coin Flip) game!", username);
	printf("\n");
	printf("\n                 RULES                  \n");
	printf("if you call heads and it calls tails, you lose.\n");
	printf("if you call heads and it calls heads, you win.\n");
	
}


int option(){
	return (rand() % 2) + 1;
}


int main(){
	
	srand(time(NULL));
	
	char username[100];
	int your_choice;
	int bot_choice;
    
	
	
	
	sound_effect();
	
	get_info(username);
	
	welcome(username);
	bool endless = true;


 while(endless){
    
 	bot_choice = option();
 	start(&your_choice);
 	backspace();


 	
 	
 	switch(your_choice){
 		
 	case 1:
 	 if (bot_choice == 1){
        
        printf("Your choice: ");
        show_player_choice(your_choice);
        
        printf("\n --------------------------- \n");
        
        printf("Current Choice: ");
        show_bot_choice(bot_choice);
        printf("\n");
        
        printf("You win!\n");
        printf("\n");
    }
    else {
        
        printf("Your choice: ");
        show_player_choice(your_choice);
        
        printf("\n --------------------------- \n");
        
        printf("Current Choice: ");
        show_bot_choice(bot_choice);
        printf("\n");
        
        printf("You lost!\n");
        printf("\n");
    }
    
    break;
		

 				
 				
 			
			 
			 
	case 2:
	 if (bot_choice == 2){
       
        
        printf("Your choice: ");
        show_player_choice(your_choice);
        printf("\n --------------------------- \n");
        
        printf("Bot's choice: ");
        show_bot_choice(bot_choice);
        printf("\n");
        printf("You win!\n");
        printf("\n");
        printf("\n");
    }
    else {
        
        
        printf("Your choice: ");
        show_player_choice(your_choice);
        
        printf("\n --------------------------- \n");
        
        printf("Bot's choice: ");
        
        show_bot_choice(bot_choice);
        printf("\n");
        printf("You lost!\n");
        printf("\n");
        printf("\n");
        
    }  
	break;   
				
	   
		case 3:
			
			endless = false;
			break;
			
	}
				
				
		}
	
	
		
	
	
			
	 }
	
 
 



