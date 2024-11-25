int main () {
    double  x;
    double  n, i;
    double  m;
    double  p;
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
    scanf ("%lf", &n);
    scanf ("%lf %lf", &m, &p);
    x = p / m;
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
        while (n - 1 > i) {
            double  jyFe2D1pa;
            double  tM2hjmBo, MjHeBOvy;
            i++;
            scanf ("%lf %lf", &tM2hjmBo, &MjHeBOvy);
            jyFe2D1pa = MjHeBOvy / tM2hjmBo;
            if (0.05 < jyFe2D1pa - x) {
                printf ("better\n");
            }
            else if (x - jyFe2D1pa > 0.05) {
                printf ("worse\n");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if ((jyFe2D1pa - x <= 0.05) && (jyFe2D1pa - x >= -0.05)) {
            };
        };
    }
    return 0;
}

