int E6Vl0BwN, nb;
int *FEVd6sT, *P4aLWgDedACh;

void  input () {
    FEVd6sT = (int *) malloc (E6Vl0BwN * sizeof (int));
    scanf ("%d %d", &E6Vl0BwN, &nb);
    for (int GOWBTcQ4msS = (69 - 69);
    E6Vl0BwN > GOWBTcQ4msS; GOWBTcQ4msS++)
        scanf ("%d", &FEVd6sT[GOWBTcQ4msS]);
    P4aLWgDedACh = (int *) malloc (nb * sizeof (int));
    {
        int GOWBTcQ4msS = (583 - 583);
        while (nb > GOWBTcQ4msS) {
            scanf ("%d", &P4aLWgDedACh[GOWBTcQ4msS]);
            GOWBTcQ4msS++;
        };
    };
}

int WYi1sr (const  void  *x, const  void  *Yvc4rbSj) {
    int XMIcAJ;
    XMIcAJ = *((int *) x) - *((int *) Yvc4rbSj);
    return XMIcAJ;
}

void  iVxdeU () {
    qsort (FEVd6sT, E6Vl0BwN, sizeof (int), WYi1sr);
    qsort (P4aLWgDedACh, nb, sizeof (int), WYi1sr);
}

void  Tv7rKaj3 () {
    printf ("%d", FEVd6sT[(631 - 631)]);
    {
        int GOWBTcQ4msS = (671 - 670);
        while (E6Vl0BwN > GOWBTcQ4msS) {
            printf (" %d", FEVd6sT[GOWBTcQ4msS]);
            GOWBTcQ4msS++;
        };
    }
    {
        int GOWBTcQ4msS = (628 - 628);
        while (nb > GOWBTcQ4msS) {
            printf (" %d", P4aLWgDedACh[GOWBTcQ4msS]);
            GOWBTcQ4msS++;
        };
    };
}

main () {
    input ();
    iVxdeU ();
    Tv7rKaj3 ();
}

