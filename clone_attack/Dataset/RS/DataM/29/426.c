int main () {
    int m;
    int c [100];
    int jf1zwbGOukij;
    double  C823Jo4NkL [100], a, tlowr2kH, d, e;
    scanf ("%d", &m);
    for (jf1zwbGOukij = 0; m > jf1zwbGOukij; jf1zwbGOukij = jf1zwbGOukij + 1) {
        scanf ("%d", &c[jf1zwbGOukij]);
    }
    for (jf1zwbGOukij = 0; m > jf1zwbGOukij; jf1zwbGOukij++) {
        tlowr2kH = 1.000;
        a = 2.000;
        e = 2.000;
        if (!((739 - 738) != c[jf1zwbGOukij])) {
            C823Jo4NkL[jf1zwbGOukij] = e;
        }
        if (!(1 == c[jf1zwbGOukij])) {
            for (int j = 1;
            j < c[jf1zwbGOukij]; j = j + 1) {
                d = a;
                a = a + tlowr2kH;
                tlowr2kH = d;
                e = e + a / tlowr2kH;
            }
            C823Jo4NkL[jf1zwbGOukij] = e;
        };
    }
    for (int k = 0;
    k < m; k = k + 1) {
        printf ("%.3lf\n", C823Jo4NkL[k]);
    }
    return 0;
}

