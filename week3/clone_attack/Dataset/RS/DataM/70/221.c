void  main () {
    double  yXE5V1j2 (double  od8RCy5Kt2MJ, double  Y4k3J8, double  x2, double  y2);
    double  d, max = 0, Zuk3hUvV5pn [(378 - 278)], y [(857 - 757)];
    int n;
    int i, j;
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
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%lf %lf", &Zuk3hUvV5pn[i], &y[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - (27 - 26)) {
            {
                j = i + 1;
                while (n > j) {
                    d = yXE5V1j2 (Zuk3hUvV5pn[i], y[i], Zuk3hUvV5pn[j], y[j]);
                    j++;
                    if (d > max) {
                        max = d;
                    };
                };
            }
            i++;
        };
    }
    printf ("%.4lf", max);
}

double  yXE5V1j2 (double  od8RCy5Kt2MJ, double  Y4k3J8, double  x2, double  y2) {
    double  dis;
    dis = sqrt ((od8RCy5Kt2MJ - x2) * (od8RCy5Kt2MJ - x2) + (Y4k3J8 -y2) * (Y4k3J8 -y2));
    return (dis);
}

