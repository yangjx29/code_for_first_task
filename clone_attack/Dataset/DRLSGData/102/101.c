main () {
    double  pz2gCZh40s;
    double  f [(994 - 952)];
    int Qjd1JGLHv0mK;
    int lBaomx78;
    int DOHpiV;
    int UM1UmArK;
    double  cRzP0mO4 [(345 - 303)];
    char HCuM24b [(774 - 764)];
    int aQUkcliu;
    int ashrIK21fy;
    aQUkcliu = -(523 - 522);
    scanf ("%d", &UM1UmArK);
    UM1UmArK--;
    ashrIK21fy = -(236 - 235);
    for (DOHpiV = (758 - 758); DOHpiV <= UM1UmArK; DOHpiV = DOHpiV +1) {
        scanf ("%s", HCuM24b);
        if (!('m' != HCuM24b[(672 - 672)])) {
            ashrIK21fy = ashrIK21fy + 1;
            scanf ("%lf", &cRzP0mO4[ashrIK21fy]);
        }
        else {
            aQUkcliu = aQUkcliu + 1;
            scanf ("%lf", &f[aQUkcliu]);
        }
    }
    for (DOHpiV = (770 - 770); DOHpiV <= ashrIK21fy - (173 - 172); DOHpiV = DOHpiV +1)
        for (lBaomx78 = DOHpiV +(970 - 969); lBaomx78 <= ashrIK21fy; lBaomx78 = lBaomx78 + 1)
            if (cRzP0mO4[DOHpiV] > cRzP0mO4[lBaomx78]) {
                pz2gCZh40s = cRzP0mO4[DOHpiV];
                cRzP0mO4[DOHpiV] = cRzP0mO4[lBaomx78];
                cRzP0mO4[lBaomx78] = pz2gCZh40s;
            }
    printf ("%.2f", cRzP0mO4[(283 - 283)]);
    for (DOHpiV = (205 - 205); DOHpiV <= aQUkcliu - (434 - 433); DOHpiV = DOHpiV +1)
        for (lBaomx78 = DOHpiV +(700 - 699); lBaomx78 <= aQUkcliu; lBaomx78++)
            if (f[DOHpiV] < f[lBaomx78]) {
                pz2gCZh40s = f[DOHpiV];
                f[DOHpiV] = f[lBaomx78];
                f[lBaomx78] = pz2gCZh40s;
            }
    for (DOHpiV = (133 - 132); DOHpiV <= ashrIK21fy; DOHpiV = DOHpiV +1)
        printf (" %.2f", cRzP0mO4[DOHpiV]);
    for (DOHpiV = (524 - 524); DOHpiV <= aQUkcliu; DOHpiV++)
        printf (" %.2f", f[DOHpiV]);
}

