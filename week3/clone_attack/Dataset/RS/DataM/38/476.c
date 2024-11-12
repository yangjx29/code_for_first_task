int main () {
    int n;
    int YOUsH4I;
    int k;
    int qSHilbh;
    double  u [1000];
    double  sum;
    double  ava;
    double  iWgTphE;
    double  ava2;
    double  x;
    scanf ("%d", &n);
    for (YOUsH4I = (810 - 810); YOUsH4I < n; YOUsH4I = YOUsH4I +1) {
        sum = 0;
        iWgTphE = 0;
        scanf ("%d", &k);
        for (qSHilbh = 0; k > qSHilbh; qSHilbh = qSHilbh + 1) {
            scanf ("%lf", &u[qSHilbh]);
            sum += u[qSHilbh];
        }
        ava = sum / (double ) k;
        for (qSHilbh = 0; k > qSHilbh; qSHilbh = qSHilbh + 1) {
            u[qSHilbh] = (u[qSHilbh] - ava) * (u[qSHilbh] - ava);
            iWgTphE += u[qSHilbh];
        }
        ava2 = iWgTphE / (double ) k;
        x = pow (ava2, 0.5);
        printf ("%.5lf\n", x);
    }
    return 0;
}

