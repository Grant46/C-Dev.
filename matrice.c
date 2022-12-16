#include <stdio.h>
#include <math.h>

int main() {
    float a, b, ra, rb;

    printf("\nInserisci N: ");
    scanf("\n %f", &a);

    printf("\nInserisci M: ");
    scanf("\n %f", &b);

    if((a > 1)&&(b > 1)){
        ra = round(a);
        rb = round(b);
        
        float V[(int)ra][(int)rb];

        for(int i=0; i<ra; i++) {
            
            for(int j=0; j<rb; j++) {
                printf("\nInserisci valori: ");
                scanf("\n %f", &V[i][j]);
            }
        }

        for(int i=0;i<ra;i++){
            for(int j=0;j<rb;j++){
                V[i][j] = V[i][j] * 2;
                printf("\n %1.1f", V[i][j]);
            }
        }
    
        if(ra <= rb) {
            float M[(int)ra][(int)ra];

            for(int i=0;i<ra;i++){
                for(int j=0;j<ra;j++){
                    M[i][j] = V[i][j];
                }
            }

            for(int i=0;i<ra;i++){
                printf("\n");

                for(int j=0;j<ra;j++){
                    printf("\t %1.1f", M[i][j]);
                }
            }
        }

        else{
            int M[(int)rb][(int)rb];
        }
    }

    else {
        printf("\nERROR !");
    }

}
