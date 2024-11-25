int main () {
    int a [(10327 - 327)];
    int b [10000];
    int c [10000];
    int i;
    int k;
    int n;
    int max;
    int min;
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
    max = 0;
    min = 10000;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d", &a[i], &b[i]);
    }
    {
        i = 0;
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
        while (n > i) {
            if (min > a[i]) {
                min = a[i];
            }
            if (max < b[i]) {
                max = b[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        i = 2 * min;
        while (2 * max >= i) {
            c[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            for (k = 2 * a[i]; k <= 2 * b[i]; k = k + 1) {
                c[k] = 0;
            }
            i++;
        };
    }
    for (i = 2 * min; i <= 2 * max; i = i + 1) {
        if (c[i] == 1) {
            printf ("no");
            return 0;
        };
    }
    printf ("%d %d", min, max);
    return 0;
}

