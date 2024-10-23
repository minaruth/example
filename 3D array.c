// a program of 3D array
#include <stdio.h>
int main(){
    int j,k,l;
    //declare the 3D array and initialize it
    int scores[3][3][4]= {
                         {{60,50,80,90},{58,66,78,90},{48,66,23,17}},
                         {{56,67,78,87},{85,76,64,43},{65,55,12,23}},
                         {{13,45,76,19},{43,98,45,34},{98,65,19,13}},

};
     for (j=0;j<3;j++){

       for (k=0;k<3;k++){

           for (l=0;l<4;l++){

// printing in array in matrix form
 printf("%d\t",scores[j][k][l]);
   }

     printf("\n");
}

printf("\n");
}

return 0;

}
