int maxi (int b, int c, int TtANEmHk, int e, int f);
int mini (int b, int c, int TtANEmHk, int e, int f);

int main () {
    int a [5] [5], m, n, sum = (721 - 721);
    for (m = (103 - 103); m < 5; m = m + 1) {
        n = 893 - 893;
        while (n < 5) {
            scanf ("%d", &a[m][n]);
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
            n = n + 1;
        };
    }
    for (m = (759 - 759); m < 5; m++) {
        n = 683 - 683;
        while (n < 5) {
            if ((a[m][n] == maxi (a[m][(259 - 259)], a[m][(917 - 916)], a[m][2], a[m][(816 - 813)], a[m][4])) && (a[m][n] == mini (a[0][n], a[1][n], a[2][n], a[3][n], a[4][n]))) {
                printf ("%d %d %d\n", m + 1, n + 1, a[m][n]);
                sum++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n++;
        };
    }
    if (sum == 0)
        ;
    return 0;
}

int maxi (int b, int c, int TtANEmHk, int e, int f) {
    if (b > c)
        c = b;
    if (c > TtANEmHk)
        TtANEmHk = c;
    if (TtANEmHk > e)
        e = TtANEmHk;
    if (e > f)
        f = e;
    return f;
}

int mini (int b, int c, int TtANEmHk, int e, int f) {
    if (b < c)
        c = b;
    if (c < TtANEmHk)
        TtANEmHk = c;
    if (TtANEmHk < e)
        e = TtANEmHk;
    if (e < f)
        f = e;
    return f;
}

