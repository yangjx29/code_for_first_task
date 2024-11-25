int main () {
    double  Cxy7otWOP [10], xtdfv0IEV76 [10];
    int Z9GQWP;
    int i;
    int AWTGrRP7xV6;
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
    double  h6GAENQ1djP, hLJYAQxsdXjO, d, dmax = 0;
    scanf ("%d", &Z9GQWP);
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
        while (Z9GQWP > i) {
            scanf ("%lf %lf", &h6GAENQ1djP, &hLJYAQxsdXjO);
            Cxy7otWOP[i] = h6GAENQ1djP;
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
            xtdfv0IEV76[i] = hLJYAQxsdXjO;
            i++;
        };
    }
    {
        i = 0;
        while (i < Z9GQWP) {
            for (AWTGrRP7xV6 = 0; AWTGrRP7xV6 < Z9GQWP; AWTGrRP7xV6++) {
                d = sqrt ((Cxy7otWOP[i] - Cxy7otWOP[AWTGrRP7xV6]) * (Cxy7otWOP[i] - Cxy7otWOP[AWTGrRP7xV6]) + (xtdfv0IEV76[i] - xtdfv0IEV76[AWTGrRP7xV6]) * (xtdfv0IEV76[i] - xtdfv0IEV76[AWTGrRP7xV6]));
                if (d > dmax) {
                    dmax = d;
                };
            }
            i++;
        };
    }
    printf ("%.4f", dmax);
}

