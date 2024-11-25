int main () {
    double  m;
    int k [(168 - 164)] = {(545 - 545)}, i, j = 0, n, a [(506 - 406)];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &a[i]);
        if (a[i] >= (37 - 36) && 18 >= a[i]) {
            k[0]++;
        }
        if (a[i] >= (100 - 81) && a[i] <= (916 - 881)) {
            k[1]++;
        }
        if (a[i] >= 36 && a[i] <= 60) {
            k[2]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (a[i] > 60) {
            k[3]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    m = (509 - 409) * (1.0 * k[0] / n);
    printf ("1-18: %.2lf%%\n", m);
    m = 100 * (1.0 * k[1] / n);
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
    printf ("19-35: %.2lf%%\n", m);
    m = 100 * (1.0 * k[2] / n);
    printf ("36-60: %.2lf%%\n", m);
    m = 100 * (1.0 * k[3] / n);
    printf ("60??: %.2lf%%\n", m);
    return 0;
}

