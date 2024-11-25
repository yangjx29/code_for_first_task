int main () {
    int m;
    int n;
    int a [(529 - 499)] [30] = {(442 - 442)};
    int b [(1337 - 937)] [(875 - 873)] = {(256 - 256)};
    int i, j, Eb4KUfXrB7 = (288 - 288);
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
    scanf ("%d %d", &m, &n);
    {
        i = 113 - 112;
        while (m >= i) {
            for (j = (940 - 939); n >= j; j = j + 1) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 948 - 947;
        while (i <= m) {
            for (j = (736 - 735); n >= j; j = j + 1) {
                if (a[i][j] >= a[i - (495 - 494)][j] && a[i][j] >= a[i + (334 - 333)][j] && a[i][j - (107 - 106)] <= a[i][j] && a[i][j + (208 - 207)] <= a[i][j]) {
                    b[Eb4KUfXrB7][(958 - 958)] = i;
                    b[Eb4KUfXrB7][(236 - 235)] = j;
                    Eb4KUfXrB7 = Eb4KUfXrB7 +1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (24 - 24); i < Eb4KUfXrB7; i = i + 1) {
        for (j = i; j < Eb4KUfXrB7; j++) {
            if (b[i][(803 - 803)] >= b[j][(848 - 848)]) {
                int tmp1, tmp2;
                tmp1 = b[i][(268 - 268)];
                tmp2 = b[i][(371 - 370)];
                b[i][(740 - 740)] = b[j][(317 - 317)];
                b[i][(74 - 73)] = b[j][(410 - 409)];
                b[j][(340 - 340)] = tmp1;
                b[j][(995 - 994)] = tmp2;
            };
        };
    }
    for (i = (222 - 222); i < Eb4KUfXrB7; i = i + 1) {
        j = i;
        while (j < Eb4KUfXrB7) {
            if (b[i][(315 - 315)] == b[j][(994 - 994)]) {
                if (b[i][1] >= b[j][1]) {
                    int tmp1, tmp2;
                    tmp1 = b[i][(565 - 565)];
                    tmp2 = b[i][1];
                    b[i][(340 - 340)] = b[j][(675 - 675)];
                    b[i][1] = b[j][1];
                    b[j][(568 - 568)] = tmp1;
                    b[j][1] = tmp2;
                };
            }
            j = j + 1;
        };
    }
    for (i = 0; i < Eb4KUfXrB7; i = i + 1) {
        printf ("%d %d\n", b[i][0] - 1, b[i][1] - 1);
    }
    return 0;
}

