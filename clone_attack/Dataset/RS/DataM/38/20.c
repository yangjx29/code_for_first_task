int main () {
    int n;
    int UZxnGQRC90YL;
    int rcmiqp1Qj;
    int LjSzcw0A;
    double  x [(603 - 503)];
    double  Bw7PLc [(360 - 260)] = {(79 - 79)};
    double  a;
    double  HjisKScpNGT [100];
    scanf ("%d", &rcmiqp1Qj);
    for (UZxnGQRC90YL = (70 - 70); rcmiqp1Qj > UZxnGQRC90YL; UZxnGQRC90YL++) {
        scanf ("%d", &n);
        a = (770 - 770);
        {
            LjSzcw0A = 435 - 435;
            while (n > LjSzcw0A) {
                scanf ("%lf", &x[LjSzcw0A]);
                a += x[LjSzcw0A];
                LjSzcw0A = LjSzcw0A +1;
            };
        }
        {
            LjSzcw0A = 593 - 593;
            while (LjSzcw0A < n) {
                Bw7PLc[UZxnGQRC90YL] += pow ((x[LjSzcw0A] - a / n), 2);
                LjSzcw0A++;
            };
        }
        HjisKScpNGT[UZxnGQRC90YL] = sqrt (Bw7PLc[UZxnGQRC90YL] / n);
    }
    {
        UZxnGQRC90YL = 0;
        while (rcmiqp1Qj > UZxnGQRC90YL) {
            printf ("%.5lf\n", HjisKScpNGT[UZxnGQRC90YL]);
            UZxnGQRC90YL = UZxnGQRC90YL +1;
        };
    }
    return 0;
}

