main () {
    int t;
    int i;
    int u;
    int k;
    int AEmDp13Sz;
    int y;
    int x;
    int min;
    int GeWpEtr2 [100002];
    char str [100002];
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%s", &str);
        u = strlen (str);
        for (k = 0; k < u; k++) {
            GeWpEtr2[k] = 0;
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
            for (AEmDp13Sz = 0; AEmDp13Sz < u; AEmDp13Sz++) {
                if (str[AEmDp13Sz] == str[k])
                    GeWpEtr2[k]++;
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
        for (y = 0, min = GeWpEtr2[0], x = 0; x < u; x++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (GeWpEtr2[x] < min) {
                min = GeWpEtr2[x];
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
                y = x;
            };
        }
        if (min == 1)
            printf ("%c\n", str[y]);
        if (min > 1)
            ;
    };
}

