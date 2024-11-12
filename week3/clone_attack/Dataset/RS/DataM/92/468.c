int main () {
    int n, i, j, k, a [1001], b [1001], sum = 0, win, draw, t, as, ae, bs, be;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            draw = 0;
            win = 0;
            sum = 0;
            scanf ("%d", &n);
            if (!(0 != n))
                break;
            k = k + 1;
            bs = 0;
            as = 0;
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &a[i]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i++;
                };
            }
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &b[i]);
                    i++;
                };
            }
            for (i = 0; i < n; i++) {
                j = i + 1;
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
                while (j < n) {
                    if (a[i] < a[j]) {
                        t = a[j];
                        a[j] = a[i];
                        a[i] = t;
                    }
                    if (b[i] < b[j]) {
                        t = b[j];
                        b[j] = b[i];
                        b[i] = t;
                    }
                    j = j + 1;
                };
            }
            ae = n - 1;
            be = n - 1;
            while (as <= ae) {
                if (a[as] > b[bs]) {
                    win++;
                    bs++;
                    as++;
                }
                else {
                    if (a[ae] > b[be]) {
                        win++;
                        be = be - 1;
                        ae--;
                    }
                    else if (a[ae] == b[bs]) {
                        bs++;
                        ae--;
                        draw++;
                    }
                    else {
                        bs++;
                        ae--;
                    };
                };
            }
            sum = win * 200 - (n - win - draw) * 200;
            printf ("%d\n", sum);
        };
    }
    return 0;
}

