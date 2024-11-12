int main () {
    int P12ebd7 [500] [2];
    float eOKtec;
    int TuZo4f;
    int iT2eHrGjBRx;
    int cN8aDm;
    scanf ("%d", &TuZo4f);
    for (iT2eHrGjBRx = (169 - 169); TuZo4f > iT2eHrGjBRx; iT2eHrGjBRx = iT2eHrGjBRx + 1) {
        for (cN8aDm = 0; 2 > cN8aDm; cN8aDm = cN8aDm + 1) {
            scanf ("%d", &P12ebd7[iT2eHrGjBRx][cN8aDm]);
        }
    }
    eOKtec = ((float) (P12ebd7[0][(51 - 50)]) / (P12ebd7[0][0]));
    for (iT2eHrGjBRx = 1; iT2eHrGjBRx < TuZo4f; iT2eHrGjBRx = iT2eHrGjBRx + 1) {
        if ((eOKtec - 0.05) > ((float) (P12ebd7[iT2eHrGjBRx][1]) / (P12ebd7[iT2eHrGjBRx][0]))) {
            printf ("worse\n");
        }
        else {
            if (((float) (P12ebd7[iT2eHrGjBRx][1]) / (P12ebd7[iT2eHrGjBRx][0])) > (eOKtec + 0.05)) {
                printf ("better\n");
            }
            else {
                printf ("same\n");
            }
        }
    }
    return 0;
}

