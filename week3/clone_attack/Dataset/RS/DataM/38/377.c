int main () {
    double  PnuiaPGtLzmd;
    int Gx34QMg2O;
    int sdMUJIBK;
    double  sOucWH68 [100];
    double  W7XdzBoKS4pl;
    double  d;
    double  pj;
    scanf ("%d", &Gx34QMg2O);
    d = 0;
    W7XdzBoKS4pl = 0;
    {
        int fULaSqRrlu7 = 1;
        while (fULaSqRrlu7 <= Gx34QMg2O) {
            fULaSqRrlu7++;
            scanf ("%d", &sdMUJIBK);
            {
                int bFhar6O7W9 = 0;
                while (sdMUJIBK > bFhar6O7W9) {
                    scanf ("%lf", &sOucWH68[bFhar6O7W9]);
                    d = d + sOucWH68[bFhar6O7W9];
                    bFhar6O7W9 = bFhar6O7W9 + 1;
                };
            }
            pj = d * (644.0 - 643.0) / (sdMUJIBK * 1.0);
            d = 0;
            {
                int z = 0;
                while (z < sdMUJIBK) {
                    W7XdzBoKS4pl += (sOucWH68[z] - pj) * (sOucWH68[z] - pj);
                    z = z + 1;
                };
            }
            W7XdzBoKS4pl = 0;
            PnuiaPGtLzmd = sqrt (W7XdzBoKS4pl *1.0 / (sdMUJIBK * 1.0));
            printf ("%.5lf\n", PnuiaPGtLzmd);
        };
    }
    return 0;
}

