#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Step 1: Define an array with some elements
    char arr[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char choices[2] = {'X','O'};
    
    // Step 2: Get the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    int sizeOfCh = sizeof(choices) / sizeof(choices[0]);

    
    // Step 3: Seed the random number generator
    srand(time(0));
    
    // Step 4: Generate a random index between 0 and size-1
    int randomIndex = rand() % size;
    int randomIndexCh = rand() % sizeOfCh;


    printf("Random element: %c\n", arr[randomIndex]);


    if(arr[randomIndex] == '-'){


        printf("Cock: %c\n", choices[randomIndexCh]);


        arr[randomIndex] = choices[randomIndexCh];
    }
    
    // Step 5: Print the random element
    printf("Random element: %c\n", arr[randomIndex]);
    

    return 0;
}
// Adding a timestamp to track commits