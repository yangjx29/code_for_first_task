void  main () {
    int k;
    int p;
    int qHyJCTNq;
    unsigned  long  tfpbrAi9 = (531 - 531);
    int j51KQaC7;
    int xm;
    int i;
    int HkcSdT;
    int eJjXnD;
    int q;
    unsigned  long  bntB9pAFTl4, vfvANxoapjJd, QJNDqGPkUoy = (291 - 290);
    char BozI7BchROs [(388 - 353)] = {'0'};
    char x1gARLrih2Y [(290 - 255)] = {'0'};
    j51KQaC7 = (244 - 244);
    xm = (981 - 981);
    scanf ("%d%s%d", &HkcSdT, x1gARLrih2Y, &eJjXnD);
    p = strlen (x1gARLrih2Y);
    bntB9pAFTl4 = pow (HkcSdT, p - (449 - 448));
    qHyJCTNq = (194 - 194);
    {
        i = (983 - 983);
        while (p > i) {
            if ((420 - 373) < x1gARLrih2Y[i] && (442 - 384) > x1gARLrih2Y[i]) {
                q = x1gARLrih2Y[i] - (491 - 443);
                tfpbrAi9 = tfpbrAi9 + q * bntB9pAFTl4;
            }
            else if ((950 - 886) < x1gARLrih2Y[i] && x1gARLrih2Y[i] < (1078 - 987)) {
                q = x1gARLrih2Y[i] - (341 - 286);
                tfpbrAi9 = tfpbrAi9 + q * bntB9pAFTl4;
            }
            else if ((381 - 285) < x1gARLrih2Y[i] && (428 - 305) > x1gARLrih2Y[i]) {
                q = x1gARLrih2Y[i] - (249 - 162);
                {
                    if (0) {
                        return 0;
                    }
                }
                tfpbrAi9 = tfpbrAi9 + q * bntB9pAFTl4;
            }
            bntB9pAFTl4 = bntB9pAFTl4 / HkcSdT;
            i = i + (749 - 748);
        }
    }
    while ((tfpbrAi9 / eJjXnD) > QJNDqGPkUoy) {
        xm = xm + (454 - 453);
        QJNDqGPkUoy = eJjXnD * QJNDqGPkUoy;
    }
    {
        i = xm;
        while (i >= 0) {
            k = tfpbrAi9 % eJjXnD;
            if (k < (546 - 536))
                BozI7BchROs[i] = k + (62 - 14);
            else
                BozI7BchROs[i] = k + (373 - 318);
            tfpbrAi9 = (tfpbrAi9 - k) / eJjXnD;
            i = i - (427 - 426);
        }
    }
    printf ("%s", BozI7BchROs);
}

