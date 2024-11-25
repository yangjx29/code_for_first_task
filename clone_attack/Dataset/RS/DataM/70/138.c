main () {
    int cG3s4je1VlY, j;
    int Xbv4JO;
    double  rTQqgI8L1VtK [100], GYo9ijX [100];
    double  IJDCuq, MurKFi;
    IJDCuq = 0;
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
    scanf ("%d", &Xbv4JO);
    for (cG3s4je1VlY = 0; cG3s4je1VlY < Xbv4JO; cG3s4je1VlY = cG3s4je1VlY + 1) {
        scanf ("%lf %lf", &rTQqgI8L1VtK[cG3s4je1VlY], &GYo9ijX[cG3s4je1VlY]);
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
        cG3s4je1VlY = 0;
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
        while (cG3s4je1VlY < Xbv4JO) {
            {
                j = cG3s4je1VlY;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < Xbv4JO) {
                    MurKFi = sqrt ((rTQqgI8L1VtK[cG3s4je1VlY] - rTQqgI8L1VtK[j]) * (rTQqgI8L1VtK[cG3s4je1VlY] - rTQqgI8L1VtK[j]) + (GYo9ijX[cG3s4je1VlY] - GYo9ijX[j]) * (GYo9ijX[cG3s4je1VlY] - GYo9ijX[j]));
                    j++;
                    if (MurKFi >= IJDCuq) {
                        IJDCuq = MurKFi;
                    };
                };
            }
            cG3s4je1VlY++;
        };
    }
    printf ("%.4lf\n", IJDCuq);
}

