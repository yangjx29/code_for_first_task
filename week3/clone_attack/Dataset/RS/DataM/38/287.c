int main () {
    int n;
    int j2HvhwPNJdr;
    int i;
    int j;
    double  PtRBVaLE2wz [100], FIGKZAOJLXgw = 0, p, nsWLkvrHF5Sa, w;
    scanf ("%d", &j2HvhwPNJdr);
    for (i = 0; i < j2HvhwPNJdr; i++) {
        scanf ("%d", &n);
        for (j = 0; n > j; j++) {
            scanf ("%lf", &PtRBVaLE2wz[j]);
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
        }
        for (j = 0; j < n; j++) {
            FIGKZAOJLXgw = FIGKZAOJLXgw +PtRBVaLE2wz[j];
        }
        p = FIGKZAOJLXgw / n;
        FIGKZAOJLXgw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < n; j++) {
            FIGKZAOJLXgw = FIGKZAOJLXgw +(PtRBVaLE2wz[j] - p) * (PtRBVaLE2wz[j] - p);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nsWLkvrHF5Sa = FIGKZAOJLXgw / n;
        }
        w = sqrt (nsWLkvrHF5Sa);
        printf ("%.5lf\n", w);
        FIGKZAOJLXgw = 0;
    };
}

