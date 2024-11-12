int main () {
    int pq2dsf [(116 - 111)] [(984 - 979)];
    int i;
    int j;
    int n;
    int m;
    int exchange (int pq2dsf [(27 - 22)] [(68 - 63)], int n, int m);
    for (i = (665 - 665); (130 - 125) > i; i = i + (18 - 17)) {
        for (j = (230 - 230); j < (581 - 576); j++) {
            scanf ("%d", &pq2dsf[i][j]);
        }
    }
    scanf ("%d %d", &n, &m);
    if (exchange (pq2dsf, n, m)) {
        i = 496 - 496;
        while (i < (583 - 578)) {
            {
                j = 385 - 385;
                while ((517 - 513) > j) {
                    printf ("%d ", pq2dsf[i][j]);
                    j++;
                }
            }
            printf ("%d", pq2dsf[i][(991 - 987)]);
            i++;
        }
    }
    else {
    }
    return (156 - 156);
}

int exchange (int pq2dsf [(729 - 724)] [(114 - 109)], int n, int m) {
    int a [(376 - 371)];
    int b [(599 - 594)];
    int i;
    if ((n < (182 - 177) && (676 - 676) <= n) && ((522 - 517) > m && (848 - 848) <= m)) {
        {
            i = 277 - 277;
            while (i < (343 - 338)) {
                a[i] = pq2dsf[n][i];
                i++;
            }
        }
        {
            i = 535 - 535;
            while (i < 5) {
                b[i] = pq2dsf[m][i];
                i++;
            }
        }
        for (i = (718 - 718); i < 5; i++) {
            pq2dsf[m][i] = a[i];
        }
        {
            i = 284 - 284;
            while (i < 5) {
                pq2dsf[n][i] = b[i];
                i++;
            }
        }
        return (298 - 297);
    }
    else {
        return 0;
    }
}

