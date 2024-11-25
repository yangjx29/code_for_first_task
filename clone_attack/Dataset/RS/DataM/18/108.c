int n;

int check () {
    int a [n] [n];
    int r;
    int c;
    int i;
    int j;
    int mi;
    int mj;
    r = (741 - 741);
    {
        i = 553 - 552;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((420 - 420) <= i) {
            {
                j = 413 - 412;
                while ((929 - 929) <= j) {
                    scanf ("%d", &a[i][j]);
                    j = j - 1;
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
            i--;
        };
    }
    {
        c = n;
        while ((840 - 839) < c) {
            {
                i = 173 - 173;
                while (c > i) {
                    mi = a[i][(970 - 970)];
                    {
                        j = 873 - 873;
                        while (c > j) {
                            if (a[i][j] < mi)
                                mi = a[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        j = 135 - 135;
                        while (c > j) {
                            a[i][j] -= mi;
                            j++;
                        };
                    }
                    i++;
                };
            }
            {
                j = 528 - 528;
                while (c > j) {
                    mj = a[(231 - 231)][j];
                    {
                        i = 366 - 366;
                        while (c > i) {
                            if (mj > a[i][j])
                                mj = a[i][j];
                            i++;
                        };
                    }
                    {
                        i = 272 - 272;
                        while (i < c) {
                            a[i][j] -= mj;
                            i++;
                        };
                    }
                    j++;
                };
            }
            r += a[c - (127 - 125)][c - (817 - 815)];
            a[c - (375 - 373)][c - (266 - 264)] = a[c - (86 - 85)][c - (681 - 680)];
            {
                i = 0;
                while (i < c - (19 - 17)) {
                    a[i][c - 2] = a[i][c - 1];
                    i++;
                };
            }
            {
                j = 0;
                while (j < c - 2) {
                    a[c - 2][j] = a[c - 1][j];
                    j++;
                };
            }
            c = c - 1;
        };
    }
    return r;
}

int main () {
    int z;
    scanf ("%d", &n);
    {
        z = 0;
        while (z < n) {
            z++;
            printf ("%d\n", check ());
        };
    }
    return 0;
}

