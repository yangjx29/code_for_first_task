void  main () {
    char xPFYUKg16EO [3000];
    gets (xPFYUKg16EO);
    int SXWDgG9yBds3, dRV9BFUiQ, TuconDSsqAb, ihBlbQ2;
    int bYczIRwnjNdT [100];
    TuconDSsqAb = strlen (xPFYUKg16EO);
    xPFYUKg16EO[TuconDSsqAb] = ' ';
    dRV9BFUiQ = 1;
    for (SXWDgG9yBds3 = 0; SXWDgG9yBds3 <= TuconDSsqAb; SXWDgG9yBds3++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xPFYUKg16EO[SXWDgG9yBds3] == ' ') {
            bYczIRwnjNdT[dRV9BFUiQ] = SXWDgG9yBds3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            dRV9BFUiQ = dRV9BFUiQ + 1;
        };
    }
    printf ("%d", bYczIRwnjNdT[1]);
    for (SXWDgG9yBds3 = 2; SXWDgG9yBds3 < dRV9BFUiQ; SXWDgG9yBds3++) {
        ihBlbQ2 = bYczIRwnjNdT[SXWDgG9yBds3] - bYczIRwnjNdT[SXWDgG9yBds3 -1] - 1;
        if (ihBlbQ2 != 0)
            printf (",%d", ihBlbQ2);
    };
}

