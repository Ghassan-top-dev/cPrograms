#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

        printf("\n\n\n");

        printf("      |    |  \n");
        printf("   1  |  2 |  3\n");
        printf("  ----|----|----\n");
        printf("   4  |  5 |  6\n");
        printf("  ----|----|----\n");
        printf("   7  |  8 |  9\n");
        printf("      |    |  \n");

        printf("\n\n\n");

   
    int i, userChoice; 
    char choiceXO; 
    char arr[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char choices[2] = {'X','O'};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sizeOfCh = sizeof(choices) / sizeof(choices[0]);
    int whoStart = 0;
    int randomIndexCh;
    int randomIndex;
    srand(time(0));

    printf("Would you like to go first (1) or the computer (0): ");
    scanf("%d", &whoStart);
    


    for (i = 0; i < 9; i++)
    {
      
      if (whoStart == 1)
        {
            
            
           
            
            
            printf("Enter your choice of position 1-9: ");
            scanf("%d", &userChoice);   

            
                arr[userChoice - 1] = 'X';
            
           
                arr[userChoice - 1] = 'O';
            
            
            printf("Your Choie...");
            
            whoStart = 0;      
            
        }
        else{
            randomIndex = rand() % size;

            while (arr[randomIndex] != ' ') //This will choose an availabe choice
            {
                randomIndex = rand() % size; //This will choose the '-' if its not chosen yet
            }
            
            randomIndexCh = rand() % sizeOfCh; //This chooses either X or O

            arr[randomIndex] = choices[randomIndexCh];   //This will set the chosen '-' to either X or O
            whoStart = 1; 

            printf("Computer Choie...");

        }


        
        

        
        
        

        printf("\n\n\n");
    

        printf("        |      |  \n");
        printf("     %c  |  %c   | %c \n", arr[0], arr[1], arr[2]);
        printf("    ----|------|----\n");
        printf("     %c  |  %c   | %c \n", arr[3], arr[4], arr[5]);
        printf("    ----|------|----\n");
        printf("     %c  |  %c   | %c \n", arr[6], arr[7], arr[8]);
        printf("        |      |  \n");


        printf("\n\n\n");


/*
        X    Y    Z 
           |    |  
    1      |    |     
       ----|----|----
    2      |    |     
       ----|----|----
    3      |    |     
           |    |  
*/





    }
    


    return 0;

}












// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits