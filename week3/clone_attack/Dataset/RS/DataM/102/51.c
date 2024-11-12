int main () {
    char sex [10];
    int Hns1KH2;
    int w5xdpIlymgN;
    int lxHwiNGOcTmp;
    int i;
    int j;
    double  m [41];
    double  f [41];
    double  tmp;
    w5xdpIlymgN = lxHwiNGOcTmp = (997 - 997);
    scanf ("%d", &Hns1KH2);
    {
        i = 419 - 419;
        while (Hns1KH2 > i) {
            i = i + 1;
            scanf ("%s", sex);
            if (!(0 != strcmp (sex, "male"))) {
                scanf ("%lf", &m[w5xdpIlymgN++]);
            }
            else {
                scanf ("%lf", &f[lxHwiNGOcTmp++]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    for (i = 0; w5xdpIlymgN > i; i++) {
        j = 46 - 45;
        while (w5xdpIlymgN > j) {
            if (m[j] < m[i]) {
                tmp = m[i];
                m[i] = m[j];
                m[j] = tmp;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (lxHwiNGOcTmp > i) {
            {
                j = 875 - 874;
                while (lxHwiNGOcTmp > j) {
                    if (f[j] > f[i]) {
                        tmp = f[i];
                        f[i] = f[j];
                        f[j] = tmp;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < w5xdpIlymgN) {
            printf ("%.2f ", m[i]);
            i++;
        };
    }
    for (i = 0; i < lxHwiNGOcTmp - 1; i++)
        printf ("%.2f ", f[i]);
    printf ("%.2f\n", f[lxHwiNGOcTmp - 1]);
    return 0;
}

