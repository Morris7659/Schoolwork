// A program to display the cube of a number
#include <stdio.h>
int main(){
    int number, term, cube;
    
    printf("Enter the number to be cubed\n");
    scanf("%d", &number);
    
    printf("Enter the number of terms\n");
    scanf("%d", &term);
    
    for (int i = 0; i < term; i++) { // Using a separate variable for iteration
        cube = number * number * number; // Calculate the cube
        printf("The number is %d and the cube is %d\n", number, cube);
        number++; // Increment to get the next number for the next iteration
    }
    return 0;
}