#include <stdio.h>




int main(){


    int userInputNumRes, resN, currentRes;
    float userInputResValue, totalRes = 0; 

    printf(" Enter the number of resistors (must be greater than 0): ");
    scanf("%d", &userInputNumRes); 
    
    
    while (userInputNumRes <= 0)
    {
        
        printf("Number of resistors must be greater than 0. Please try again.\n");
        printf("Enter the number of resistors (must be greater than 0): ");
        scanf("%d", &userInputNumRes);
    
    }
    
        
        

    

    for (resN = 1; resN <= userInputNumRes; resN++)
    {
        currentRes = resN;

        printf("Enter value for R%d (in Ohms): ", currentRes); 
        scanf("%f", &userInputResValue);

        
        totalRes = (1 / userInputResValue) + totalRes;  
        
        
    }

    printf("Total Resistance = %0.1f Ohms\n", 1 / totalRes); 
    



    return 0; 
}
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits