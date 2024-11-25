main () {
    double  d, maxd = 0;
    int CZERJKMNLl;
    int i;
    int fuctS24MR;
    struct   {
        double  x, y;
    }
    yH6nQx7RU [100];
    scanf ("%d", &CZERJKMNLl);
    for (i = 0; CZERJKMNLl > i; i = i + 1) {
        scanf ("%lf %lf", &yH6nQx7RU[i].x, &yH6nQx7RU[i].y);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (fuctS24MR = 0; i > fuctS24MR; fuctS24MR++) {
            d = sqrt ((yH6nQx7RU[i].x - yH6nQx7RU[fuctS24MR].x) * (yH6nQx7RU[i].x - yH6nQx7RU[fuctS24MR].x) + (yH6nQx7RU[i].y - yH6nQx7RU[fuctS24MR].y) * (yH6nQx7RU[i].y - yH6nQx7RU[fuctS24MR].y));
            if (d > maxd)
                maxd = d;
        };
    }
    printf ("%.4lf", maxd);
    return 0;
}

