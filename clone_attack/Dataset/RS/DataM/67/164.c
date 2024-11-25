int main () {
    double  zjyGorND;
    int n, kgcFuOvjtp4;
    double  K3JuOeZq1w5 [100];
    double  eKRg3cskaOiH [100];
    double  c [100];
    scanf ("%d", &n);
    scanf ("%lf%lf", &K3JuOeZq1w5[0], &eKRg3cskaOiH[0]);
    zjyGorND = eKRg3cskaOiH[0] / K3JuOeZq1w5[0];
    {
        kgcFuOvjtp4 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > kgcFuOvjtp4) {
            scanf ("%lf%lf", &K3JuOeZq1w5[kgcFuOvjtp4], &eKRg3cskaOiH[kgcFuOvjtp4]);
            c[kgcFuOvjtp4] = eKRg3cskaOiH[kgcFuOvjtp4] / K3JuOeZq1w5[kgcFuOvjtp4];
            kgcFuOvjtp4 = kgcFuOvjtp4 + 1;
        };
    }
    for (kgcFuOvjtp4 = 1; kgcFuOvjtp4 < n; kgcFuOvjtp4 = kgcFuOvjtp4 + 1) {
        if (0.05 < c[kgcFuOvjtp4] - zjyGorND)
            printf ("better\n");
        else {
            if (zjyGorND - c[kgcFuOvjtp4] > 0.05)
                printf ("worse\n");
            else
                printf ("same\n");
        };
    }
    return 0;
}

