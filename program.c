#include <stdio.h> 
#include <math.h>
  
int main() 
{ 
    double x,y; 
    printf("\n");
    for(int i = 10; i > -10; i--){ //This is Y
        x = 0;
        for(int j = 0; j < 40; j++){ //This is X
            y = sin(x)*10;
            if(floor(y) == i || i == 0){
                printf("*");
            } else {
                printf(" ");
            }
            x += 0.2;
        }
        printf("\n");
    }
    return 0; 
} 
