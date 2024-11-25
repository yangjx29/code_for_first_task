int main () {
    struct   point {
        int x;
        int y;
        int z;
    }
    p [(30 - 20)];
    struct   distant {
        struct   point p1, p2;
        double  r;
    }
    d [(660 - 615)], t;
    int X5qRs4a, j, k = (674 - 674);
    int n;
    scanf ("%d", &n);
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
    for (X5qRs4a = (811 - 811); n > X5qRs4a; X5qRs4a++) {
        scanf ("%d%d%d", &p[X5qRs4a].x, &p[X5qRs4a].y, &p[X5qRs4a].z);
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
    for (X5qRs4a = (893 - 893); n > X5qRs4a; X5qRs4a++) {
        for (j = X5qRs4a +(441 - 440); j < n; j = j + 1, k++) {
            d[k].p1 = p[X5qRs4a];
            d[k].p2 = p[j];
            d[k].r = sqrt ((702.0 - 701.0) * ((d[k].p1.x - d[k].p2.x) * (d[k].p1.x - d[k].p2.x) + (d[k].p1.y - d[k].p2.y) * (d[k].p1.y - d[k].p2.y) + (d[k].p1.z - d[k].p2.z) * (d[k].p1.z - d[k].p2.z)));
            if (n * (n - (548 - 547)) / (687 - 685) < k)
                break;
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
        if (n * (n - (679 - 678)) / (152 - 150) < k)
            break;
    }
    {
        X5qRs4a = 553 - 552;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((744 - 744) < X5qRs4a) {
            for (j = 0; j < X5qRs4a; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (d[j].r < d[j + 1].r) {
                    t = d[j];
                    d[j] = d[j + 1];
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
                    d[j + 1] = t;
                };
            }
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
            X5qRs4a--;
        };
    }
    for (X5qRs4a = 0; X5qRs4a < k; X5qRs4a++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", d[X5qRs4a].p1.x, d[X5qRs4a].p1.y, d[X5qRs4a].p1.z, d[X5qRs4a].p2.x, d[X5qRs4a].p2.y, d[X5qRs4a].p2.z, d[X5qRs4a].r);
    }
    return 0;
}

