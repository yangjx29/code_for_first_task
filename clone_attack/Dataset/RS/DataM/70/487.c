int main (int argc, char *argv []) {
    int n;
    struct   {
        double  x, y;
    }
    zb [number];
    double  dis;
    double  max = 0.0;
    int i, xfvPhxR;
    scanf ("%d/n", &n);
    {
        i = 0;
        while (n > i) {
            double  x1, y1;
            scanf ("%lf" "%lf/n", &x1, &y1);
            zb[i].x = x1;
            zb[i].y = y1;
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        xfvPhxR = 0;
        while (n > xfvPhxR) {
            dis = sqrt (pow (zb[i].x - zb[xfvPhxR].x, 2) + pow (zb[i].y - zb[xfvPhxR].y, 2));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xfvPhxR++;
            if (dis > max) {
                max = dis;
            };
        };
    }
    printf ("%.4f", max);
    return 0;
}

