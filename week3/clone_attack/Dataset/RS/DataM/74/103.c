int main () {
    int m;
    int n;
    int gaSfW0rpNKm;
    int i;
    int pV9osWOmr5;
    int k;
    int l;
    int sbxnLwRgTt;
    int y;
    int t;
    int r;
    int a [100] = {0};
    i = 0;
    scanf ("%d%d", &m, &n);
    for (k = m; n >= k;) {
        if (!(2 != k)) {
            i++;
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
            k++;
        }
        else if (k % 2 == 0) {
            k++;
        }
        else {
            l = log10 (k);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                pV9osWOmr5 = 2;
                while (sqrt (k) >= pV9osWOmr5) {
                    sbxnLwRgTt = k % pV9osWOmr5;
                    if (!(0 != sbxnLwRgTt))
                        break;
                    pV9osWOmr5++;
                };
            }
            if (pV9osWOmr5 <= sqrt (k)) {
                k = k + 2;
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
                continue;
            }
            else {
                t = k;
                {
                    pV9osWOmr5 = 0;
                    while (pV9osWOmr5 <= l) {
                        r = t / (pow (10, l - pV9osWOmr5));
                        a[pV9osWOmr5] = r;
                        t = t - r * pow (10, l - pV9osWOmr5);
                        pV9osWOmr5++;
                    };
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
                {
                    pV9osWOmr5 = 0;
                    while (pV9osWOmr5 <= l / 2) {
                        if (a[pV9osWOmr5] != a[l - pV9osWOmr5])
                            break;
                        pV9osWOmr5++;
                    };
                }
                if (pV9osWOmr5 <= l / 2)
                    k = k + 2;
                else {
                    if (i == 0)
                        printf ("%d", k);
                    else
                        printf (",%d", k);
                    k = k + 2;
                    i++;
                };
            };
        };
    }
    if (i == 0)
        printf ("no");
    printf ("\n");
    return 0;
}

