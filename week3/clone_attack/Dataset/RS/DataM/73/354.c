main () {
    int GfDYngRl, IV8DsU;
    int Op765GNU [5] [5];
    int C8dRFZ [5];
    int MyJf2Fm0gA [5];
    int xzamOu3KZgW;
    int bvYLH7UV = 0;
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
    for (GfDYngRl = 0; 5 > GfDYngRl; GfDYngRl = GfDYngRl +1) {
        IV8DsU = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > IV8DsU) {
            scanf ("%d", &Op765GNU[GfDYngRl][IV8DsU]);
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
            IV8DsU = IV8DsU +1;
        };
    }
    for (GfDYngRl = 0; GfDYngRl < 5; GfDYngRl = GfDYngRl +1)
        C8dRFZ[GfDYngRl] = Op765GNU[GfDYngRl][0];
    for (IV8DsU = 0; 5 > IV8DsU; IV8DsU = IV8DsU +1)
        MyJf2Fm0gA[IV8DsU] = Op765GNU[0][IV8DsU];
    for (GfDYngRl = 0; GfDYngRl < 5; GfDYngRl++) {
        for (IV8DsU = 0; 5 > IV8DsU; IV8DsU = IV8DsU +1) {
            if (Op765GNU[GfDYngRl][IV8DsU] > C8dRFZ[GfDYngRl])
                C8dRFZ[GfDYngRl] = Op765GNU[GfDYngRl][IV8DsU];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (Op765GNU[GfDYngRl][IV8DsU] < MyJf2Fm0gA[IV8DsU])
                MyJf2Fm0gA[IV8DsU] = Op765GNU[GfDYngRl][IV8DsU];
        };
    }
    {
        GfDYngRl = 0;
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
        while (GfDYngRl < 5) {
            for (IV8DsU = 0; 5 > IV8DsU; IV8DsU++) {
                if (C8dRFZ[GfDYngRl] == MyJf2Fm0gA[IV8DsU]) {
                    bvYLH7UV = bvYLH7UV + 1;
                    xzamOu3KZgW = MyJf2Fm0gA[IV8DsU];
                    printf ("%d %d %d", GfDYngRl +1, IV8DsU +1, xzamOu3KZgW);
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            GfDYngRl = GfDYngRl +1;
        };
    }
    if (bvYLH7UV == 0)
        ;
}

