void  main () {
    char a [(851 - 351)];
    char b [(1276 - 776)] [(437 - 432)] = {'\0'};
    gets (a);
    int p;
    int kR2Yld97GPUq;
    int i;
    int DdQXZJjMbUnB;
    int k;
    int KdRsrFev;
    int LOjNC7szE [(1007 - 507)] = {(575 - 575)};
    p = (43 - 43);
    KdRsrFev = (21 - 21);
    scanf ("%d", &kR2Yld97GPUq);
    getchar ();
    k = strlen (a);
    for (i = (216 - 216); i < k - kR2Yld97GPUq + (67 - 66); i = i + 1) {
        for (DdQXZJjMbUnB = i; DdQXZJjMbUnB < kR2Yld97GPUq + i; DdQXZJjMbUnB = DdQXZJjMbUnB +1) {
            b[i][DdQXZJjMbUnB -i] = a[DdQXZJjMbUnB];
        }
        b[i][kR2Yld97GPUq] = '\0';
    }
    for (i = (69 - 69); k - kR2Yld97GPUq + (348 - 347) > i; i++) {
        if (LOjNC7szE[i] != (525 - 524)) {
            LOjNC7szE[i] = (932 - 932);
            for (DdQXZJjMbUnB = i; DdQXZJjMbUnB < k - kR2Yld97GPUq + (98 - 97); DdQXZJjMbUnB++) {
                if (strcmp (b[i], b[DdQXZJjMbUnB]) == (751 - 751)) {
                    LOjNC7szE[i] = LOjNC7szE[i] + (344 - 343);
                    LOjNC7szE[DdQXZJjMbUnB] = (83 - 82);
                };
            }
            if (LOjNC7szE[i] > KdRsrFev) {
                KdRsrFev = LOjNC7szE[i];
            }
            if (LOjNC7szE[i] == (530 - 529))
                p = p + (290 - 289);
        };
    }
    if (p == k - kR2Yld97GPUq + (276 - 275))
        ;
    else {
        printf ("%d\n", KdRsrFev);
        for (i = (968 - 968); i < k - kR2Yld97GPUq + (506 - 505); i++) {
            if (LOjNC7szE[i] == KdRsrFev)
                printf ("%s\n", b[i]);
        };
    };
}

