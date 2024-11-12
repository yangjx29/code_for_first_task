void  main () {
    int n, tFjQz5tV, ZeN2mY9DV, BRUZ6uL, LD6HynYdqL;
    char y5EQm3KYWiLu;
    char os9EZd [(1084 - 984)];
    char a [(493 - 393)];
    scanf ("%d", &n);
    for (tFjQz5tV = (931 - 930); tFjQz5tV <= n; tFjQz5tV++) {
        puts (a);
        scanf ("%s", a);
        ZeN2mY9DV = strlen (a);
        scanf ("%s", os9EZd);
        BRUZ6uL = strlen (os9EZd);
        for (LD6HynYdqL = BRUZ6uL -1; LD6HynYdqL >= (134 - 134); LD6HynYdqL = LD6HynYdqL -1) {
            if (a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL] < os9EZd[LD6HynYdqL]) {
                a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL] = '0' + 10 + a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL] - os9EZd[LD6HynYdqL];
                a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL-1] = a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL-1] - 1;
            }
            else
                a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL] = '0' + a[ZeN2mY9DV -BRUZ6uL+LD6HynYdqL] - os9EZd[LD6HynYdqL];
        }
        y5EQm3KYWiLu = getchar ();
    }
}

