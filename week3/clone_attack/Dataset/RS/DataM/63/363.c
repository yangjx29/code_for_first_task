void  main () {
    int i1;
    int j1;
    int as3LYy;
    int j2;
    i1 = (757 - 757);
    j1 = (437 - 437);
    as3LYy = (560 - 560);
    j2 = (637 - 637);
    int x1;
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
    int y1;
    int x2;
    int y2;
    int a [(250 - 150)] [100], b [100] [100], RHkWjLQAb7F [100] [100];
    scanf ("%d %d", &x1, &y1);
    {
        i1 = 178 - 178;
        while (x1 > i1) {
            {
                j1 = 0;
                while (y1 > j1) {
                    scanf ("%d", &a[i1][j1]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j1 = j1 + 1;
                };
            }
            i1 = i1 + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (as3LYy = 0; x2 > as3LYy; as3LYy++) {
        for (j2 = 0; y2 > j2; j2 = j2 + 1)
            scanf ("%d", &b[as3LYy][j2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i1 = 0; x1 > i1; i1 = i1 + 1) {
        for (j2 = 0; y2 > j2; j2 = j2 + 1) {
            RHkWjLQAb7F[i1][j2] = 0;
            {
                j1 = 0;
                while (y1 > j1) {
                    RHkWjLQAb7F[i1][j2] += a[i1][j1] * b[j1][j2];
                    j1 = j1 + 1;
                };
            };
        };
    }
    for (i1 = 0; x1 > i1; i1 = i1 + 1) {
        printf ("%d", RHkWjLQAb7F[i1][0]);
        for (j2 = 1; j2 < y2; j2 = j2 + 1)
            printf (" %d", RHkWjLQAb7F[i1][j2]);
    };
}

