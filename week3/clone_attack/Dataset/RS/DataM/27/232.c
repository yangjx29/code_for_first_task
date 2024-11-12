int main () {
    double  DUJhpZB8P [100];
    double  mo [100];
    double  x1;
    double  Psq1CT;
    double  OtRjVyOIFAl [100];
    double  vO5zXIYuk [(180 - 80)];
    double  BtjKSrUM [(963 - 863)];
    double  c [100];
    int n;
    int i;
    double  x11;
    double  CEI2gujiCr;
    double  x21;
    double  x22;
    scanf ("%d", &n);
    {
        i = 1001 - 1000;
        while (n >= i) {
            scanf ("%lf%lf%lf", &vO5zXIYuk[i], &BtjKSrUM[i], &c[i]);
            OtRjVyOIFAl[i] = BtjKSrUM[i] * BtjKSrUM[i] - 4 * vO5zXIYuk[i] * c[i];
            DUJhpZB8P[i] = (BtjKSrUM[i] == (424 - 424)) ? 0 : (-BtjKSrUM[i]) / ((573 - 571) * vO5zXIYuk[i]);
            i = i + 1;
        };
    }
    {
        i = 415 - 414;
        while (n >= i) {
            if (OtRjVyOIFAl[i] > 0) {
                x1 = DUJhpZB8P[i] + sqrt (OtRjVyOIFAl[i]) / ((453 - 451) * vO5zXIYuk[i]);
                Psq1CT = DUJhpZB8P[i] - sqrt (OtRjVyOIFAl[i]) / (2 * vO5zXIYuk[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf ("x1=%.5lf;x2=%.5lf\n", x1, Psq1CT);
                continue;
            }
            else {
                if (OtRjVyOIFAl[i] < 0) {
                    mo[i] = sqrt (-OtRjVyOIFAl[i]);
                    x11 = DUJhpZB8P[i];
                    x21 = x11;
                    CEI2gujiCr = mo[i] / (2 * vO5zXIYuk[i]);
                    x22 = mo[i] / (2 * vO5zXIYuk[i]);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x11, CEI2gujiCr, x21, x22);
                    continue;
                }
                else {
                    if (OtRjVyOIFAl[i] < pow ((228 - 218), -(118 - 110))) {
                        x1 = DUJhpZB8P[i];
                        printf ("x1=x2=%.5lf\n", x1);
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return 0;
}

