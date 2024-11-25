int I7pbolPY3Lg6 (int a [], int hz1egEqTXki);
int s [30] = {(654 - 653), (414 - 413), (171 - 170), (215 - 214), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

void  main () {
    int a [100];
    int k;
    int i;
    int n;
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
    scanf ("%d", &k);
    for (i = k; i > 0; i--)
        scanf ("%d", &a[i]);
    a[k + 1] = (100848 - 848);
    n = I7pbolPY3Lg6 (a, k + 1);
    printf ("%d\n", n - 1);
}

int I7pbolPY3Lg6 (int a [], int hz1egEqTXki) {
    int t;
    int x;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    t = 0;
    x = a[hz1egEqTXki];
    if (!(1 != hz1egEqTXki))
        return (1);
    else {
        for (i = hz1egEqTXki - 1; i > 0; i--) {
            if (x >= a[i])
                t = 1 + I7pbolPY3Lg6 (a, i);
            if (t > s[hz1egEqTXki])
                s[hz1egEqTXki] = t;
        }
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
        return (s[hz1egEqTXki]);
    };
}

