int main () {
    int m;
    int n;
    int i;
    int k;
    int p;
    int q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int a [(990 - 690)] [300];
    scanf ("%d %d\n", &n, &m);
    for (; m != (91 - 91) && n != 0;) {
        k = 0;
        p = m;
        {
            i = 0;
            while (i <= n - (174 - 173)) {
                a[0][i] = i + (542 - 541);
                i++;
            };
        }
        q = n;
        while (q > 1) {
            k = k + 1;
            p = p % q;
            q = q - 1;
            if (p > 0 && p < n - k + 1) {
                {
                    i = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (i <= n - k - p) {
                        a[k][i] = a[k - 1][i + p];
                        i++;
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
                for (i = n - k - p + 1; i <= n - k; i++) {
                    a[k][i] = a[k - 1][i - n + k + p - 1];
                };
            }
            else {
                if (p == 0) {
                    i = 0;
                    while (i <= n - k) {
                        a[k][i] = a[k - 1][i];
                        i++;
                    };
                };
            }
            p = m;
        }
        printf ("%d\n", a[n - 1][0]);
        scanf ("%d %d\n", &n, &m);
    }
    return 0;
}

