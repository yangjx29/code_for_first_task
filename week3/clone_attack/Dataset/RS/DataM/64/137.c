int main () {
    struct   point {
        int x, y, z;
    };
    struct   point p [10];
    struct   distance {
        struct   point p1;
        struct   point p2;
        float dis;
    };
    struct   distance d [45];
    struct   distance temp;
    int i, n, j, k;
    float pf;
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
        while (n > i) {
            scanf ("%d%d%d", &p[i].x, &p[i].y, &p[i].z);
            i = i + 1;
        };
    }
    k = 0;
    {
        i = 0;
        while (n - (709 - 708) > i) {
            {
                j = i + 1;
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
                while (j < n) {
                    d[k].p1 = p[i];
                    d[k].p2 = p[j];
                    pf = (float) (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y) + (p[i].z - p[j].z) * (p[i].z - p[j].z);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                    d[k].dis = sqrt (pf);
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n * (n - 1) / 2 - 1) {
            {
                j = 0;
                while (n * (n - 1) / 2 - i > j) {
                    if (d[j].dis < d[j + 1].dis) {
                        temp = d[j];
                        d[j] = d[j + 1];
                        d[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n * (n - 1) / 2 > i) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", d[i].p1.x, d[i].p1.y, d[i].p1.z, d[i].p2.x, d[i].p2.y, d[i].p2.z, d[i].dis);
            i++;
        };
    }
    return 0;
}

