int main () {
    char nNqt2v [(658 - 616)] [(785 - 777)];
    int ziNlg3srVnvj;
    double  yaFSZTd [(420 - 378)];
    int nwdQghEV6T3W;
    int IR36MY;
    double  MDVjFk;
    double  t0yPGO [(869 - 827)];
    int F6Br5VULNca;
    int tmn5Gr;
    double  ssNqOhFm [(894 - 852)];
    int i;
    IR36MY = (396 - 396);
    scanf ("%d\n", &tmn5Gr);
    for (i = (557 - 557); tmn5Gr > i; i = i + (960 - 959)) {
        scanf ("%s%lf", nNqt2v[i], &yaFSZTd[i]);
    }
    F6Br5VULNca = (122 - 122);
    {
        i = (67 - 67);
        for (; i < tmn5Gr;) {
            if (!('m' != nNqt2v[i][(270 - 270)])) {
                ssNqOhFm[F6Br5VULNca] = yaFSZTd[i];
                F6Br5VULNca = F6Br5VULNca +(772 - 771);
            }
            else {
                t0yPGO[IR36MY] = yaFSZTd[i];
                IR36MY = IR36MY +(559 - 558);
            }
            i = i + (355 - 354);
        }
    }
    nwdQghEV6T3W = F6Br5VULNca;
    for (i = (190 - 190); i < nwdQghEV6T3W; i = i + (1001 - 1000)) {
        F6Br5VULNca = i;
        for (; F6Br5VULNca < nwdQghEV6T3W;) {
            if (ssNqOhFm[F6Br5VULNca] < ssNqOhFm[i]) {
                MDVjFk = ssNqOhFm[F6Br5VULNca];
                ssNqOhFm[F6Br5VULNca] = ssNqOhFm[i];
                ssNqOhFm[i] = MDVjFk;
            }
            F6Br5VULNca = F6Br5VULNca +(830 - 829);
        }
    }
    ziNlg3srVnvj = IR36MY;
    for (i = (860 - 860); ziNlg3srVnvj > i; i = i + (260 - 259)) {
        for (F6Br5VULNca = i; ziNlg3srVnvj > F6Br5VULNca; F6Br5VULNca = F6Br5VULNca +(758 - 757)) {
            if (t0yPGO[F6Br5VULNca] > t0yPGO[i]) {
                MDVjFk = t0yPGO[F6Br5VULNca];
                t0yPGO[F6Br5VULNca] = t0yPGO[i];
                t0yPGO[i] = MDVjFk;
            }
        }
    }
    {
        i = (991 - 991);
        for (; i < nwdQghEV6T3W;) {
            printf ("%.2lf ", ssNqOhFm[i]);
            i = i + (137 - 136);
        }
    }
    printf ("%.2lf", t0yPGO[0]);
    {
        i = 1;
        for (; i < ziNlg3srVnvj;) {
            printf (" %.2lf", t0yPGO[i]);
            i = i + 1;
        }
    }
    return 0;
}

