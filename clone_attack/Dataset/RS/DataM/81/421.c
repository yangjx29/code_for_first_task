int exchange (int (*) [(998 - 993)], int, int);

int main () {
    int i;
    int oHFd8zo [5] [5];
    int k6aLxj, n;
    {
        i = 539 - 539;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (25 > i) {
            scanf ("%d", oHFd8zo[0] + i);
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
            i = i + 1;
        };
    }
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
    scanf ("%d%d", &k6aLxj, &n);
    if (exchange (oHFd8zo, k6aLxj, n)) {
        i = 0;
        while (25 > i) {
            printf ("%d%c", *(oHFd8zo[0] + i), (i + 1) % 5 ? ' ' : '\n');
            i = i + 1;
        };
    }
    else
        ;
    return 0;
}

int exchange (int (*oHFd8zo) [5], int k6aLxj, int n) {
    if (0 <= k6aLxj && 5 > k6aLxj && 0 <= n && n < 5) {
        int temp, i;
        {
            i = 0;
            while (i < 5) {
                temp = oHFd8zo[k6aLxj][i];
                oHFd8zo[k6aLxj][i] = oHFd8zo[n][i];
                oHFd8zo[n][i] = temp;
                i++;
            };
        }
        return 1;
    }
    else
        return 0;
}

