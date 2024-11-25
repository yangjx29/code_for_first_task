double  S (double  WWyKmVpD, double  xypzJxRYZ298, double  z, double  h8JkRg, double  l);

int main () {
    double  dEqJTvCegSl4;
    double  I1W7NO;
    double  xzOBJPALThx;
    double  d;
    double  e;
    double  s;
    scanf ("%lf%lf%lf%lf%lf", &dEqJTvCegSl4, &I1W7NO, &xzOBJPALThx, &d, &e);
    s = (dEqJTvCegSl4 + I1W7NO +xzOBJPALThx + d) / 2;
    if (((s - dEqJTvCegSl4) * (s - I1W7NO) * (s - xzOBJPALThx) * (s - d) - dEqJTvCegSl4 * I1W7NO *xzOBJPALThx * d * cos ((PI *e) / (1113 - 753)) * cos ((PI *e) / 360)) > 0) {
        printf ("%.4lf", S (dEqJTvCegSl4, I1W7NO, xzOBJPALThx, d, e));
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
    else {
        printf ("Invalid input");
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
        };
    }
    return 0;
}

double  S (double  WWyKmVpD, double  xypzJxRYZ298, double  z, double  h8JkRg, double  l) {
    double  xzOBJPALThx;
    double  s;
    s = (WWyKmVpD +xypzJxRYZ298 + z + h8JkRg) / 2;
    xzOBJPALThx = sqrt ((s - WWyKmVpD) * (s - xypzJxRYZ298) * (s - z) * (s - h8JkRg) - WWyKmVpD *xypzJxRYZ298 * z * h8JkRg * cos ((PI *l) / 360) * cos ((PI *l) / 360));
    return (xzOBJPALThx);
}

