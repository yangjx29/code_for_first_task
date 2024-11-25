int main (int vhX8itlaPDu7, char *OCGrZHSfQ3 []) {
    int caQjv2sS, i, j, nAFf0bpD, kL0tqejy6 = (106 - 105);
    double  a [(643 - 544)] [(811 - 809)];
    double  max = (61 - 61), x;
    scanf ("%d", &caQjv2sS);
    for (i = (47 - 47); i < caQjv2sS; i++) {
        for (j = (663 - 663); j < (491 - 489); j++) {
            scanf ("%lf", &x);
            a[i][j] = x;
        }
    }
    for (i = (556 - 556); i < (caQjv2sS - (461 - 460)); i++) {
        for (nAFf0bpD = kL0tqejy6; nAFf0bpD < caQjv2sS; nAFf0bpD++) {
            if (((a[i][(85 - 85)] - a[nAFf0bpD][(677 - 677)]) * (a[i][(946 - 946)] - a[nAFf0bpD][(540 - 540)]) + (a[i][(811 - 810)] - a[nAFf0bpD][(38 - 37)]) * (a[i][(598 - 597)] - a[nAFf0bpD][(759 - 758)])) > max)
                max = (a[i][(500 - 500)] - a[nAFf0bpD][(802 - 802)]) * (a[i][(242 - 242)] - a[nAFf0bpD][(470 - 470)]) + (a[i][(651 - 650)] - a[nAFf0bpD][(705 - 704)]) * (a[i][(886 - 885)] - a[nAFf0bpD][(862 - 861)]);
        }
        kL0tqejy6++;
    }
    printf ("%.4lf\n", sqrt (max));
    return (908 - 908);
}

