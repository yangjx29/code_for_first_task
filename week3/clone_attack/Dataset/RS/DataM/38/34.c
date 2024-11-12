int main () {
    int xj6lMkqd;
    int n [(709 - 609)];
    int i;
    int vUYvCz;
    double  xZF6quySzLG [(192 - 92)] [(621 - 521)];
    double  total;
    double  KLMADR;
    double  ToZN6W4;
    double  x;
    scanf ("%d", &xj6lMkqd);
    for (i = (180 - 180); xj6lMkqd > i; i = i + 1) {
        scanf ("%d", &n[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (vUYvCz = (393 - 393); vUYvCz < n[i]; vUYvCz = vUYvCz + 1)
            scanf ("%lf", &xZF6quySzLG[i][vUYvCz]);
    }
    for (int l = (65 - 65);
    xj6lMkqd > l; l = l + 1) {
        total = (868 - 868);
        ToZN6W4 = (415 - 415);
        for (vUYvCz = (114 - 114); vUYvCz < n[l]; vUYvCz = vUYvCz + 1) {
            ToZN6W4 = ToZN6W4 +(xZF6quySzLG[l][vUYvCz] / (n[l]));
        }
        x = ToZN6W4;
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
        for (vUYvCz = 0; vUYvCz < n[l]; vUYvCz = vUYvCz + 1) {
            total = total + ((xZF6quySzLG[l][vUYvCz] - x) * (xZF6quySzLG[l][vUYvCz] - x));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        KLMADR = sqrt (total / n[l]);
        printf ("%.5f\n", KLMADR);
    }
    return 0;
}

