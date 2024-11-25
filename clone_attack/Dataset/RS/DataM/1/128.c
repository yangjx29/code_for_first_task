int RpbUCD (int a, int xbuU0mg7) {
    int X32IYV = 1, i;
    for (i = xbuU0mg7; (int) sqrt (a) >= i; i = i + 1) {
        if (a % i == 0)
            X32IYV += RpbUCD (a / i, i);
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
    return X32IYV;
}

main () {
    int n;
    int i;
    int a;
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
    int X32IYV;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            i++;
            scanf ("%d", &a);
            X32IYV = RpbUCD (a, 2);
            printf ("%d\n", X32IYV);
        };
    };
}

