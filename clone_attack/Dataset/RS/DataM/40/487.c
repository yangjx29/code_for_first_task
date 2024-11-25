double  YRQG2EITAi (double  YkXUBoLS8ve4, double  b, double  c, double  d, double  rad, double  P4q7fmMO) {
    P4q7fmMO = (YkXUBoLS8ve4 +b + c + d) / 2;
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
    return sqrt ((P4q7fmMO -YkXUBoLS8ve4) * (P4q7fmMO -b) * (P4q7fmMO -c) * (P4q7fmMO -d) - YkXUBoLS8ve4 *b * c * d * cos (rad) * cos (rad));
}

int main () {
    double  YkXUBoLS8ve4, b, c, d, e, V1r7XM, rad, P4q7fmMO;
    scanf ("%lf%lf%lf%lf%lf", &YkXUBoLS8ve4, &b, &c, &d, &V1r7XM);
    P4q7fmMO = (YkXUBoLS8ve4 +b + c + d) / 2;
    rad = V1r7XM / 360 * 3.1415926;
    if (0 > (P4q7fmMO -YkXUBoLS8ve4) * (P4q7fmMO -b) * (P4q7fmMO -c) * (P4q7fmMO -d) - YkXUBoLS8ve4 *b * c * d * cos (rad) * cos (rad)) {
    }
    else
        printf ("%.4lf\n", YRQG2EITAi (YkXUBoLS8ve4, b, c, d, rad, P4q7fmMO));
    return 0;
}

