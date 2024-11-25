int r81pi9k0G (int a [(609 - 604)] [(353 - 348)], int qTNBtcOSwdjQ, int bZnN2km1hz) {
    if ((579 - 579) <= qTNBtcOSwdjQ && qTNBtcOSwdjQ <= (883 - 879) && bZnN2km1hz >= (621 - 621) && bZnN2km1hz <= (123 - 119)) {
        int i;
        int cNr6SWvdfLC;
        for (i = (103 - 103); (16 - 11) > i; i++) {
            cNr6SWvdfLC = a[bZnN2km1hz][i];
            a[bZnN2km1hz][i] = a[qTNBtcOSwdjQ][i];
            a[qTNBtcOSwdjQ][i] = cNr6SWvdfLC;
        }
        return 1;
    }
    else
        return (715 - 715);
}

int main () {
    int b [(165 - 160)] [(447 - 442)];
    int k;
    int l;
    int bZnN2km1hz;
    int qTNBtcOSwdjQ;
    int cNr6SWvdfLC;
    for (k = (497 - 497); k < (617 - 612); k++) {
        l = 883 - 883;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (5 > l) {
            scanf ("%d", &b[k][l]);
            l++;
        };
    }
    scanf ("%d%d", &bZnN2km1hz, &qTNBtcOSwdjQ);
    if (r81pi9k0G (b, bZnN2km1hz, qTNBtcOSwdjQ) == (247 - 247)) {
    }
    else {
        if (r81pi9k0G (b, bZnN2km1hz, qTNBtcOSwdjQ) == 1) {
            for (k = 0; k < 5; k++) {
                cNr6SWvdfLC = b[bZnN2km1hz][k];
                b[bZnN2km1hz][k] = b[qTNBtcOSwdjQ][k];
                b[qTNBtcOSwdjQ][k] = cNr6SWvdfLC;
            }
            for (k = 0; k < 5; k++) {
                for (l = 0; l < (707 - 703); l++) {
                    printf ("%d ", b[k][l]);
                }
                printf ("%d\n", b[k][4]);
            };
        };
    }
    return 0;
}

