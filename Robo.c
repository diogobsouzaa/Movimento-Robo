#include <stdio.h>

int main (int argc, char *argv[]){

    char n;
    do {
        int vert, horz, custo;
        scanf ("%d%d%d%c", &horz, &vert, &custo, &n);

        mapa [horz][vert] = custo;
    } while (n != '\n' && !feof(stdin));

    int R = 0, D = 1, leste = 0, custototal = 0;
    int norte = (linha - 1);
    
    mapa [0][0] = R;
    
 

    for (int i = 0; i < (linha + colunaa) - 3 ; i++){

        if (leste == (colunaa - 1)){


            if (mapa[norte-1][leste] == 99){
                D = 0;
                break;
            }

            custototal += mapa [norte-1][leste];
            norte --;
            continue;
        }

        if (mapa [norte-1][leste] == 99 && mapa [norte][leste+1] == 99){
            D = 0;
            break;
        }

        if (mapa [norte-1][leste] < mapa [norte][leste+1]){

            custototal += mapa [norte-1][leste];
            norte --;
            continue;
        }

        if (mapa [norte][leste+1] < mapa [norte-1][leste])  { 

            custototal += mapa [norte][leste+1];
            leste += 1;
            continue;
        }

        if (mapa [norte-1][leste] == mapa [norte][leste+1]) { 
 
            custototal += mapa [norte][leste+1];
            leste += 1;
        }
    }


    printf ("%d\n", custototal);
    printf ("%d", D);



}