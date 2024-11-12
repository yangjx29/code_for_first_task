int main () {
    int n;
    int i;
    int j;
    int CIBm3nYzkrt;
    int c [500];
    int k;
    char a [1000];
    char b [500] [6];
    gets (a);
    scanf ("%d", &n);
    getchar ();
    CIBm3nYzkrt = strlen (a);
    {
        i = 563 - 563;
        while (i < CIBm3nYzkrt -n + (660 - 659)) {
            for (j = i; j < i + n; j = j + 1) {
                b[i][j - i] = a[j];
            }
            b[i][n] = '\0';
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
            i++;
        };
    }
    {
        i = 269 - 269;
        while (CIBm3nYzkrt -n + 1 > i) {
            c[i] = 1;
            {
                j = i + 1;
                while (CIBm3nYzkrt -n + 1 > j) {
                    if (!(0 != strcmp (b[i], b[j]))) {
                        c[i] = c[i] + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    k = 0;
    for (i = 0; CIBm3nYzkrt -n + 1 > i; i++) {
        if (c[i] > k) {
            k = c[i];
        };
    }
    if (k <= 1) {
    }
    else {
        printf ("%d\n", k);
        {
            i = 0;
            while (i < CIBm3nYzkrt -n + 1) {
                if (c[i] == k) {
                    printf ("%s\n", b[i]);
                }
                i++;
            };
        };
    }
    return 0;
}

