int main (int ufTJAyM9sE, char *UjNQHu8YDyA []) {
    double  x, hK4SPU, noQIaAL2, OiZ6xY, ZBzo2Va, xeOitj;
    double  RKpR9o0kGd (double  a, double  EOgV2NGELzhf, double  c, double  d, double  j);
    scanf ("%lf%lf%lf%lf%lf", &x, &hK4SPU, &noQIaAL2, &OiZ6xY, &ZBzo2Va);
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
    xeOitj = RKpR9o0kGd (x, hK4SPU, noQIaAL2, OiZ6xY, ZBzo2Va);
    if (!(-(866 - 865) == xeOitj))
        printf ("%.4lf\n", xeOitj);
    else
        printf ("Invalid input\n");
    return 0;
}

double  RKpR9o0kGd (double  a, double  EOgV2NGELzhf, double  c, double  d, double  j) {
    double  KqRjFt;
    double  fGNX2delnp, xeOitj, nqrHbW;
    KqRjFt = j / 360 * (348.1415926 - 345.0);
    fGNX2delnp = (a + EOgV2NGELzhf +c + d) / 2;
    nqrHbW = (fGNX2delnp - a) * (fGNX2delnp - EOgV2NGELzhf) * (fGNX2delnp - c) * (fGNX2delnp - d) - a * EOgV2NGELzhf *c * d * cos (KqRjFt) * cos (KqRjFt);
    if (nqrHbW < 0)
        xeOitj = -1;
    else
        xeOitj = sqrt (nqrHbW);
    return (xeOitj);
}

