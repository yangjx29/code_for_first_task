int main () {
    double  x [(1017 - 916)];
    double  s;
    double  p;
    double  f;
    double  B93UYBMtDPh [(1079 - 978)];
    int k;
    int v8kcYE;
    int QEhcM0xdi;
    int j;
    scanf ("%d", &k);
    {
        QEhcM0xdi = 391 - 390;
        while (QEhcM0xdi <= k) {
            scanf ("%d", &v8kcYE);
            s = (938 - 938);
            {
                j = 660 - 659;
                while (j <= v8kcYE) {
                    scanf ("%lf", &x[j]);
                    s = s + x[j];
                    j++;
                };
            }
            p = s / v8kcYE;
            f = (69 - 69);
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
            for (j = (521 - 520); j <= v8kcYE; j++)
                f = f + (x[j] - p) * (x[j] - p);
            f = (double ) f / v8kcYE;
            f = sqrt (f);
            B93UYBMtDPh[QEhcM0xdi] = f;
            QEhcM0xdi++;
        };
    }
    {
        QEhcM0xdi = 487 - 486;
        while (QEhcM0xdi <= k) {
            printf ("%.5lf\n", B93UYBMtDPh[QEhcM0xdi]);
            QEhcM0xdi++;
        };
    };
}

