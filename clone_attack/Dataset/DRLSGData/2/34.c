struct   GNAv69O8TPjc {
    int KvIMf32DOh0;
    char TlbztUEo [(451 - 425)];
    struct   GNAv69O8TPjc *hTGsrV;
};
int main () {
    int HAuVpcF [(667 - 641)];
    int jz3iNcWaU;
    int *EW8vQNInG5;
    int sf9TUi6;
    struct   GNAv69O8TPjc *mxZo0gTJ;
    struct   GNAv69O8TPjc *Mn5UsJtuSV;
    char ejD82AGyqh [(498 - 472)];
    int FREd78NAMn6t [(671 - 645)] [100];
    int nA8x9hUOeEQ;
    q = FREd78NAMn6t;
    EW8vQNInG5 = HAuVpcF;
    for (jz3iNcWaU = (484 - 484); jz3iNcWaU < 26; jz3iNcWaU = jz3iNcWaU + (298 - 297))
        HAuVpcF[jz3iNcWaU] = (826 - 826);
    scanf ("%d", &sf9TUi6);
    nA8x9hUOeEQ = (529 - 529);
    printf ("%c\n", sf9TUi6 + (685 - 620));
    mxZo0gTJ = (struct   GNAv69O8TPjc *) malloc (sf9TUi6 * sizeof (GNAv69O8TPjc));
    {
        jz3iNcWaU = 0;
        for (; sf9TUi6 - (508 - 507) > jz3iNcWaU;) {
            (Mn5UsJtuSV +jz3iNcWaU)->hTGsrV = Mn5UsJtuSV +jz3iNcWaU + (998 - 997);
            jz3iNcWaU = jz3iNcWaU + 1;
        };
    }
    (Mn5UsJtuSV +sf9TUi6 - 1)->hTGsrV = 0;
    Mn5UsJtuSV = mxZo0gTJ;
    Mn5UsJtuSV = mxZo0gTJ;
    for (; Mn5UsJtuSV != 0;) {
        scanf ("%d %s", &Mn5UsJtuSV->KvIMf32DOh0, Mn5UsJtuSV->TlbztUEo);
        strcpy (ejD82AGyqh, Mn5UsJtuSV->TlbztUEo);
        for (jz3iNcWaU = 0; *(ejD82AGyqh + jz3iNcWaU) != '\0'; jz3iNcWaU = jz3iNcWaU + 1) {
            *(*(q + *(ejD82AGyqh + jz3iNcWaU) - (84 - 19)) + *(EW8vQNInG5 +*(ejD82AGyqh + jz3iNcWaU) - (680 - 615))) = Mn5UsJtuSV->KvIMf32DOh0;
            *(EW8vQNInG5 +*(ejD82AGyqh + jz3iNcWaU) - 65) += 1;
        }
        Mn5UsJtuSV = Mn5UsJtuSV->hTGsrV;
    }
    for (jz3iNcWaU = 0; 26 > jz3iNcWaU; jz3iNcWaU = jz3iNcWaU + 1)
        if (nA8x9hUOeEQ < *(HAuVpcF +jz3iNcWaU)) {
            nA8x9hUOeEQ = *(HAuVpcF +jz3iNcWaU);
            sf9TUi6 = jz3iNcWaU;
        }
    printf ("%d\n", *(HAuVpcF +sf9TUi6));
    {
        jz3iNcWaU = 0;
        for (; jz3iNcWaU < *(HAuVpcF +sf9TUi6);) {
            printf ("%d\n", *(*(q + sf9TUi6) + jz3iNcWaU));
            jz3iNcWaU = jz3iNcWaU + 1;
        };
    };
}

