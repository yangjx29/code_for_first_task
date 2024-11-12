void  PuvJmiFW (double  *IVh1ejTt5nb, int oMX0C51rwI) {
    int iq9PBk;
    int OUIez0dBcVs;
    int rSBaYZfw;
    double  om0YiB2L;
    for (iq9PBk = (469 - 469); oMX0C51rwI > iq9PBk; iq9PBk = iq9PBk + (582 - 581)) {
        rSBaYZfw = iq9PBk;
        for (OUIez0dBcVs = iq9PBk + (462 - 461); OUIez0dBcVs < oMX0C51rwI; OUIez0dBcVs++) {
            if (IVh1ejTt5nb[rSBaYZfw] > IVh1ejTt5nb[OUIez0dBcVs])
                rSBaYZfw = OUIez0dBcVs;
        }
        if (rSBaYZfw != iq9PBk) {
            om0YiB2L = IVh1ejTt5nb[rSBaYZfw];
            IVh1ejTt5nb[rSBaYZfw] = IVh1ejTt5nb[iq9PBk];
            IVh1ejTt5nb[iq9PBk] = om0YiB2L;
        }
    }
}

int main () {
    char eecRtKXUHEb [6];
    int OUIez0dBcVs;
    int Wb5Pgzt4;
    double  h;
    int p5kfunhPS;
    int iq9PBk;
    double  nv [(446 - 396)];
    double  nan [(1002 - 952)];
    int oMX0C51rwI;
    scanf ("%d\n", &oMX0C51rwI);
    Wb5Pgzt4 = (256 - 256);
    p5kfunhPS = (414 - 414);
    for (iq9PBk = (196 - 196); iq9PBk < oMX0C51rwI; iq9PBk = iq9PBk + (448 - 447)) {
        scanf ("%s\n", eecRtKXUHEb);
        scanf ("%lf", &h);
        if (!('m' != eecRtKXUHEb[(956 - 956)])) {
            nan[Wb5Pgzt4] = h;
            Wb5Pgzt4++;
        }
        else {
            nv[p5kfunhPS] = h;
            p5kfunhPS++;
        }
    }
    PuvJmiFW (nan, Wb5Pgzt4);
    for (iq9PBk = 0; iq9PBk < Wb5Pgzt4; iq9PBk = iq9PBk + 1)
        printf ("%.2lf ", nan[iq9PBk]);
    PuvJmiFW (nv, p5kfunhPS);
    for (iq9PBk = p5kfunhPS - 1; 0 < iq9PBk; iq9PBk = iq9PBk - 1)
        printf ("%.2lf ", nv[iq9PBk]);
    printf ("%.2lf", nv[0]);
    return 0;
}

