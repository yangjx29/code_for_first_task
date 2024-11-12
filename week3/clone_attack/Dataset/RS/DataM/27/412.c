int main () {
    double  cihK2qy4jr [(751 - 651)];
    double  b [(774 - 674)];
    double  c [(642 - 542)];
    double  gB3EHxqcg [100];
    double  x2 [100];
    double  under [100];
    double  uL7otm3 [100];
    double  unreal [100];
    int DKFavOP2Gg;
    int xUMBdf;
    scanf ("%d", &DKFavOP2Gg);
    for (xUMBdf = (918 - 918); xUMBdf < DKFavOP2Gg; xUMBdf = xUMBdf + 1) {
        scanf ("%lf %lf %lf", &cihK2qy4jr[xUMBdf], &b[xUMBdf], &c[xUMBdf]);
        under[xUMBdf] = b[xUMBdf] * b[xUMBdf] - 4 * cihK2qy4jr[xUMBdf] * c[xUMBdf];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (under[xUMBdf] > (637 - 637)) {
            gB3EHxqcg[xUMBdf] = ((50 - 50) - b[xUMBdf] + sqrt (under[xUMBdf])) / ((410 - 408) * cihK2qy4jr[xUMBdf]);
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
            x2[xUMBdf] = ((537 - 537) - b[xUMBdf] - sqrt (under[xUMBdf])) / ((381 - 379) * cihK2qy4jr[xUMBdf]);
        }
        if (!(0 != under[xUMBdf])) {
            gB3EHxqcg[xUMBdf] = x2[xUMBdf] = (-b[xUMBdf] / (2 * cihK2qy4jr[xUMBdf]));
        }
        if (under[xUMBdf] < 0) {
            uL7otm3[xUMBdf] = (-b[xUMBdf] / (2 * cihK2qy4jr[xUMBdf]));
            unreal[xUMBdf] = sqrt (-under[xUMBdf]) / (2 * cihK2qy4jr[xUMBdf]);
        };
    }
    for (xUMBdf = 0; xUMBdf < DKFavOP2Gg; xUMBdf++) {
        if (under[xUMBdf] > 0)
            printf ("x1=%.5lf;x2=%.5lf\n", gB3EHxqcg[xUMBdf], x2[xUMBdf]);
        if (under[xUMBdf] == 0)
            printf ("x1=x2=%.5lf\n", gB3EHxqcg[xUMBdf]);
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
        if (under[xUMBdf] < 0)
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", uL7otm3[xUMBdf], unreal[xUMBdf], uL7otm3[xUMBdf], unreal[xUMBdf]);
    }
    return 0;
}

