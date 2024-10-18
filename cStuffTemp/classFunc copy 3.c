#include <stdio.h>

//EX: numPizza = 3, numSlicesPerPizza = 10, total slices = 30


// Inputs: (1) int (2) in
// return: Int

//function prototype
int totalSlices (int numPizza, int numSlicesPerPizza); // prototype (Tells compiler how much memory needed)



int main(){


    int result;

    result = totalSlices (3,10); //function call

    printf("%d", result); 

    return 0;
}

//function defintion - (1) header (2) body 

int totalSlices (int numPizza, int numSlicesPerPizza) {     //don't end header with semicolon

    int totalSlicesP;

    totalSlicesP = numPizza * numSlicesPerPizza;

    return totalSlicesP;

    // or: return numPizza * numSlicesPerPizza; 

}
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits