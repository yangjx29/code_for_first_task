int main () {
    double  shuru [100], *shu = shuru, fangjungen (double  *shu, int k);
    int n, k, i, j;
    scanf ("%d", &n);
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
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &k);
            {
                j = 0;
                while (k > j) {
                    scanf ("%lf", &*(shu + j));
                    j = j + 1;
                };
            }
            printf ("%.5lf\n", fangjungen (shu, k));
            i = i + 1;
        };
    }
    return 0;
}

double  fangjungen (double  *shu, int k) {
    double  zong = 0.0, pingjun, Of3thPbJa;
    int i;
    {
        i = 0;
        while (k > i) {
            zong = zong + *(shu + i);
            i = i + 1;
        };
    }
    pingjun = zong / k;
    zong = 0.0;
    for (i = 0; i < k; i++)
        zong = zong + (*(shu + i) - pingjun) * (*(shu + i) - pingjun);
    Of3thPbJa = sqrt ((zong / k));
    return Of3thPbJa;
}

