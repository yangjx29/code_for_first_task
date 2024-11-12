int main () {
    int KPbqevBpV (int kLkFcthM);
    int kLkFcthM;
    for (; (874 - 873);) {
        KPbqevBpV (kLkFcthM);
        scanf ("%d", &kLkFcthM);
        if (!(0 != kLkFcthM)) {
            break;
        }
    }
    return 0;
}

int KPbqevBpV (int kLkFcthM) {
    int g6mSLd = 0, CZNC4DzKiS1, viOXGzWthfo = 1;
    int AZoILUB, tiNVtd9, staw = 0, SE9XRvN = 0;
    int vLi4Pgh (int hPmo7OTICVp [], int ggVqb2r [], int kLkFcthM);
    int ggVqb2r [1001], hPmo7OTICVp [1001];
    {
        CZNC4DzKiS1 = 0;
        for (; CZNC4DzKiS1 < kLkFcthM;) {
            scanf ("%d", &hPmo7OTICVp[CZNC4DzKiS1]);
            CZNC4DzKiS1++;
        }
    }
    {
        CZNC4DzKiS1 = 0;
        for (; kLkFcthM > CZNC4DzKiS1;) {
            scanf ("%d", &ggVqb2r[CZNC4DzKiS1]);
            CZNC4DzKiS1++;
        }
    }
    tiNVtd9 = kLkFcthM - 1;
    AZoILUB = kLkFcthM - 1;
    vLi4Pgh (hPmo7OTICVp, ggVqb2r, kLkFcthM);
    for (; SE9XRvN <= tiNVtd9;) {
        if (hPmo7OTICVp[SE9XRvN] > ggVqb2r[staw]) {
            SE9XRvN++;
            g6mSLd += 200;
            staw++;
        }
        else {
            if (hPmo7OTICVp[SE9XRvN] < ggVqb2r[staw]) {
                tiNVtd9--;
                g6mSLd -= 200;
                staw++;
            }
            else {
                if (!(ggVqb2r[staw] != hPmo7OTICVp[SE9XRvN])) {
                    for (; (!(1 != viOXGzWthfo));) {
                        if (hPmo7OTICVp[tiNVtd9] > ggVqb2r[AZoILUB]) {
                            g6mSLd += 200;
                            tiNVtd9--;
                            AZoILUB--;
                        }
                        else if (ggVqb2r[AZoILUB] >= hPmo7OTICVp[tiNVtd9]) {
                            if (hPmo7OTICVp[tiNVtd9] < ggVqb2r[staw]) {
                                g6mSLd -= 200;
                            }
                            staw++;
                            tiNVtd9--;
                            viOXGzWthfo = 0;
                        }
                    }
                    viOXGzWthfo = 1;
                }
            }
        }
    }
    printf ("%d\n", g6mSLd);
    return 0;
}

int vLi4Pgh (int hPmo7OTICVp [], int ggVqb2r [], int kLkFcthM) {
    int CZNC4DzKiS1, qHUIrVwAoR, BIxETym8Oq3;
    {
        CZNC4DzKiS1 = 0;
        while (CZNC4DzKiS1 < kLkFcthM) {
            {
                qHUIrVwAoR = kLkFcthM - 1;
                for (; qHUIrVwAoR > CZNC4DzKiS1;) {
                    if (hPmo7OTICVp[qHUIrVwAoR] > hPmo7OTICVp[qHUIrVwAoR - 1]) {
                        BIxETym8Oq3 = hPmo7OTICVp[qHUIrVwAoR];
                        hPmo7OTICVp[qHUIrVwAoR] = hPmo7OTICVp[qHUIrVwAoR - 1];
                        hPmo7OTICVp[qHUIrVwAoR - 1] = BIxETym8Oq3;
                    }
                    if (ggVqb2r[qHUIrVwAoR] > ggVqb2r[qHUIrVwAoR - 1]) {
                        BIxETym8Oq3 = ggVqb2r[qHUIrVwAoR];
                        ggVqb2r[qHUIrVwAoR] = ggVqb2r[qHUIrVwAoR - 1];
                        ggVqb2r[qHUIrVwAoR - 1] = BIxETym8Oq3;
                    }
                    qHUIrVwAoR--;
                }
            }
            CZNC4DzKiS1++;
        }
    }
    return 0;
}

