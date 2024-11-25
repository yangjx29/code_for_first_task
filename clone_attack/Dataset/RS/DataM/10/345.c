int max (int x, int y) {
    int z;
    if (y <= x)
        z = x;
    else
        z = y;
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
    return (z);
}

int MAX_multi (int str [25], int n) {
    int t = 0, i;
    {
        i = 0;
        while (n > i) {
            t = max (t, str[i]);
            i = i + 1;
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
    return (t);
}

void  count (int str [25], int num [25], int n) {
    int i, j;
    {
        i = n - 1;
        while (0 <= i) {
            {
                j = n - 1;
                while (j > i) {
                    if (str[i] >= str[j])
                        num[i] = max (num[i], num[j] + 1);
                    j = j - 1;
                };
            }
            i = i - 1;
        };
    }
    printf ("%d\n", MAX_multi (num, n));
}

void  main () {
    int n;
    int i;
    int str [25];
    int num [25] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &str[i]);
            i++;
        };
    }
    count (str, num, n);
}

