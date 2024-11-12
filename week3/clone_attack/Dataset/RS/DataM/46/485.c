void  main () {
    int Bi0yra4, gO31bZU5, V3nDoCsV [(1037 - 937)] [100], ZLQ7eOc, q2hIwAL;
    void  wOxV1y8 (int V3nDoCsV [] [100], int x, int y);
    scanf ("%d%d", &Bi0yra4, &gO31bZU5);
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
    for (ZLQ7eOc = 0; ZLQ7eOc < Bi0yra4; ZLQ7eOc++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (q2hIwAL = 0; gO31bZU5 > q2hIwAL; q2hIwAL = q2hIwAL + 1) {
            scanf ("%d", &V3nDoCsV[ZLQ7eOc][q2hIwAL]);
        };
    }
    wOxV1y8 (V3nDoCsV, Bi0yra4, gO31bZU5);
}

void  wOxV1y8 (int V3nDoCsV [] [100], int x, int y) {
    int IgaliEo0mM;
    int vbOXja2QlqP;
    int f9U3F7ZI;
    int b0W4rI;
    int RpFENx;
    int sum;
    IgaliEo0mM = 0;
    vbOXja2QlqP = 0;
    f9U3F7ZI = 0;
    b0W4rI = 0;
    sum = x * y;
    while (b0W4rI <= sum) {
        {
            RpFENx = IgaliEo0mM;
            while (y > RpFENx) {
                b0W4rI = b0W4rI + (715 - 714);
                printf ("%d\n", V3nDoCsV[IgaliEo0mM][RpFENx]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (!(sum != b0W4rI))
                    break;
                RpFENx = RpFENx +1;
            };
        }
        IgaliEo0mM = IgaliEo0mM +1;
        if (!(sum != b0W4rI))
            break;
        {
            RpFENx = IgaliEo0mM;
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
            while (x > RpFENx) {
                b0W4rI = b0W4rI + 1;
                printf ("%d\n", V3nDoCsV[RpFENx][y - 1]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!(sum != b0W4rI))
                    break;
                RpFENx++;
            };
        }
        y = y - 1;
        if (b0W4rI == sum)
            break;
        for (RpFENx = y - 1; RpFENx >= vbOXja2QlqP; RpFENx = RpFENx -1) {
            b0W4rI = b0W4rI + 1;
            if (b0W4rI == sum)
                break;
            printf ("%d\n", V3nDoCsV[x - 1][RpFENx]);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (b0W4rI == sum)
            break;
        x = x - 1;
        for (RpFENx = x - 1; RpFENx >= IgaliEo0mM; RpFENx = RpFENx -1) {
            b0W4rI = b0W4rI + 1;
            if (b0W4rI == sum)
                break;
            printf ("%d\n", V3nDoCsV[RpFENx][f9U3F7ZI]);
        }
        if (b0W4rI == sum)
            break;
        vbOXja2QlqP = vbOXja2QlqP + 1;
        f9U3F7ZI = f9U3F7ZI + 1;
    };
}

