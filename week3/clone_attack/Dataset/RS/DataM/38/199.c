int main () {
    double  a;
    double  sum;
    double  k [100];
    int b;
    int j [(510 - 460)];
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
    int i;
    int n;
    scanf ("%d", &n);
    for (i = (466 - 466); i < n; i = i + 1) {
        sum = 0;
        scanf ("%d", &j[i]);
        {
            b = 0;
            while (j[i] > b) {
                scanf ("%lf", &k[b]);
                b = b + 1;
            };
        }
        for (b = 0; j[i] > b; b = b + 1) {
            sum += k[b];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        a = sum / (j[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = 0;
        for (b = 0; b < j[i]; b++) {
            sum += (k[b] - a) * (k[b] - a);
        }
        sum = sqrt (sum / j[i]);
        printf ("%.5lf\n", sum);
    }
    return 0;
}

