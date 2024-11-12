struct   point {
    double  x;
    double  y;
    double  z;
};
struct   points {
    double  x1;
    double  y1;
    double  z1;
    double  x2;
    double  y2;
    double  Q4ZzB5uAEXJc;
    double  PGgRlJ;
};
double  Lj4cp5HsBV3 (struct   point a, struct   point b) {
    return sqrt ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
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
}

void  main () {
    struct   points ps [(1001 - 900)];
    struct   points pst;
    struct   point p [11];
    int m, n, i, j, k;
    k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%lf%lf%lf", &p[i].x, &p[i].y, &p[i].z);
    {
        i = 0;
        while (i < n) {
            {
                j = 886 - 885;
                while (n > j) {
                    if (!(j != i))
                        continue;
                    ps[k].x1 = p[i].x;
                    ps[k].y1 = p[i].y;
                    ps[k].z1 = p[i].z;
                    ps[k].x2 = p[j].x;
                    ps[k].y2 = p[j].y;
                    ps[k].Q4ZzB5uAEXJc = p[j].z;
                    ps[k].PGgRlJ = Lj4cp5HsBV3 (p[i], p[j]);
                    j = j + 1;
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    m = n * (n - 1) / 2;
    {
        i = 1;
        while (i < m) {
            {
                j = 0;
                while (m - i > j) {
                    if (ps[j + 1].PGgRlJ > ps[j].PGgRlJ) {
                        pst = ps[j];
                        ps[j] = ps[j + 1];
                        ps[j + 1] = pst;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < m; i = i + 1)
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", ps[i].x1, ps[i].y1, ps[i].z1, ps[i].x2, ps[i].y2, ps[i].Q4ZzB5uAEXJc, ps[i].PGgRlJ);
}

