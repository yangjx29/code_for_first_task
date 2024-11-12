int main () {
    int GSgy7WMx, HpabeG74Y, aIxHGBoRS37t, n, narqCF0, a, ptK5fIbp;
    int FKP8euX6dA [45] [2];
    double  d [11] [11], OaLRZOI;
    int rRZBk6aO [11], y [11], mVG452 [11], g = 0, e1, fBrjKeY4QSnO;
    scanf ("%d", &n);
    {
        GSgy7WMx = 0;
        while (n > GSgy7WMx) {
            scanf ("%d", &rRZBk6aO[GSgy7WMx]);
            scanf ("%d", &y[GSgy7WMx]);
            scanf ("%d", &mVG452[GSgy7WMx]);
            GSgy7WMx = GSgy7WMx +1;
        };
    }
    for (GSgy7WMx = 0; n > GSgy7WMx; GSgy7WMx = GSgy7WMx +1) {
        for (HpabeG74Y = 0; n > HpabeG74Y; HpabeG74Y++) {
            d[GSgy7WMx][HpabeG74Y] = 0;
        };
    }
    for (GSgy7WMx = 0; GSgy7WMx < n; GSgy7WMx++) {
        HpabeG74Y = 736 - 735;
        while (n > HpabeG74Y) {
            g = g + (199 - 198);
            d[GSgy7WMx][HpabeG74Y] = sqrt ((rRZBk6aO[GSgy7WMx] - rRZBk6aO[HpabeG74Y]) * (rRZBk6aO[GSgy7WMx] - rRZBk6aO[HpabeG74Y]) + (y[GSgy7WMx] - y[HpabeG74Y]) * (y[GSgy7WMx] - y[HpabeG74Y]) + (mVG452[GSgy7WMx] - mVG452[HpabeG74Y]) * (mVG452[GSgy7WMx] - mVG452[HpabeG74Y]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            HpabeG74Y++;
        };
    }
    {
        aIxHGBoRS37t = 0;
        while (g > aIxHGBoRS37t) {
            FKP8euX6dA[aIxHGBoRS37t][0] = 0;
            FKP8euX6dA[aIxHGBoRS37t][1] = 0;
            aIxHGBoRS37t++;
        };
    }
    for (aIxHGBoRS37t = 0; g > aIxHGBoRS37t; aIxHGBoRS37t++) {
        ptK5fIbp = aIxHGBoRS37t + 1;
        {
            a = 0;
            while (n > a) {
                ptK5fIbp = ptK5fIbp - n + a + 1;
                if (ptK5fIbp <= 0) {
                    ptK5fIbp = ptK5fIbp + n - a - 1;
                    break;
                }
                a = a + 1;
            };
        }
        FKP8euX6dA[aIxHGBoRS37t][0] = a;
        FKP8euX6dA[aIxHGBoRS37t][1] = ptK5fIbp + a;
    }
    {
        aIxHGBoRS37t = 0;
        while (aIxHGBoRS37t < g) {
            for (narqCF0 = g - 1; aIxHGBoRS37t <= narqCF0; narqCF0--) {
                if (narqCF0 < g - 1) {
                    if (d[FKP8euX6dA[narqCF0][0]][FKP8euX6dA[narqCF0][1]] < d[FKP8euX6dA[narqCF0 + 1][0]][FKP8euX6dA[narqCF0 + 1][1]]) {
                        e1 = FKP8euX6dA[narqCF0][0];
                        FKP8euX6dA[narqCF0][0] = FKP8euX6dA[narqCF0 + 1][0];
                        FKP8euX6dA[narqCF0 + 1][0] = e1;
                        fBrjKeY4QSnO = FKP8euX6dA[narqCF0][1];
                        FKP8euX6dA[narqCF0][1] = FKP8euX6dA[narqCF0 + 1][1];
                        FKP8euX6dA[narqCF0 + 1][1] = fBrjKeY4QSnO;
                    };
                };
            }
            aIxHGBoRS37t++;
        };
    }
    {
        aIxHGBoRS37t = 0;
        while (aIxHGBoRS37t < g) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", rRZBk6aO[FKP8euX6dA[aIxHGBoRS37t][0]], y[FKP8euX6dA[aIxHGBoRS37t][0]], mVG452[FKP8euX6dA[aIxHGBoRS37t][0]], rRZBk6aO[FKP8euX6dA[aIxHGBoRS37t][1]], y[FKP8euX6dA[aIxHGBoRS37t][1]], mVG452[FKP8euX6dA[aIxHGBoRS37t][1]], d[FKP8euX6dA[aIxHGBoRS37t][0]][FKP8euX6dA[aIxHGBoRS37t][1]]);
            aIxHGBoRS37t++;
        };
    }
    return 0;
}

