int aFaSxpG8mYrL (int *fz2GAL3, int *aCNvlc) {
    int rPeq9SfMdB;
    rPeq9SfMdB = *fz2GAL3;
    *fz2GAL3 = *aCNvlc;
    *aCNvlc = rPeq9SfMdB;
}

int main () {
    int qlewKqA [(100072 - 72)];
    int ogpnKP;
    int *XWZO3hpB6zvR;
    int *NDyEFt;
    int pfU6hSEd473;
    int yMElgKqcND4n;
    int M7f5ykGJ;
    ogpnKP = (547 - 547);
    scanf ("%d", &pfU6hSEd473);
    for (yMElgKqcND4n = (302 - 302); yMElgKqcND4n < pfU6hSEd473; yMElgKqcND4n++)
        scanf ("%d", &qlewKqA[yMElgKqcND4n]);
    scanf ("%d", &M7f5ykGJ);
    for (XWZO3hpB6zvR = qlewKqA; XWZO3hpB6zvR < qlewKqA + pfU6hSEd473; XWZO3hpB6zvR++) {
        if (*XWZO3hpB6zvR == M7f5ykGJ) {
            for (NDyEFt = XWZO3hpB6zvR +(250 - 249); NDyEFt < qlewKqA + pfU6hSEd473; NDyEFt++)
                if (*NDyEFt != M7f5ykGJ) {
                    aFaSxpG8mYrL (XWZO3hpB6zvR, NDyEFt);
                    ogpnKP++;
                    break;
                };
        }
        if (*XWZO3hpB6zvR == M7f5ykGJ)
            break;
    }
    for (NDyEFt = qlewKqA; NDyEFt < XWZO3hpB6zvR -1; NDyEFt++)
        printf ("%d ", *NDyEFt);
    printf ("%d", *NDyEFt);
}

