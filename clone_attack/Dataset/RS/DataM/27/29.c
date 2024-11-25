int main (int yY5oIP, char *ilg3vuEQ1 []) {
    int QvYsRU4tVBOb;
    int D78bYEOSi0;
    double  B5gEo0FrUy [200], Zj1h4Bu [200], CfUGcaj [200], w71Yilg3 [100], XluhLJoTGr [100], hykb9oRHuxg [100], lAbcGJOr [100], II7daXrME4 [100];
    scanf ("%d", &QvYsRU4tVBOb);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        D78bYEOSi0 = 0;
        while (D78bYEOSi0 < QvYsRU4tVBOb) {
            scanf ("%lf%lf%lf\n", &B5gEo0FrUy[D78bYEOSi0], &Zj1h4Bu[D78bYEOSi0], &CfUGcaj[D78bYEOSi0]);
            D78bYEOSi0 = D78bYEOSi0 +1;
        };
    }
    w71Yilg3[D78bYEOSi0] = Zj1h4Bu[D78bYEOSi0] * Zj1h4Bu[D78bYEOSi0] - 4 * B5gEo0FrUy[D78bYEOSi0] * CfUGcaj[D78bYEOSi0];
    {
        D78bYEOSi0 = 0;
        while (D78bYEOSi0 < QvYsRU4tVBOb) {
            w71Yilg3[D78bYEOSi0] = Zj1h4Bu[D78bYEOSi0] * Zj1h4Bu[D78bYEOSi0] - 4 * B5gEo0FrUy[D78bYEOSi0] * CfUGcaj[D78bYEOSi0];
            if (1e-6 >= fabs (w71Yilg3[D78bYEOSi0])) {
                printf ("x1=x2=%.5f\n", -Zj1h4Bu[D78bYEOSi0] / (2 * B5gEo0FrUy[D78bYEOSi0]));
            }
            else {
                if (w71Yilg3[D78bYEOSi0] > 1e-6) {
                    XluhLJoTGr[D78bYEOSi0] = (-Zj1h4Bu[D78bYEOSi0] + sqrt (w71Yilg3[D78bYEOSi0])) / (2 * B5gEo0FrUy[D78bYEOSi0]);
                    hykb9oRHuxg[D78bYEOSi0] = (-Zj1h4Bu[D78bYEOSi0] - sqrt (w71Yilg3[D78bYEOSi0])) / (2 * B5gEo0FrUy[D78bYEOSi0]);
                    printf ("x1=%.5f;x2=%.5f\n", XluhLJoTGr[D78bYEOSi0], hykb9oRHuxg[D78bYEOSi0]);
                }
                else {
                    lAbcGJOr[D78bYEOSi0] = -Zj1h4Bu[D78bYEOSi0] / (2 * B5gEo0FrUy[D78bYEOSi0]);
                    II7daXrME4[D78bYEOSi0] = sqrt (-w71Yilg3[D78bYEOSi0]) / (2 * B5gEo0FrUy[D78bYEOSi0]);
                    if (fabs (lAbcGJOr[D78bYEOSi0]) <= 1e-6) {
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -lAbcGJOr[D78bYEOSi0], II7daXrME4[D78bYEOSi0], -lAbcGJOr[D78bYEOSi0], II7daXrME4[D78bYEOSi0]);
                    }
                    else {
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", lAbcGJOr[D78bYEOSi0], II7daXrME4[D78bYEOSi0], lAbcGJOr[D78bYEOSi0], II7daXrME4[D78bYEOSi0]);
                    };
                };
            }
            D78bYEOSi0 = D78bYEOSi0 +1;
        };
    }
    return 0;
}

