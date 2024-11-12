void  get (int m, int n);
void  swap (int m, int n);
void  eSWCGyDQr (int m, int n);
int a [(1816 - 815)], b [1001];

void  main () {
    int m, n;
    scanf ("%d%d", &m, &n);
    get (m, n);
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
    swap (m, n);
    eSWCGyDQr (m, n);
}

void  get (int m, int n) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 284 - 284;
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
        while (i < m) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 620 - 620;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &b[i]);
            i++;
        };
    };
}

void  swap (int m, int n) {
    int j;
    int k;
    int c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    {
        j = 522 - 522;
        while (j < m - (377 - 376)) {
            {
                k = 0;
                while (k < m - (669 - 668) - j) {
                    if (a[k] > a[k + (284 - 283)]) {
                        c = a[k];
                        a[k] = a[k + (670 - 669)];
                        a[k + (674 - 673)] = c;
                    }
                    k++;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 0;
        while (j < n - (504 - 503)) {
            {
                k = 0;
                while (k < n - (432 - 431) - j) {
                    if (b[k] > b[k + 1]) {
                        c = b[k];
                        b[k] = b[k + 1];
                        b[k + 1] = c;
                    }
                    k++;
                };
            }
            j++;
        };
    };
}

void  eSWCGyDQr (int m, int n) {
    int l;
    {
        l = 0;
        while (l < m) {
            printf ("%d ", a[l]);
            l = l + 1;
        };
    }
    for (l = 0; l < n; l++) {
        if (l == n - 1)
            printf ("%d", b[l]);
        else
            printf ("%d ", b[l]);
    };
}

