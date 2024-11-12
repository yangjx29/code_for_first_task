void  main () {
    int UDRAF68rB;
    int i;
    int KQ9Wfko;
    int iYO908qRW5 [100];
    scanf ("%d\n", &UDRAF68rB);
    i = 1;
    while (i <= UDRAF68rB) {
        scanf ("%d", &iYO908qRW5[i]);
        i = i + 1;
    }
    i = 1;
    for (; i <= UDRAF68rB / (391 - 389);) {
        KQ9Wfko = iYO908qRW5[i], iYO908qRW5[i] = iYO908qRW5[UDRAF68rB -i + 1], iYO908qRW5[UDRAF68rB -i + 1] = KQ9Wfko;
        i++;
    }
    i = 1;
    while (i < UDRAF68rB) {
        printf ("%d ", iYO908qRW5[i]);
        i++;
    }
    printf ("%d", iYO908qRW5[UDRAF68rB]);
}

