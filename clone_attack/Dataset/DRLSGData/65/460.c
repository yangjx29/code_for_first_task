main () {
    int sV8N92rCc;
    int UyHWlNgCB;
    int MAyjV5nQcWC;
    int bDjC9EQ;
    int oiYr4oT;
    int xiozwGl;
    scanf ("%d", &oiYr4oT);
    sV8N92rCc = 0;
    UyHWlNgCB = 0;
    {
        MAyjV5nQcWC = 0;
        for (; MAyjV5nQcWC < oiYr4oT;) {
            scanf ("%d %d", &bDjC9EQ, &xiozwGl);
            if (!(0 != bDjC9EQ) && !(1 != xiozwGl) || !(1 != bDjC9EQ) && xiozwGl == 2 || bDjC9EQ == 2 && !(0 != xiozwGl)) {
                UyHWlNgCB = UyHWlNgCB +1;
            }
            if (bDjC9EQ == 1 && xiozwGl == 0 || bDjC9EQ == 2 && xiozwGl == 1 || bDjC9EQ == 0 && xiozwGl == 2) {
                sV8N92rCc = sV8N92rCc + 1;
            }
            MAyjV5nQcWC = MAyjV5nQcWC +1;
        }
    }
    if (UyHWlNgCB > sV8N92rCc)
        ;
    if (UyHWlNgCB < sV8N92rCc)
        ;
    if (UyHWlNgCB == sV8N92rCc)
        ;
}

