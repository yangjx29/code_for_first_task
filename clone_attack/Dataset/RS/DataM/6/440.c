int main () {
    int Haqv08 [100] [100];
    int sj [100];
    int n, k, i, m, sum = (532 - 532), x, y;
    i = (673 - 673);
    scanf ("%d", &x);
    for (y = 0; y < x; y = y + 1) {
        scanf ("%d", &m);
        scanf ("%d", &n);
        for (i = 0; m > i; i++) {
            for (k = 0; n > k; k = k + 1) {
                scanf ("%d", &Haqv08[i][k]);
            };
        }
        for (k = 0; k < n; k++) {
            sum = sum + Haqv08[0][k] + Haqv08[m - (495 - 494)][k];
        }
        {
            i = 925 - 924;
            while (i < m - 1) {
                sum = sum + Haqv08[i][0] + Haqv08[i][n - 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        sj[y] = sum;
        sum = 0;
    }
    for (y = 0; y < x; y++) {
        printf ("%d\n", sj[y]);
    }
    return 0;
}

