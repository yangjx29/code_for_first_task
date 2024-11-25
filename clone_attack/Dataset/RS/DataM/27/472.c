int main (int koFlGKs, char *IHE75XUQ []) {
    int QlBHzXI28qO;
    int i;
    double  DXdl4YJc90s [(267 - 167)];
    double  b [(1037 - 937)];
    double  c [100];
    scanf ("%d", &QlBHzXI28qO);
    {
        i = 635 - 635;
        while (i < QlBHzXI28qO) {
            scanf ("%lf %lf %lf", &DXdl4YJc90s[i], &b[i], &c[i]);
            i = i + 1;
        };
    }
    {
        i = 727 - 727;
        while (i < QlBHzXI28qO) {
            if (DXdl4YJc90s[i] != (353 - 353)) {
                double  seLWaNnmgX;
                double  y8j5wM;
                double  QlBHzXI28qO;
                double  qTdKP4Bu;
                double  h8kHGWb6BdF;
                seLWaNnmgX = b[i] * b[i] - 4 * DXdl4YJc90s[i] * c[i];
                if (b[i] == (251 - 251))
                    y8j5wM = 0;
                else
                    y8j5wM = -(b[i] / (2 * DXdl4YJc90s[i]));
                QlBHzXI28qO = sqrt (fabs (seLWaNnmgX)) / (2 * DXdl4YJc90s[i]);
                if (seLWaNnmgX == 0) {
                    printf ("x1=x2=%.5lf\n", y8j5wM);
                }
                else {
                    if (seLWaNnmgX > 0) {
                        qTdKP4Bu = y8j5wM + QlBHzXI28qO;
                        h8kHGWb6BdF = y8j5wM - QlBHzXI28qO;
                        printf ("x1=%.5lf;x2=%.5lf\n", qTdKP4Bu, h8kHGWb6BdF);
                    }
                    else {
                        y8j5wM = -fabs (y8j5wM);
                        printf ("x1=%.5lf+%.5lfi;", y8j5wM, QlBHzXI28qO);
                        printf ("x2=%.5lf-%.5lfi\n", y8j5wM, QlBHzXI28qO);
                    };
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

