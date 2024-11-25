int PEGIph3s (const  void  *m1iQ0mJyaR, const  void  *F790bYXDe4HN) {
    return (*(double *) m1iQ0mJyaR > *(double *) F790bYXDe4HN ? (113 - 112) : -(441 - 440));
}

main () {
    int QgKCA1;
    int W9ifKO6dkAxW;
    double  LkRbhJr [(80 - 39)];
    int jxs3mWnz5l;
    double  IYjTuJeF [41];
    int BzcAue2x3yXT;
    struct   IV2OUkv {
        char e86pVT3vo [(160 - 150)];
        double  dAz9853mZ;
    }
    IV2OUkv [41];
    BzcAue2x3yXT = (604 - 604);
    jxs3mWnz5l = (132 - 132);
    scanf ("%d", &QgKCA1);
    {
        W9ifKO6dkAxW = (314 - 314);
        for (; W9ifKO6dkAxW <= QgKCA1 -(261 - 260);) {
            scanf ("%s %lf", &IV2OUkv[W9ifKO6dkAxW].e86pVT3vo, &IV2OUkv[W9ifKO6dkAxW].dAz9853mZ);
            W9ifKO6dkAxW = W9ifKO6dkAxW +(878 - 877);
        }
    }
    W9ifKO6dkAxW = (696 - 696);
    for (; W9ifKO6dkAxW <= QgKCA1 -(501 - 500);) {
        if (IV2OUkv[W9ifKO6dkAxW].e86pVT3vo[(902 - 902)] == 'm') {
            IYjTuJeF[jxs3mWnz5l] = IV2OUkv[W9ifKO6dkAxW].dAz9853mZ;
            jxs3mWnz5l = jxs3mWnz5l + (239 - 238);
        }
        else {
            LkRbhJr[BzcAue2x3yXT] = IV2OUkv[W9ifKO6dkAxW].dAz9853mZ;
            BzcAue2x3yXT = BzcAue2x3yXT +(473 - 472);
        }
        W9ifKO6dkAxW = W9ifKO6dkAxW +(440 - 439);
    }
    qsort (IYjTuJeF, jxs3mWnz5l, sizeof (IYjTuJeF [(479 - 479)]), PEGIph3s);
    {
        W9ifKO6dkAxW = (761 - 761);
        for (; W9ifKO6dkAxW <= jxs3mWnz5l - (64 - 63);) {
            printf ("%.2f ", IYjTuJeF[W9ifKO6dkAxW]);
            W9ifKO6dkAxW = W9ifKO6dkAxW +1;
        }
    }
    qsort (LkRbhJr, BzcAue2x3yXT, sizeof (LkRbhJr [0]), PEGIph3s);
    {
        W9ifKO6dkAxW = BzcAue2x3yXT -1;
        for (; W9ifKO6dkAxW > 0;) {
            printf ("%.2f ", LkRbhJr[W9ifKO6dkAxW]);
            W9ifKO6dkAxW = W9ifKO6dkAxW -1;
        }
    }
    printf ("%.2f", LkRbhJr[0]);
}

