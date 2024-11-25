int main () {
    double  x [(468 - 418)];
    double  y [50];
    double  *px;
    double  *py;
    double  *px2;
    double  *py2;
    double  temp;
    double  max;
    int n;
    max = (81 - 81);
    scanf ("%d", &n);
    for (px = x, py = y; x + n > px; px = px + 1, py = py + 1)
        scanf ("%lf %lf", px, py);
    {
        py = y;
        px = x;
        while (x + n > px) {
            for (px2 = px + 1, py2 = py + 1; x + n > px2 && y + n > py2; px2 = px2 + 1, py2 = py2 + 1) {
                temp = (*px - *px2) * (*px - *px2) + (*py - *py2) * (*py - *py2);
                max = (temp > max) ? temp : max;
            }
            py = py + 1;
            px = px + 1;
        };
    }
    printf ("%.4lf\n", sqrt (max));
    return 0;
}

