main () {
    struct   {
        double  x, y;
    }
    pts [100];
    double  maxd;
    double  d;
    maxd = 0;
    int n, i, j;
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
    getchar ();
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%lf%lf", &pts[i].x, &pts[i].y);
            for (j = 0; i > j; j = j + 1) {
                d = sqrt ((pts[i].x - pts[j].x) * (pts[i].x - pts[j].x) + (pts[i].y - pts[j].y) * (pts[i].y - pts[j].y));
                if (d > maxd)
                    maxd = d;
            }
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
            i = i + 1;
        };
    }
    printf ("%.4lf", maxd);
    getchar ();
    getchar ();
}

