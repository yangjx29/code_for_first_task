int main (int pFZDBXOalkV, char *Cgc5YTEXns []) {
    struct   BA41FH8 {
        double  IZnOq0GKw8, ZcUKe8t4Bi;
    }
    *uA8D7K51;
    int zQhHqvK1y;
    double  x0, y0, yb0zu8WG6Li = 0, w;
    scanf ("%d", &zQhHqvK1y);
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
    uA8D7K51 = (struct   BA41FH8 *) malloc (sizeof (BA41FH8) * zQhHqvK1y);
    {
        int yAmqNsXMS = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zQhHqvK1y > yAmqNsXMS) {
            scanf ("%lf%lf", &x0, &y0);
            (uA8D7K51 + yAmqNsXMS)->IZnOq0GKw8 = x0;
            (uA8D7K51 + yAmqNsXMS)->ZcUKe8t4Bi = y0;
            yAmqNsXMS = yAmqNsXMS + 1;
        };
    }
    for (int uDubEVsj = 0;
    uDubEVsj < zQhHqvK1y; uDubEVsj = uDubEVsj + 1) {
        for (int DrARc1bxVo = uDubEVsj + 1;
        zQhHqvK1y > DrARc1bxVo; DrARc1bxVo = DrARc1bxVo +1) {
            w = ((uA8D7K51 + uDubEVsj)->IZnOq0GKw8 - (uA8D7K51 + DrARc1bxVo)->IZnOq0GKw8) * ((uA8D7K51 + uDubEVsj)->IZnOq0GKw8 - (uA8D7K51 + DrARc1bxVo)->IZnOq0GKw8) + ((uA8D7K51 + uDubEVsj)->ZcUKe8t4Bi - (uA8D7K51 + DrARc1bxVo)->ZcUKe8t4Bi) * ((uA8D7K51 + uDubEVsj)->ZcUKe8t4Bi - (uA8D7K51 + DrARc1bxVo)->ZcUKe8t4Bi);
            if (yb0zu8WG6Li < sqrt (w)) {
                yb0zu8WG6Li = sqrt (w);
            };
        };
    }
    printf ("%.4f", yb0zu8WG6Li);
    return 0;
}

