int main () {
    double  gN5rZ4, b, pIn5bp3BP8FJ, bmJtfbDQz8, x1, x2, realpart, wSIc0i7tJml;
    int BQU6Ytg;
    int WumE5LF;
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
    WumE5LF = 0;
    scanf ("%d", &BQU6Ytg);
    while (WumE5LF < BQU6Ytg) {
        WumE5LF++;
        scanf ("%lf %lf %lf", &gN5rZ4, &b, &pIn5bp3BP8FJ);
        if (1e-6 >= fabs (gN5rZ4))
            printf ("error\n", gN5rZ4);
        else {
            bmJtfbDQz8 = b * b - 4 * gN5rZ4 * pIn5bp3BP8FJ;
            if (fabs (bmJtfbDQz8) <= 1e-6)
                printf ("x1=x2=%.5lf\n", -b / (2 * gN5rZ4));
            else if (bmJtfbDQz8 > 1e-6) {
                x1 = (-b + sqrt (bmJtfbDQz8)) / (2 * gN5rZ4);
                x2 = (-b - sqrt (bmJtfbDQz8)) / (2 * gN5rZ4);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                realpart = -b / (2 * gN5rZ4);
                wSIc0i7tJml = sqrt (-bmJtfbDQz8) / (2 * gN5rZ4);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", realpart, wSIc0i7tJml, realpart, wSIc0i7tJml);
            };
        };
    }
    return 0;
}

