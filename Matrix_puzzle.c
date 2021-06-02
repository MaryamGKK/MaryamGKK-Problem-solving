/**Matrix puzzle: a parallel C program using OpenMP such that :
Given a matrix where every element is either ‘O’ or ‘X’, replace ‘O’ with ‘X’ if surrounded
by ‘X’. A ‘O’ (or a set of ‘O’) is considered to be surrounded by ‘X’ if there are ‘X’ at
locations just left and just right of it.
O’s at the edges will not be replaced**/



#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#include <time.h>

int main()
{
    int rows,cols;
    int i,j;
    printf("Enter Number of Rows of matrix\n");
    scanf("%d",&rows);
    printf("Enter Number of Columns of matrix\n");
    scanf("%d",&cols);

    char mat1[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {

            scanf(" %c",&mat1[i][j]);
            char c = mat1[i][j];
            if(c!='x'){
            if(c!='o'){
                    printf("enter valid ");
                    scanf(" %c",&mat1[i][j]);
                    continue;
            }

            }
        }
    }
    char* d=(char *)malloc(sizeof(char)*rows*cols);
    char* e=(char *)malloc(sizeof(char)*rows*cols);

    d=(char *)mat1;

    //Concurrent or parallel matrix replacing
    clock_t t;
    t = clock();
    #pragma omp parallel  private(i , j) shared(d)
    {
        #pragma omp for schedule(dynamic)
        for(i = 0;i<rows;i++){
            for(j = 1;j<cols-1;j++){
                if(d[i*cols+j] == 'o'&&d[i*cols+j-1] == 'x' && d[i*cols+j+1] == 'x'){
                    d[i*cols+j] = 'x';
                }
            }
            printf ("IN thread %d Now \n" , omp_get_thread_num());
        }
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf(" took %f seconds to execute \n", time_taken);
    printf("\n");
    printf("Values of Resultant Matrix after \n");

   for(i = 0;i<cols*rows;i++){
        printf("%c ", d[i]);
        if((i+1)%cols == 0){
             printf("\n");
        }
    }

	return 0;
}
