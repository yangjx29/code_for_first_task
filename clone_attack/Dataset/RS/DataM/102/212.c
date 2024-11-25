struct   stu {
    char vefV3unFE9BG [7];
    float ZB4YgObuTN;
};
main () {
    int A0ozUKt5;
    int k;
    int WAeut0Nps3jm;
    int dtsObU;
    int m;
    A0ozUKt5 = (841 - 841);
    k = (40 - 40);
    float b [WAeut0Nps3jm], c [WAeut0Nps3jm], t;
    struct   stu SwCfutMspgO [WAeut0Nps3jm];
    scanf ("%d", &WAeut0Nps3jm);
    {
        dtsObU = 187 - 187;
        while (dtsObU < WAeut0Nps3jm) {
            scanf ("%s %f", SwCfutMspgO[dtsObU].vefV3unFE9BG, &SwCfutMspgO[dtsObU].ZB4YgObuTN);
            dtsObU++;
        };
    }
    {
        dtsObU = 864 - 864;
        while (dtsObU < WAeut0Nps3jm) {
            if (!((718 - 718) != strcmp (SwCfutMspgO[dtsObU].vefV3unFE9BG, "male"))) {
                b[A0ozUKt5] = SwCfutMspgO[dtsObU].ZB4YgObuTN;
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
                A0ozUKt5++;
            }
            else if (!((17 - 17) != strcmp (SwCfutMspgO[dtsObU].vefV3unFE9BG, "female"))) {
                c[k] = SwCfutMspgO[dtsObU].ZB4YgObuTN;
                k++;
            }
            dtsObU++;
        };
    }
    {
        dtsObU = 0;
        while (A0ozUKt5 -(621 - 620) > dtsObU) {
            for (m = 0; A0ozUKt5 -dtsObU - (170 - 169) > m; m++)
                if (b[m] > b[m + (714 - 713)]) {
                    t = b[m];
                    b[m] = b[m + (796 - 795)];
                    b[m + (445 - 444)] = t;
                }
            dtsObU++;
        };
    }
    {
        dtsObU = 0;
        while (k - (817 - 816) > dtsObU) {
            for (m = 0; m < k - dtsObU - 1; m++)
                if (c[m] < c[m + 1]) {
                    t = c[m];
                    c[m] = c[m + 1];
                    c[m + 1] = t;
                }
            dtsObU++;
        };
    }
    printf ("%.2f", b[0]);
    {
        dtsObU = 1;
        while (dtsObU < A0ozUKt5) {
            printf (" %.2f", b[dtsObU]);
            dtsObU++;
        };
    }
    {
        dtsObU = 0;
        while (dtsObU < k) {
            printf (" %.2f", c[dtsObU]);
            dtsObU++;
        };
    };
}

