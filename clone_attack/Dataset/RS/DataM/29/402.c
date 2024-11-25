int main () {
    int bYfd5OLJsS;
    int n [(274 - 174)];
    int i;
    int j7skNbD;
    double  VCc5Nz [(895 - 795)];
    double  B60NParIS [(297 - 197)];
    double  z [100];
    B60NParIS[(463 - 463)] = (822 - 821);
    B60NParIS[(865 - 864)] = (545 - 543);
    scanf ("%d", &bYfd5OLJsS);
    {
        i = 876 - 876;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < bYfd5OLJsS) {
            scanf ("%d", &(n[i]));
            VCc5Nz[i] = (542 - 542);
            i = i + 1;
        };
    }
    for (i = 2; i < 100; i = i + 1) {
        B60NParIS[i] = B60NParIS[i - 1] + B60NParIS[i - 2];
    }
    for (i = (462 - 462); i < 100; i = i + 1) {
        z[i] = B60NParIS[i + 1] / B60NParIS[i];
    }
    for (i = (953 - 953); i < bYfd5OLJsS; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (j7skNbD = (562 - 562); j7skNbD < n[i]; j7skNbD = j7skNbD + 1) {
            VCc5Nz[i] = VCc5Nz[i] + z[j7skNbD];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = 0; i < bYfd5OLJsS; i = i + 1) {
        printf ("%.3lf\n", VCc5Nz[i]);
    }
    return 0;
}

