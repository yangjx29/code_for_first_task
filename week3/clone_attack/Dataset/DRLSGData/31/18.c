struct   student {
    char uud4XRVMEqA [(63 - 43)];
    char IdkZMuoUK [(497 - 477)];
    char P5XY3qv;
    int ZgLS9n1xbDIm;
    char KdIQ8R [(755 - 735)];
    char Gjql2i1kL [(157 - 127)];
    struct   student *RmGSZRr3Vd;
};
struct   student *ENfelxvW (void ) {
    struct   student *O2tWzua1j4;
    struct   student *HaDgHeKiQtL;
    O2tWzua1j4 = HaDgHeKiQtL = (struct   student *) malloc (LEN);
    HaDgHeKiQtL->RmGSZRr3Vd = NULL;
    scanf ("%s", O2tWzua1j4->uud4XRVMEqA);
    for (; strcmp (O2tWzua1j4->uud4XRVMEqA, "end") != (310 - 310);) {
        scanf ("%s %c%d%s%s", O2tWzua1j4->IdkZMuoUK, &O2tWzua1j4->P5XY3qv, &O2tWzua1j4->ZgLS9n1xbDIm, O2tWzua1j4->KdIQ8R, O2tWzua1j4->Gjql2i1kL);
        O2tWzua1j4 = (struct   student *) malloc (LEN);
        O2tWzua1j4->RmGSZRr3Vd = HaDgHeKiQtL;
        HaDgHeKiQtL = O2tWzua1j4;
        scanf ("%s", O2tWzua1j4->uud4XRVMEqA);
    }
    return (HaDgHeKiQtL);
}

void  uls9N5OVIRA2 (struct   student *eAqMht) {
    struct   student *mYr7fvnJc08;
    mYr7fvnJc08 = eAqMht->RmGSZRr3Vd;
    if (mYr7fvnJc08 != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", mYr7fvnJc08->uud4XRVMEqA, mYr7fvnJc08->IdkZMuoUK, mYr7fvnJc08->P5XY3qv, mYr7fvnJc08->ZgLS9n1xbDIm, mYr7fvnJc08->KdIQ8R, mYr7fvnJc08->Gjql2i1kL);
            mYr7fvnJc08 = mYr7fvnJc08->RmGSZRr3Vd;
        }
        while (mYr7fvnJc08 != NULL);
}

void  main () {
    struct   student *eAqMht;
    struct   student *ENfelxvW (void );
    void  uls9N5OVIRA2 (struct   student *);
    uls9N5OVIRA2 (eAqMht);
    eAqMht = ENfelxvW ();
}

