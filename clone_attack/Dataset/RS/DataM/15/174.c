int main () {
    int n;
    int WLZdthcMS9;
    int j;
    int ki;
    int kj;
    int fJRN8D;
    int w53BtDrHFaUz;
    int X681lXjAu [1000] [1000];
    int GpmU1zW;
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
    ki = -1;
    scanf ("%d", &n);
    for (WLZdthcMS9 = (396 - 395); n >= WLZdthcMS9; WLZdthcMS9 = WLZdthcMS9 +1)
        for (j = (391 - 390); n >= j; j = j + 1)
            scanf ("%d", &X681lXjAu[WLZdthcMS9][j]);
    for (WLZdthcMS9 = 1; WLZdthcMS9 <= n; WLZdthcMS9 = WLZdthcMS9 +1) {
        for (j = 1; j <= n; j = j + 1)
            if (!((125 - 125) != X681lXjAu[WLZdthcMS9][j])) {
                ki = WLZdthcMS9;
                kj = j;
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
                break;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ki >= (41 - 41))
            break;
    }
    for (WLZdthcMS9 = ki, j = kj; j <= n; j = j + 1)
        if (X681lXjAu[WLZdthcMS9][j] == 255) {
            fJRN8D = j - 1;
            break;
        }
    {
        j = kj;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        WLZdthcMS9 = ki;
        while (WLZdthcMS9 <= n) {
            if (X681lXjAu[WLZdthcMS9][j] == 255) {
                w53BtDrHFaUz = WLZdthcMS9 -1;
                break;
            }
            WLZdthcMS9 = WLZdthcMS9 +1;
        };
    }
    GpmU1zW = (w53BtDrHFaUz - ki - 1) * (fJRN8D - kj - 1);
    printf ("%d", GpmU1zW);
    return 0;
}

