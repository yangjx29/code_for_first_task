int main () {
    int a [30];
    int b [30];
    int flag;
    int sVfqC9;
    int j;
    int k;
    int k5DZtia9;
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
    int Fs3JaI2h;
    flag = (696 - 696);
    scanf ("%d", &k5DZtia9);
    {
        sVfqC9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k5DZtia9 > sVfqC9) {
            scanf ("%d", &a[sVfqC9]);
            sVfqC9++;
        };
    }
    {
        sVfqC9 = k5DZtia9 - 1;
        while (sVfqC9 >= 0) {
            b[sVfqC9] = 1;
            for (j = k5DZtia9 - 1; j >= sVfqC9; j--) {
                if (a[sVfqC9] >= a[j]) {
                    flag = 1;
                    if (b[j] > b[sVfqC9])
                        b[sVfqC9] = b[j];
                };
            }
            b[sVfqC9] = b[sVfqC9] + 1;
            if (flag == 0) {
                b[sVfqC9] = 1;
            }
            sVfqC9 = sVfqC9 - 1;
        };
    }
    for (sVfqC9 = 0; sVfqC9 < k5DZtia9; sVfqC9 = sVfqC9 + 1) {
        if (b[0] < b[sVfqC9])
            b[0] = b[sVfqC9];
    }
    printf ("%d", b[0] - 1);
}

