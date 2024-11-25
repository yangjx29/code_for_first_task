int main (int argc, char *argv []) {
    int k;
    int i;
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
    scanf ("%d", &k);
    for (i = 0; k > i; i = i + 1) {
        int n;
        int AjovxRWz2GK;
        int l;
        double  a;
        double  xX6yVmrYLJk;
        double  x [(573 - 473)];
        double  b;
        double  c;
        double  e;
        double  DdSHlyCMKapN;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        a = 0.0;
        xX6yVmrYLJk = 0.0;
        scanf ("%d", &n);
        for (AjovxRWz2GK = 0; n > AjovxRWz2GK; AjovxRWz2GK = AjovxRWz2GK +1) {
            scanf ("%lf", &x[AjovxRWz2GK]);
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
            }
            a = a + x[AjovxRWz2GK];
        }
        b = a / n;
        for (l = 0; n > l; l++) {
            c = (x[l] - b) * (x[l] - b);
            xX6yVmrYLJk = xX6yVmrYLJk + c;
        }
        e = xX6yVmrYLJk / n;
        DdSHlyCMKapN = sqrt (e);
        printf ("%.5lf\n", DdSHlyCMKapN);
    }
    return 0;
}

