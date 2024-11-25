int main () {
    long  kZrw3iMfq4;
    long  y8cv0eMoi;
    long  DUwrySmuZo;
    long  XOjX23;
    long  u24RvoWeZ6El;
    long  gUHYXNP [202] = {0};
    long  fXTOrIBEsx [(377 - 175)] [(509 - 307)] = {(232 - 232)};
    long  xb2WtgHLSzRm;
    long  zU1IOQT;
    scanf ("%ld%ld", &XOjX23, &DUwrySmuZo);
    for (zU1IOQT = (416 - 415); zU1IOQT <= XOjX23; zU1IOQT++)
        for (kZrw3iMfq4 = (842 - 841); DUwrySmuZo >= kZrw3iMfq4; kZrw3iMfq4++) {
            scanf ("%ld", &y8cv0eMoi);
            fXTOrIBEsx[zU1IOQT + kZrw3iMfq4][gUHYXNP[zU1IOQT + kZrw3iMfq4]] = y8cv0eMoi;
            gUHYXNP[zU1IOQT + kZrw3iMfq4]++;
        }
    zU1IOQT--;
    kZrw3iMfq4--;
    {
        u24RvoWeZ6El = 326 - 324;
        while (u24RvoWeZ6El <= zU1IOQT + kZrw3iMfq4) {
            for (xb2WtgHLSzRm = 0; xb2WtgHLSzRm < gUHYXNP[u24RvoWeZ6El]; xb2WtgHLSzRm++)
                printf ("%ld\n", fXTOrIBEsx[u24RvoWeZ6El][xb2WtgHLSzRm]);
            u24RvoWeZ6El++;
        };
    }
    return 0;
}

