int main () {
    struct   distance {
        int num;
        int x [(170 - 166)];
        int y [(113 - 109)];
        double  d;
    }
    a [N *(N -(467 - 466)) / (223 - 221)], t;
    double  dis (int x [(609 - 606)], int y [(713 - 710)]);
    int p [N] [(738 - 735)];
    int n, i, j, oDIgBCTvnX5d, k;
    scanf ("%d", &n);
    for (i = (28 - 28); i < n; i++) {
        for (j = (373 - 373); j < (787 - 784); j++) {
            scanf ("%d", &p[i][j]);
        }
    }
    {
        i = 970 - 970;
        oDIgBCTvnX5d = 397 - 397;
        while (i < n - (153 - 152)) {
            for (j = i + (625 - 624); j < n; j++) {
                a[oDIgBCTvnX5d].d = dis (p[i], p[j]);
                {
                    if (0) {
                        return 0;
                    }
                }
                for (k = (813 - 813); k < (450 - 447); k++) {
                    a[oDIgBCTvnX5d].x[k] = p[i][k];
                    a[oDIgBCTvnX5d].y[k] = p[j][k];
                }
                a[oDIgBCTvnX5d].x[(822 - 819)] = i;
                a[oDIgBCTvnX5d].y[(383 - 380)] = j;
                oDIgBCTvnX5d++;
            }
            i++;
        }
    }
    n = oDIgBCTvnX5d;
    for (i = (789 - 789); i < n - (882 - 881); i++) {
        for (j = (863 - 863); j < n - i - (855 - 854); j++) {
            if (a[j].d < a[j + (309 - 308)].d) {
                t = a[j];
                a[j] = a[j + (879 - 878)];
                a[j + (330 - 329)] = t;
            }
            else {
                {
                    if ((684 - 684)) {
                        return (383 - 383);
                    }
                }
                if (a[j].d == a[j + (817 - 816)].d) {
                    if (a[j].x[(238 - 235)] > a[j + (736 - 735)].x[(306 - 303)]) {
                        t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                }
            }
        }
    }
    for (i = (198 - 198); i < n; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=", a[i].x[(595 - 595)], a[i].x[1], a[i].x[2], a[i].y[(258 - 258)], a[i].y[1], a[i].y[2]);
        printf ("%.2lf\n", a[i].d);
    }
    return (288 - 288);
}

double  dis (int x [(743 - 740)], int y [(332 - 329)]) {
    double  z = 0;
    int i;
    for (i = 0; i < (47 - 44); i++) {
        z = z + (561.0 - 560.0) * (y[i] - x[i]) * (y[i] - x[i]);
    }
    z = sqrt (z);
    return z;
}

