int main () {
    int CiFm4ukfP69g, j, tTULWI, x1, IUbqXPB4N, y1, y2;
    int a [110] [110];
    int J7yPu0VYUR8a [110] [110];
    int c [110] [110];
    memset (a, 0, sizeof (a));
    memset (J7yPu0VYUR8a, 0, sizeof (J7yPu0VYUR8a));
    memset (c, 0, sizeof (c));
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
    scanf ("%d %d", &x1, &y1);
    for (CiFm4ukfP69g = 1; CiFm4ukfP69g <= x1; CiFm4ukfP69g = CiFm4ukfP69g +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= y1; j = j + 1) {
            scanf ("%d", &a[CiFm4ukfP69g][j]);
        };
    }
    scanf ("%d %d", &IUbqXPB4N, &y2);
    for (CiFm4ukfP69g = 1; IUbqXPB4N >= CiFm4ukfP69g; CiFm4ukfP69g = CiFm4ukfP69g +1) {
        for (j = 1; j <= y2; j = j + 1) {
            scanf ("%d", &J7yPu0VYUR8a[CiFm4ukfP69g][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (CiFm4ukfP69g = 1; CiFm4ukfP69g <= x1; CiFm4ukfP69g = CiFm4ukfP69g +1) {
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
        for (j = 1; j <= y2; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (tTULWI = 1; tTULWI <= y1; tTULWI = tTULWI + 1) {
                c[CiFm4ukfP69g][j] = c[CiFm4ukfP69g][j] + (a[CiFm4ukfP69g][tTULWI] * J7yPu0VYUR8a[tTULWI][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    for (CiFm4ukfP69g = 1; CiFm4ukfP69g <= x1; CiFm4ukfP69g++) {
        for (j = 1; j < y2; j++) {
            printf ("%d ", c[CiFm4ukfP69g][j]);
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
        printf ("%d\n", c[CiFm4ukfP69g][y2]);
    }
    return 0;
}

