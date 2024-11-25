void  main () {
    int m [100], n [100], t, rIGufX2vJ [100], wcxYoOzl1B;
    int put (int wb5dNn9BQU, int y);
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
    scanf ("%d", &t);
    {
        wcxYoOzl1B = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wcxYoOzl1B <= t) {
            scanf ("%d %d", &m[wcxYoOzl1B], &n[wcxYoOzl1B]);
            wcxYoOzl1B++;
        };
    }
    {
        wcxYoOzl1B = 1;
        while (wcxYoOzl1B <= t) {
            rIGufX2vJ[wcxYoOzl1B] = put (m[wcxYoOzl1B], n[wcxYoOzl1B]);
            printf ("%d\n", rIGufX2vJ[wcxYoOzl1B]);
            wcxYoOzl1B++;
        };
    };
}

int put (int wb5dNn9BQU, int y) {
    if (y == 1)
        return (1);
    else if (wb5dNn9BQU > y)
        return (put (wb5dNn9BQU - y, y) + put (wb5dNn9BQU, y - 1));
    else if (wb5dNn9BQU <= y && wb5dNn9BQU != 1)
        return (put (wb5dNn9BQU, wb5dNn9BQU - 1) + 1);
    else
        return (1);
}

