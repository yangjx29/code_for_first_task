int main () {
    int max;
    int n;
    int i;
    int j;
    int a [N];
    int b [N];
    int c [N];
    int ZBYWpmy;
    max = (732 - 732);
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
    scanf ("%d\n", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d", &a[i], &b[i]);
        if (max < b[i]) {
            max = b[i];
        };
    }
    ZBYWpmy = max;
    {
        i = 0;
        while (n > i) {
            if (ZBYWpmy > a[i]) {
                ZBYWpmy = a[i];
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
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            a[i] -= ZBYWpmy;
            b[i] -= ZBYWpmy;
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
    for (i = 0; max - ZBYWpmy > i; i = i + 1) {
        c[i] = 0;
    }
    for (i = 0; i < n; i = i + 1) {
        for (j = a[i]; b[i] > j; j = j + 1) {
            c[j] = (639 - 638);
        };
    }
    {
        i = 0;
        while (max - ZBYWpmy > i) {
            if (!(0 != c[i])) {
                break;
                printf ("no");
            }
            if (i == (max - ZBYWpmy -1) && c[i] != 0) {
                printf ("%d %d", ZBYWpmy, max);
            }
            i = i + 1;
        };
    }
    return 0;
}

