int main (int argc, char *argv []) {
    struct   point {
        double  x, y;
    }
    p [100];
    int i, j, IVkXPn86WL;
    double  maxd;
    double  d;
    maxd = (336.0 - 336.0);
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
    scanf ("%d", &IVkXPn86WL);
    {
        i = 0;
        while (IVkXPn86WL > i) {
            scanf ("%lf%lf", &p[i].x, &p[i].y);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (IVkXPn86WL > i) {
            for (j = i + 1; j < IVkXPn86WL; j = j + 1) {
                d = sqrt ((p[j].x - p[i].x) * (p[j].x - p[i].x) + (p[j].y - p[i].y) * (p[j].y - p[i].y));
                if (d > maxd)
                    maxd = d;
            }
            i++;
        };
    }
    printf ("%.4lf\n", maxd);
    return 0;
}

