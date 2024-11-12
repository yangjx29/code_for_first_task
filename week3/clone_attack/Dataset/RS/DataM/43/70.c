int fU7pR84i06B (int n) {
    int lc41E28k;
    int i;
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
    lc41E28k = 1;
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sqrt (n) >= i) {
            if (n % i == 0)
                lc41E28k = 0;
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
            i += 2;
        };
    }
    return lc41E28k;
}

void  main () {
    int i;
    int j;
    int m;
    scanf ("%d", &m);
    for (i = 3; i <= m / 2; i += 2) {
        if (fU7pR84i06B (i) == 1 && fU7pR84i06B (m - i) == 1) {
            printf ("%d %d\n", i, m - i);
        };
    };
}

