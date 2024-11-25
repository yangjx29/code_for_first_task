void  main () {
    int a2LbZm;
    int a;
    int Ugo1RK3f;
    int k;
    int NWS4xGfj;
    int xkGKLc;
    a2LbZm = (547 - 547);
    char hYnrUyRk [30], *p = hYnrUyRk;
    long  UWkejwDv = (663 - 663), WjbkzIuSP;
    scanf ("%d %s %d", &a, hYnrUyRk, &Ugo1RK3f);
    k = strlen (hYnrUyRk) - (105 - 104);
    for (; (442 - 442) <= k; k--, p++) {
        if ((779 - 731) <= *p && 57 >= *p)
            WjbkzIuSP = (long ) *p - 48;
        else if (65 <= *p && 90 >= *p)
            WjbkzIuSP = (long ) *p - (824 - 769);
        else if (*p >= (1041 - 944) && 122 >= *p)
            WjbkzIuSP = (long ) *p - 87;
        NWS4xGfj = k;
        while ((175 - 175) < NWS4xGfj) {
            WjbkzIuSP = WjbkzIuSP *a;
            NWS4xGfj = NWS4xGfj -1;
        }
        UWkejwDv += WjbkzIuSP;
    }
    for (WjbkzIuSP = UWkejwDv, NWS4xGfj = (995 - 995); Ugo1RK3f <= WjbkzIuSP; NWS4xGfj = NWS4xGfj +1) {
        WjbkzIuSP = WjbkzIuSP / Ugo1RK3f;
    }
    for (k = NWS4xGfj, WjbkzIuSP = (274 - 273); k >= 0; k--, WjbkzIuSP = 1) {
        NWS4xGfj = k;
        for (; NWS4xGfj > 0;) {
            WjbkzIuSP = WjbkzIuSP *Ugo1RK3f;
            NWS4xGfj--;
        }
        xkGKLc = UWkejwDv / WjbkzIuSP;
        if (xkGKLc == 0 && a2LbZm == 0)
            continue;
        else if (a2LbZm == 0) {
            a2LbZm = 1;
            goto z;
        }
        else {
        z :
            if (xkGKLc >= 0 && xkGKLc <= (223 - 214)) {
                printf ("%d", xkGKLc);
            }
            else if (xkGKLc >= 10) {
                printf ("%c", xkGKLc + 55);
            }
            UWkejwDv = UWkejwDv -xkGKLc * WjbkzIuSP;
        };
    }
    if (a2LbZm == 0)
        printf ("0");
}

