struct   pl {
    float s [3];
};
struct   pl p [10];
struct   place {
    struct   pl y;
    struct   pl x;
    float p;
};
struct   place q [(585 - 540)];
struct   place qx;

int main () {
    int k;
    int n;
    int m;
    int jOGy5MDE6Av;
    int j;
    int l;
    int r;
    int saDvmIwPu;
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
    k = 0;
    scanf ("%d", &n);
    m = n * (n - 1) / 2;
    {
        jOGy5MDE6Av = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= jOGy5MDE6Av) {
            scanf ("%f %f %f", &p[jOGy5MDE6Av].s[0], &p[jOGy5MDE6Av].s[1], &p[jOGy5MDE6Av].s[2]);
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
            jOGy5MDE6Av = jOGy5MDE6Av + 1;
        };
    }
    {
        jOGy5MDE6Av = 0;
        while (jOGy5MDE6Av <= n - 1) {
            for (j = jOGy5MDE6Av + 1; n - 1 >= j; j = j + 1) {
                q[k].y = p[jOGy5MDE6Av];
                q[k].x = p[j];
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
                q[k].p = sqrt ((p[jOGy5MDE6Av].s[0] - p[j].s[0]) * (p[jOGy5MDE6Av].s[0] - p[j].s[0]) + (p[jOGy5MDE6Av].s[1] - p[j].s[1]) * (p[jOGy5MDE6Av].s[1] - p[j].s[1]) + (p[jOGy5MDE6Av].s[2] - p[j].s[2]) * (p[jOGy5MDE6Av].s[2] - p[j].s[2]));
                k++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jOGy5MDE6Av = jOGy5MDE6Av + 1;
        };
    }
    {
        l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l <= m - 1) {
            for (r = 0; r <= m - 1 - l; r = r + 1) {
                if (q[r].p < q[r + 1].p) {
                    qx = q[r];
                    q[r] = q[r + 1];
                    q[r + 1] = qx;
                };
            }
            l = l + 1;
        };
    }
    for (saDvmIwPu = 0; saDvmIwPu <= m - 1; saDvmIwPu++) {
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", q[saDvmIwPu].y.s[0], q[saDvmIwPu].y.s[1], q[saDvmIwPu].y.s[2], q[saDvmIwPu].x.s[0], q[saDvmIwPu].x.s[1], q[saDvmIwPu].x.s[2], q[saDvmIwPu].p);
    };
}

