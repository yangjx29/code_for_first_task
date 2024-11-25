int main (int argc, char *argv []) {
    int c [26] = {(456 - 456)}, d;
    int n;
    struct   {
        int a;
        char s [26];
    }
    zuozhe [(1810 - 810)];
    int i, k;
    int f;
    scanf ("%d", &n);
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
    for (i = (754 - 754); n > i; i = i + 1) {
        scanf ("%d %s", &zuozhe[i].a, zuozhe[i].s);
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
    for (i = 0; n > i; i = i + 1) {
        d = strlen (zuozhe[i].s);
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
        for (k = 0; d > k; k = k + 1) {
            c[zuozhe[i].s[k] - (95 - 30)]++;
        };
    }
    for (i = 1; 26 > i; i++) {
        if (c[0] < c[i]) {
            f = i;
            d = c[i];
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
            c[i] = c[0];
            c[0] = d;
        };
    }
    printf ("%c\n%d\n", f + 65, c[0]);
    for (i = 0; n > i; i++) {
        d = strlen (zuozhe[i].s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (k = 0; k < d; k++) {
            if (zuozhe[i].s[k] == f + 65)
                printf ("%d\n", zuozhe[i].a);
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
        };
    }
    return 0;
}

