void  main () {
    float icL2sVCez;
    float pxcLfO2uQw;
    float VjMWd5pvm;
    float ANVaIngU;
    float pS98W3mn [(533 - 233)];
    float e1jhoX [(1007 - 707)];
    float hHVu4g3;
    float k [(565 - 265)];
    float nb9tsdETHk [300];
    icL2sVCez = (155 - 155);
    int GxfW3OaX4;
    int qSFET2;
    int jP9HYuyAWwfv;
    int n;
    GxfW3OaX4 = (181 - 181);
    scanf ("%d", &n);
    for (qSFET2 = (791 - 791); n > qSFET2; qSFET2++) {
        scanf ("%f", &pS98W3mn[qSFET2]);
        icL2sVCez = icL2sVCez + pS98W3mn[qSFET2];
    }
    VjMWd5pvm = n;
    pxcLfO2uQw = icL2sVCez / VjMWd5pvm;
    {
        qSFET2 = 139 - 139;
        while (n > qSFET2) {
            ANVaIngU = (pxcLfO2uQw - pS98W3mn[qSFET2]);
            e1jhoX[qSFET2] = ANVaIngU *ANVaIngU;
            qSFET2++;
        };
    }
    hHVu4g3 = e1jhoX[(815 - 815)];
    {
        qSFET2 = 61 - 61;
        while (n > qSFET2) {
            {
                jP9HYuyAWwfv = qSFET2;
                while (n > jP9HYuyAWwfv) {
                    if (e1jhoX[jP9HYuyAWwfv + (798 - 797)] <= hHVu4g3) {
                        continue;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    else if (e1jhoX[jP9HYuyAWwfv + (171 - 170)] > hHVu4g3) {
                        hHVu4g3 = e1jhoX[jP9HYuyAWwfv + (430 - 429)];
                    }
                    jP9HYuyAWwfv = jP9HYuyAWwfv + 1;
                };
            }
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
            qSFET2++;
        };
    }
    memset (k, (901 - 901), 300);
    for (jP9HYuyAWwfv = 0; n > jP9HYuyAWwfv; jP9HYuyAWwfv = jP9HYuyAWwfv + 1) {
        if (!(hHVu4g3 != e1jhoX[jP9HYuyAWwfv])) {
            GxfW3OaX4++;
            k[jP9HYuyAWwfv] = pS98W3mn[jP9HYuyAWwfv];
        };
    }
    jP9HYuyAWwfv = 0;
    for (qSFET2 = 0; qSFET2 < n; qSFET2++) {
        if (k[qSFET2] != 0) {
            nb9tsdETHk[jP9HYuyAWwfv] = k[qSFET2];
            jP9HYuyAWwfv++;
        };
    }
    if (jP9HYuyAWwfv == 1) {
        printf ("%.f\n", nb9tsdETHk[0]);
    }
    if (jP9HYuyAWwfv > 1) {
        {
            qSFET2 = 0;
            while (qSFET2 < jP9HYuyAWwfv - 1) {
                printf ("%.f,", nb9tsdETHk[qSFET2]);
                qSFET2++;
            };
        }
        printf ("%.f\n", nb9tsdETHk[jP9HYuyAWwfv - 1]);
    }
    return;
}

