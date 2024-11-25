int main () {
    double  heNgvfzs [100];
    int uga01k [100];
    int hmoZi961A [100];
    int dPqt98KsLe;
    int YaJ5khq;
    scanf ("%d", &dPqt98KsLe);
    {
        YaJ5khq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dPqt98KsLe > YaJ5khq) {
            scanf ("%d %d", &uga01k[YaJ5khq], &hmoZi961A[YaJ5khq]);
            heNgvfzs[YaJ5khq] = 1.0 * hmoZi961A[YaJ5khq] / uga01k[YaJ5khq];
            YaJ5khq++;
        };
    }
    for (YaJ5khq = 1; dPqt98KsLe - 1 > YaJ5khq; YaJ5khq++) {
        if (heNgvfzs[0] + 0.05 < heNgvfzs[YaJ5khq]) {
            printf ("better\n");
        }
        else {
            if (heNgvfzs[0] - 0.05 > heNgvfzs[YaJ5khq]) {
                printf ("worse\n");
            }
            else {
                printf ("same\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    if (heNgvfzs[dPqt98KsLe - 1] > heNgvfzs[0] + 0.05) {
        printf ("better");
    }
    else if (heNgvfzs[dPqt98KsLe - 1] < heNgvfzs[0] - 0.05) {
        printf ("worse");
    }
    else {
        printf ("same");
    }
    return 0;
}

