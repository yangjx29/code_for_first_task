void  main () {
    int k;
    char HJlfDtATe [500] [6];
    char AuFinbUvyo [500];
    int zserZRz8SA [500] = {0};
    int max;
    int x0eTMP;
    int RJQfuCUl2k;
    int nKIwDtA0;
    int pBd12K8ziCq;
    scanf ("%d", &nKIwDtA0);
    scanf ("%s", AuFinbUvyo);
    RJQfuCUl2k = strlen (AuFinbUvyo);
    for (pBd12K8ziCq = 0; pBd12K8ziCq < RJQfuCUl2k -nKIwDtA0 + (32 - 31); pBd12K8ziCq = pBd12K8ziCq + (530 - 529)) {
        {
            x0eTMP = 0;
            for (; nKIwDtA0 > x0eTMP;) {
                HJlfDtATe[pBd12K8ziCq][x0eTMP] = AuFinbUvyo[pBd12K8ziCq + x0eTMP];
                x0eTMP = x0eTMP + (476 - 475);
            }
        }
        HJlfDtATe[pBd12K8ziCq][x0eTMP] = '\0';
    }
    {
        pBd12K8ziCq = 0;
        for (; RJQfuCUl2k -nKIwDtA0 > pBd12K8ziCq;) {
            if (zserZRz8SA[pBd12K8ziCq] != -1) {
                x0eTMP = pBd12K8ziCq + 1;
                for (; RJQfuCUl2k -nKIwDtA0 + 1 > x0eTMP;) {
                    if (zserZRz8SA[x0eTMP] != -1)
                        if (!(0 != strcmp (HJlfDtATe[pBd12K8ziCq], HJlfDtATe[x0eTMP]))) {
                            zserZRz8SA[pBd12K8ziCq]++;
                            zserZRz8SA[x0eTMP] = -1;
                        }
                    x0eTMP = x0eTMP + 1;
                }
            }
            pBd12K8ziCq = pBd12K8ziCq + 1;
        }
    }
    max = zserZRz8SA[0];
    for (pBd12K8ziCq = 1; RJQfuCUl2k -nKIwDtA0 + 1 > pBd12K8ziCq; pBd12K8ziCq = pBd12K8ziCq + 1) {
        if (zserZRz8SA[pBd12K8ziCq] > max)
            max = zserZRz8SA[pBd12K8ziCq];
    }
    if (!(0 != max))
        ;
    else {
        printf ("%d\n", max + 1);
        for (pBd12K8ziCq = 0; pBd12K8ziCq < RJQfuCUl2k -nKIwDtA0 + 1; pBd12K8ziCq = pBd12K8ziCq + 1)
            if (zserZRz8SA[pBd12K8ziCq] == max)
                printf ("%s\n", HJlfDtATe[pBd12K8ziCq]);
    }
}

