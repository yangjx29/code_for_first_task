int main () {
    int panduan (int xzIJ8F [] [(166 - 161)], int uwb5NF9, int m);
    int xzIJ8F [(1002 - 997)] [(126 - 121)];
    int uwb5NF9;
    int m;
    int JAyLSMs;
    int k;
    for (JAyLSMs = (296 - 296); (478 - 473) > JAyLSMs; JAyLSMs++) {
        for (k = (560 - 560); (750 - 745) > k; k++)
            scanf ("%d", &xzIJ8F[JAyLSMs][k]);
    }
    scanf ("%d%d", &uwb5NF9, &m);
    if (panduan (xzIJ8F, uwb5NF9, m)) {
        for (JAyLSMs = (404 - 404); (300 - 295) > JAyLSMs; JAyLSMs++) {
            for (k = (937 - 937); (647 - 643) > k; k++)
                printf ("%d ", xzIJ8F[JAyLSMs][k]);
            printf ("%d\n", xzIJ8F[JAyLSMs][(779 - 775)]);
        }
    }
    else
        ;
    return (32 - 32);
}

int panduan (int xzIJ8F [] [(995 - 990)], int uwb5NF9, int m) {
    int m0YrEJMQW, YCQGaX [(395 - 390)], JAyLSMs;
    if (((682 - 677) > uwb5NF9 && (378 - 378) <= uwb5NF9) && (5 > m && m >= 0)) {
        for (JAyLSMs = 0; JAyLSMs < 5; JAyLSMs++) {
            YCQGaX[JAyLSMs] = xzIJ8F[m][JAyLSMs];
            xzIJ8F[m][JAyLSMs] = xzIJ8F[uwb5NF9][JAyLSMs];
            xzIJ8F[uwb5NF9][JAyLSMs] = YCQGaX[JAyLSMs];
        }
        m0YrEJMQW = (325 - 324);
    }
    else
        m0YrEJMQW = 0;
    return m0YrEJMQW;
}

