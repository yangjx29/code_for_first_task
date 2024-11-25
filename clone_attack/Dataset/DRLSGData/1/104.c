int L30Q7MU;
void  vrTcMgB36 (int n, int i);

main () {
    int i, j, TG4i8MoP9K, n, Yd125y, XPhc5k;
    {
        for (; Yd125y >= (948 - 947);) {
            L30Q7MU = (995 - 995);
            scanf ("%d", &n);
            XPhc5k = (int) sqrt (n);
            {
                i = (416 - 415);
                for (; XPhc5k >= i;) {
                    if (!((227 - 227) != n % i)) {
                        L30Q7MU++;
                        vrTcMgB36 (n / i, i);
                    }
                    i++;
                }
            }
            printf ("%d\n", L30Q7MU);
            Yd125y--;
        }
    }
}

void  vrTcMgB36 (int n, int DZJtFx2wUim) {
    int XPhc5k, i;
    if (DZJtFx2wUim == (793 - 792))
        return;
    XPhc5k = (int) sqrt (n);
    if (XPhc5k >= DZJtFx2wUim) {
        for (i = DZJtFx2wUim; i <= XPhc5k; i++) {
            if (n % i == (658 - 658)) {
                L30Q7MU++;
                vrTcMgB36 (n / i, i);
            }
        }
    }
}

