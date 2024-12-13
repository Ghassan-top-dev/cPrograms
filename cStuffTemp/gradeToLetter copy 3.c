#include <stdio.h>

int main(){

    int numericGrade; 

    printf("Enter a numeric grade in %%: "); 

    scanf("%d", &numericGrade); 

    if(97 <= numericGrade && numericGrade <= 100){
        printf("Letter grade = A+"); 
    } else if(93<= numericGrade && numericGrade <=96){
        printf("Letter grade = A");
    } else if(90<= numericGrade && numericGrade <=92){
        printf("Letter grade = A-");
    }else if(87<= numericGrade && numericGrade <=89){
        printf("Letter grade = B+");
    }else if(83<= numericGrade && numericGrade <=86){
        printf("Letter grade = B");
    }else if(80<= numericGrade && numericGrade <=82){
        printf("Letter grade = B-");
    }else if(77<= numericGrade && numericGrade <=79){
        printf("Letter grade = C+");
    }else if(73<= numericGrade && numericGrade <=76){
        printf("Letter grade = C");
    }else if(70<= numericGrade && numericGrade <=72){
        printf("Letter grade = C-");
    }else if(67<= numericGrade && numericGrade <=69){
        printf("Letter grade = D+");
    }else if(63<= numericGrade && numericGrade <=66){
        printf("Letter grade = D");
    }else if(60<= numericGrade && numericGrade <=62){
        printf("Letter grade = D-");
    }else if(0<= numericGrade && numericGrade <=59){
        printf("Letter grade = F");
    }else{
        printf("Error: Grade must be between 0 and 100.");
    }
    printf("\n");


    return 0; 
}
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits