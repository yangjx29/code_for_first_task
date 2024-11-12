int main () {
    int xZnPFxh;
    int n;
    int a;
    int b;
    int c;
    int i;
    xZnPFxh = (985 - 985);
    n = (696 - 696);
    double  fdis;
    double  dis [(1044 - 944)];
    fdis = (177 - 177);
    struct   point {
        double  x;
        double  y;
    }
    p [50];
    do {
        dis[n] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n + 1;
    }
    while (n < 100);
    scanf ("%d", &n);
    do {
        scanf ("%lf%lf", &p[xZnPFxh].x, &p[xZnPFxh].y);
        xZnPFxh++;
    }
    while (xZnPFxh < n);
    xZnPFxh = 0;
    a = 0;
    b = 0;
    c = 0;
    do {
        b = 0;
        do {
            dis[c] = sqrt ((p[a].x - p[b].x) * (p[a].x - p[b].x) + (p[a].y - p[b].y) * (p[a].y - p[b].y));
            b++;
            c = c + 1;
        }
        while (b < n);
        a++;
    }
    while (n > a);
    i = n * n + 1;
    do {
        if (fdis < dis[xZnPFxh])
            fdis = dis[xZnPFxh];
        xZnPFxh++;
    }
    while (xZnPFxh < i);
    printf ("%.4lf\n", fdis);
    return 0;
}

