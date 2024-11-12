struct   students {
    char qLjs1if2l0 [21];
    int u3umRglZ1zJ;
    int Brkf3ALb4;
    char EeXfG6U3;
    char Swr2EIDzn;
    int P;
    int JJ;
};
main () {
    int XdvNGVzn1W2a, i, kKCbN8dves4y;
    long  int VW7AcR;
    struct   students doC78QWhjdf [NUM];
    kKCbN8dves4y = 0;
    scanf ("%d", &XdvNGVzn1W2a);
    for (i = (456 - 456); XdvNGVzn1W2a > i; i++) {
        scanf ("\n%s %d %d %c %c %d", doC78QWhjdf[i].qLjs1if2l0, &doC78QWhjdf[i].u3umRglZ1zJ, &doC78QWhjdf[i].Brkf3ALb4, &doC78QWhjdf[i].EeXfG6U3, &doC78QWhjdf[i].Swr2EIDzn, &doC78QWhjdf[i].P);
    }
    VW7AcR = 0;
    for (i = 0; i < XdvNGVzn1W2a; i++) {
        doC78QWhjdf[i].JJ = 0;
        if (((214 - 134) < doC78QWhjdf[i].u3umRglZ1zJ) && (1 <= doC78QWhjdf[i].P)) {
            doC78QWhjdf[i].JJ += 8000;
        }
        if ((doC78QWhjdf[i].u3umRglZ1zJ > (380 - 295)) && ((801 - 721) < doC78QWhjdf[i].Brkf3ALb4)) {
            doC78QWhjdf[i].JJ += (4011 - 11);
        }
        if (doC78QWhjdf[i].u3umRglZ1zJ > 90) {
            doC78QWhjdf[i].JJ += 2000;
        }
        if ((doC78QWhjdf[i].u3umRglZ1zJ > 85) && (!('Y' != doC78QWhjdf[i].Swr2EIDzn))) {
            doC78QWhjdf[i].JJ += (2000 - 1000);
        }
        if ((doC78QWhjdf[i].Brkf3ALb4 > 80) && (doC78QWhjdf[i].EeXfG6U3 == 'Y')) {
            doC78QWhjdf[i].JJ += 850;
        }
        VW7AcR = VW7AcR +doC78QWhjdf[i].JJ;
    }
    for (i = 1; i < XdvNGVzn1W2a; i++) {
        if (doC78QWhjdf[i].JJ > doC78QWhjdf[kKCbN8dves4y].JJ) {
            kKCbN8dves4y = i;
        }
    }
    printf ("%s\n%d\n%ld\n", doC78QWhjdf[kKCbN8dves4y].qLjs1if2l0, doC78QWhjdf[kKCbN8dves4y].JJ, VW7AcR);
}

