int main () {
    int PJB2FKHAMYE;
    int NHcZP1;
    int nbP5J3HX;
    int UThNrubzl;
    char I8piJqDxj3ya [LEN];
    gets (I8piJqDxj3ya);
    int O4M39dE;
    int i;
    nbP5J3HX = 0;
    O4M39dE = 0;
    UThNrubzl = 30;
    {
        i = 0;
        while (1) {
            if (I8piJqDxj3ya[i] != ' ' && I8piJqDxj3ya[i] != '\0')
                O4M39dE = O4M39dE +1;
            else {
                if (O4M39dE > nbP5J3HX) {
                    nbP5J3HX = O4M39dE;
                    PJB2FKHAMYE = i - O4M39dE;
                }
                if (O4M39dE < UThNrubzl) {
                    UThNrubzl = O4M39dE;
                    NHcZP1 = i - O4M39dE;
                }
                O4M39dE = 0;
            }
            if (!('\0' != I8piJqDxj3ya[i]))
                break;
            i = i + 1;
        }
    }
    {
        i = PJB2FKHAMYE;
        while (PJB2FKHAMYE +nbP5J3HX > i) {
            printf ("%c", I8piJqDxj3ya[i]);
            i = i + 1;
        }
    }
    for (i = NHcZP1; i < NHcZP1 +UThNrubzl; i = i + 1)
        printf ("%c", I8piJqDxj3ya[i]);
    return 0;
}

