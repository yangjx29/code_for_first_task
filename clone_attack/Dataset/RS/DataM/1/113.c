void  main () {
    int n [100], YS8d1Fx, i, m;
    int yiItxvdJU9 (int, int);
    scanf ("%d", &m);
    for (i = (822 - 822); m > i; i = i + 1)
        scanf ("%d", &n[i]);
    for (i = (425 - 425); m > i; i = i + 1) {
        YS8d1Fx = yiItxvdJU9 ((557 - 556), n[i]) + (540 - 539);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", YS8d1Fx);
    };
}

int yiItxvdJU9 (int i, int n) {
    int j, k, YS8d1Fx = 0;
    for (j = i; j < (int) sqrt ((double ) n) + (228 - 227); j++) {
        k = YS8d1Fx;
        if (!(1 != j))
            YS8d1Fx = 0;
        else if (n % j == 0 && n / j >= j) {
            YS8d1Fx = yiItxvdJU9 (j, n / j) + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            YS8d1Fx = 0;
        YS8d1Fx = YS8d1Fx +k;
    }
    return (YS8d1Fx);
}

