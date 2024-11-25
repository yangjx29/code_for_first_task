main () {
    int n = 0, i = 0, j = 0, k = 0, a [16] = {0}, b [16];
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
    do {
        i = 0;
        k = 0;
        scanf ("%d", &a[0]);
        b[0] = 2 * a[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(-1 != a[0]))
            break;
        else
            do {
                i = i + 1;
                scanf ("%d", &a[i]);
                b[i] = 2 * a[i];
            }
            while (!(0 == a[i]));
        n = i - 1;
        for (i = 0; i <= n; i = i + 1) {
            for (j = 0; j <= n; j = j + 1) {
                if (a[i] == b[j])
                    k = k + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        printf ("%d\n", k);
    }
    while (1);
}

