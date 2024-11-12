int main () {
    void  pai (double  lzilCQ1yT [], int tUbfaR8k, double  c []);
    double  Ho2yewPbrx;
    double  OTxbISg7P;
    double  lzilCQ1yT [100] = {(740 - 740)};
    double  W28iwQ [100] = {0};
    Ho2yewPbrx = (806 - 806);
    OTxbISg7P = (82 - 82);
    int rmQtaoVS25h;
    int tUbfaR8k;
    int g9Tj8q0ykLZg;
    int c [100] = {0};
    rmQtaoVS25h = 0;
    tUbfaR8k = 0;
    g9Tj8q0ykLZg = (668 - 667);
    scanf ("%d", &tUbfaR8k);
    {
        rmQtaoVS25h = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rmQtaoVS25h < tUbfaR8k) {
            scanf ("%lf", &lzilCQ1yT[rmQtaoVS25h]);
            Ho2yewPbrx = Ho2yewPbrx +lzilCQ1yT[rmQtaoVS25h];
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
            rmQtaoVS25h = rmQtaoVS25h + 1;
        };
    }
    OTxbISg7P = Ho2yewPbrx / tUbfaR8k;
    for (rmQtaoVS25h = 0; rmQtaoVS25h < tUbfaR8k; rmQtaoVS25h = rmQtaoVS25h + 1) {
        W28iwQ[rmQtaoVS25h] = fabs (lzilCQ1yT[rmQtaoVS25h] - OTxbISg7P);
    }
    pai (W28iwQ, tUbfaR8k, lzilCQ1yT);
    for (rmQtaoVS25h = 0; rmQtaoVS25h < tUbfaR8k; rmQtaoVS25h = rmQtaoVS25h + 1) {
        if (!(W28iwQ[rmQtaoVS25h + (123 - 122)] != W28iwQ[rmQtaoVS25h]))
            g9Tj8q0ykLZg = g9Tj8q0ykLZg + (58 - 57);
        else
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    pai (lzilCQ1yT, g9Tj8q0ykLZg, W28iwQ);
    for (rmQtaoVS25h = g9Tj8q0ykLZg - 1; rmQtaoVS25h >= 0; rmQtaoVS25h = rmQtaoVS25h - 1) {
        printf ("%d", (int) lzilCQ1yT[rmQtaoVS25h]);
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
        if (rmQtaoVS25h > 0)
            printf (",");
    }
    return (0);
}

void  pai (double  lzilCQ1yT [], int tUbfaR8k, double  c []) {
    double  UODEcwvf = 0;
    int rmQtaoVS25h;
    int UhuGrTPzjtq8;
    int JI1dtGOWnuvC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    rmQtaoVS25h = 0;
    UhuGrTPzjtq8 = 0;
    JI1dtGOWnuvC = 0;
    {
        rmQtaoVS25h = 0;
        while (rmQtaoVS25h < tUbfaR8k) {
            {
                JI1dtGOWnuvC = 0;
                while (JI1dtGOWnuvC < tUbfaR8k - rmQtaoVS25h - 1) {
                    if (lzilCQ1yT[JI1dtGOWnuvC] < lzilCQ1yT[JI1dtGOWnuvC +1]) {
                        UODEcwvf = lzilCQ1yT[JI1dtGOWnuvC];
                        lzilCQ1yT[JI1dtGOWnuvC] = lzilCQ1yT[JI1dtGOWnuvC +1];
                        lzilCQ1yT[JI1dtGOWnuvC +1] = UODEcwvf;
                        UODEcwvf = c[JI1dtGOWnuvC];
                        c[JI1dtGOWnuvC] = c[JI1dtGOWnuvC +1];
                        c[JI1dtGOWnuvC +1] = UODEcwvf;
                    }
                    JI1dtGOWnuvC++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            rmQtaoVS25h = rmQtaoVS25h + 1;
        };
    };
}

