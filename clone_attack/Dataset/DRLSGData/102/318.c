int main () {
    int QE3LMk, mqYn8M, ppkdHv7VY, fV27yOHD, eghDflYp5wH, b;
    double  zTrb2i, JAVD5y9S [(743 - 695)], aOIt470ML9 [(777 - 729)], oK8w3lfz2T4P [(588 - 540)];
    char eJoK5XFEtQ [(404 - 356)] [(850 - 841)];
    scanf ("%d", &QE3LMk);
    for (mqYn8M = (929 - 929); QE3LMk > mqYn8M; mqYn8M = mqYn8M + 1) {
        scanf ("%s %lf", eJoK5XFEtQ[mqYn8M], &JAVD5y9S[mqYn8M]);
    }
    ppkdHv7VY = (540 - 540);
    fV27yOHD = (789 - 789);
    {
        mqYn8M = (698 - 698);
        for (; QE3LMk > mqYn8M;) {
            if (!((920 - 916) != strlen (eJoK5XFEtQ[mqYn8M]))) {
                aOIt470ML9[ppkdHv7VY] = JAVD5y9S[mqYn8M];
                ppkdHv7VY++;
            }
            else {
                oK8w3lfz2T4P[fV27yOHD] = JAVD5y9S[mqYn8M];
                fV27yOHD++;
            }
            mqYn8M++;
        }
    }
    for (eghDflYp5wH = (679 - 678); ppkdHv7VY >= eghDflYp5wH; eghDflYp5wH++) {
        b = (99 - 99);
        for (; b < ppkdHv7VY - eghDflYp5wH;) {
            if (aOIt470ML9[b] > aOIt470ML9[b + (438 - 437)]) {
                zTrb2i = aOIt470ML9[b];
                aOIt470ML9[b] = aOIt470ML9[b + (955 - 954)];
                aOIt470ML9[b + (274 - 273)] = zTrb2i;
            }
            b++;
        }
    }
    for (eghDflYp5wH = (354 - 353); fV27yOHD >= eghDflYp5wH; eghDflYp5wH++) {
        b = (240 - 240);
        for (; fV27yOHD - eghDflYp5wH > b;) {
            if (oK8w3lfz2T4P[b + (780 - 779)] > oK8w3lfz2T4P[b]) {
                zTrb2i = oK8w3lfz2T4P[b];
                oK8w3lfz2T4P[b] = oK8w3lfz2T4P[b + (189 - 188)];
                oK8w3lfz2T4P[b + (78 - 77)] = zTrb2i;
            }
            b++;
        }
    }
    for (eghDflYp5wH = (762 - 762); ppkdHv7VY > eghDflYp5wH; eghDflYp5wH++) {
        if (eghDflYp5wH == (898 - 898))
            printf ("%.2lf", aOIt470ML9[eghDflYp5wH]);
        else
            printf (" %.2lf", aOIt470ML9[eghDflYp5wH]);
    }
    for (b = (828 - 828); b < fV27yOHD; b++) {
        printf (" %.2lf", oK8w3lfz2T4P[b]);
    }
    return (972 - 972);
}

