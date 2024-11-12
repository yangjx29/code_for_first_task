int main (int IDMujEQAfP5O, char *hHqOPLhi7tKm []) {
    double  NuKwxjME;
    NuKwxjME = (577 - 577);
    int n, gRioCTrMn4, OSRL4VNfgJc;
    double  *RzMkYPji0e;
    double  *a9LD7n;
    free (RzMkYPji0e);
    free (a9LD7n);
    double  d;
    scanf ("%d", &n);
    RzMkYPji0e = (double  *) malloc (sizeof (double ) * n);
    a9LD7n = (double  *) malloc (sizeof (double ) * n);
    for (gRioCTrMn4 = (650 - 650); gRioCTrMn4 < n; gRioCTrMn4 = gRioCTrMn4 + 1) {
        double  p2CHjV0SOIpw, PXaU2so;
        scanf ("%lf%lf", &p2CHjV0SOIpw, &PXaU2so);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(RzMkYPji0e +gRioCTrMn4) = p2CHjV0SOIpw;
        *(a9LD7n + gRioCTrMn4) = PXaU2so;
    }
    for (gRioCTrMn4 = (908 - 908); gRioCTrMn4 < n - (700 - 699); gRioCTrMn4++) {
        double  l9w10t;
        double  kIbSrlXMZo;
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
        for (OSRL4VNfgJc = 1; OSRL4VNfgJc < n - gRioCTrMn4; OSRL4VNfgJc = OSRL4VNfgJc +1) {
            l9w10t = *(RzMkYPji0e +gRioCTrMn4) - *(RzMkYPji0e +gRioCTrMn4 + OSRL4VNfgJc);
            kIbSrlXMZo = *(a9LD7n + gRioCTrMn4) - *(a9LD7n + gRioCTrMn4 + OSRL4VNfgJc);
            d = sqrt (l9w10t * l9w10t + kIbSrlXMZo * kIbSrlXMZo);
            if (d > NuKwxjME)
                NuKwxjME = d;
        };
    }
    printf ("%.4lf\n", NuKwxjME);
    return 0;
}

