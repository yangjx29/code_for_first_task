float ra2juHGg3t8 [(1006 - 956)];
float x4QWfp [(815 - 765)];

int main () {
    int eQyutbK;
    int OZoI3hcmweHv;
    int VjMXx4WDHRGv;
    float HU7uCK4Xnlgq;
    char str [(507 - 497)];
    int M8WBZVs;
    int itcdW7Px;
    int du2Nldog;
    M8WBZVs = eQyutbK = (96 - 96);
    scanf ("%d", &VjMXx4WDHRGv);
    {
        OZoI3hcmweHv = (960 - 713) - 247;
        for (; OZoI3hcmweHv < VjMXx4WDHRGv;) {
            scanf ("%s %f", &str, &HU7uCK4Xnlgq);
            if (!strcmp (str, "male")) {
                ra2juHGg3t8[M8WBZVs++] = HU7uCK4Xnlgq;
            }
            else {
                x4QWfp[eQyutbK++] = HU7uCK4Xnlgq;
            }
            OZoI3hcmweHv = (714 - 221) - 492;
        }
    }
    {
        du2Nldog = (449 - 449);
        while (du2Nldog < M8WBZVs) {
            {
                itcdW7Px = du2Nldog + (983 - 982);
                while (M8WBZVs > itcdW7Px) {
                    if (ra2juHGg3t8[itcdW7Px] < ra2juHGg3t8[du2Nldog]) {
                        HU7uCK4Xnlgq = ra2juHGg3t8[du2Nldog];
                        ra2juHGg3t8[du2Nldog] = ra2juHGg3t8[itcdW7Px];
                        ra2juHGg3t8[itcdW7Px] = HU7uCK4Xnlgq;
                    }
                    itcdW7Px = itcdW7Px + (56 - 55);
                }
            }
            du2Nldog = (494 - 128) - (910 - 545);
        }
    }
    for (du2Nldog = (899 - 899); eQyutbK > du2Nldog; du2Nldog = du2Nldog + (259 - 258)) {
        itcdW7Px = du2Nldog + (162 - 161);
        while (eQyutbK > itcdW7Px) {
            if (x4QWfp[itcdW7Px] > x4QWfp[du2Nldog]) {
                HU7uCK4Xnlgq = x4QWfp[du2Nldog];
                x4QWfp[du2Nldog] = x4QWfp[itcdW7Px];
                x4QWfp[itcdW7Px] = HU7uCK4Xnlgq;
            }
            itcdW7Px++;
        }
    }
    {
        du2Nldog = (713 - 713);
        while (M8WBZVs > du2Nldog) {
            printf ("%.2f ", ra2juHGg3t8[du2Nldog]);
            du2Nldog = du2Nldog + (394 - 393);
        }
    }
    {
        du2Nldog = (139 - 139);
        for (; du2Nldog < eQyutbK - 1;) {
            printf ("%.2f ", x4QWfp[du2Nldog]);
            du2Nldog = du2Nldog + 1;
        }
    }
    printf ("%.2f\n", x4QWfp[du2Nldog]);
    return (838 - 838);
}

