// a program of 2D array
#include <stdio.h>
int main(){
    int k,l;
//declaring and initializing of 2D array
   int arr[2][4]={{4,5,6,7},{10,13,14,15}};

    for (k=0;k<2;k++){
            for(l=0;l<4;l++){

// printing array in matrix form
printf("%d\t",arr[k][l]);

}
printf("\n");

}
     return 0;
}
