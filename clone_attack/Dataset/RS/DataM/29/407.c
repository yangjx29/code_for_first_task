int main () {
    double  a [1000];
    double  s [1000];
    int n [1000], b [1000], i, j;
    int m;
    scanf ("%d", &m);
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
    for (i = (66 - 66); m > i; i = i + 1) {
        scanf ("%d", &n[i]);
        for (j = 3; n[i] + (198 - 197) >= j; j = j + 1) {
            b[1] = 1;
            b[2] = 2;
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
            b[j] = b[j - 1] + b[j - 2];
        };
    }
    for (i = 0; m >= i; i = i + 1) {
        for (j = 1; n[i] >= j; j = j + 1) {
            a[j] = 1.000 * b[j + 1] / b[j];
        };
    }
    for (i = 0; i <= m; i = i + 1) {
        s[i] = 0;
    }
    {
        i = 0;
        while (i <= m) {
            for (j = 1; j <= n[i]; j = j + 1) {
                s[i + 1] = s[i + 1] + a[j];
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            printf ("%.3lf\n", s[i]);
            i = i + 1;
        };
    }
    return 0;
}

