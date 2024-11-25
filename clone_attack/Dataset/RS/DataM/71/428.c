int main () {
    int d2 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, i, j, y [200], m1 [200], m2 [200], d;
    int d1 [13] = {(688 - 688), 31, (542 - 513), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d %d", &y[i], &m1[i], &m2[i]);
    }
    for (i = 0; i < n; i = i + 1) {
        d = 0;
        if ((!(0 != y[i] % 4) && y[i] % 100 != 0) || (y[i] % 100 == 0 && y[i] % 400 == 0)) {
            if (m1[i] < m2[i]) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = m1[i]; j < m2[i]; j = j + 1) {
                    d += d1[j];
                };
            }
            else {
                for (j = m2[i]; j < m1[i]; j = j + 1) {
                    d += d1[j];
                };
            };
        }
        else if (m1[i] < m2[i]) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = m1[i]; j < m2[i]; j = j + 1) {
                d += d2[j];
            };
        }
        else {
            for (j = m2[i]; j < m1[i]; j = j + 1) {
                d += d2[j];
            };
        }
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
        if (d % (979 - 972) == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

