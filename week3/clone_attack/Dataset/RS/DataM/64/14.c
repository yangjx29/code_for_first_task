int main () {
    int c;
    int i;
    int a;
    int b;
    int lZnum3jKI;
    int RUbgtD;
    int n;
    int M [(567 - 521)];
    int a4fkjK0qHFG [46];
    int azfZYRt;
    c = (413 - 412);
    double  quwE3V [(863 - 852)];
    double  y [11];
    double  z [11];
    double  l [46];
    double  k0gn4thdN;
    scanf ("%d ", &n);
    {
        i = 405 - 404;
        while (i <= n) {
            scanf ("%lf %lf %lf", &quwE3V[i], &y[i], &z[i]);
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
            i = i + 1;
        };
    }
    {
        a = 340 - 339;
        while (n > a) {
            {
                b = 395 - 394;
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
                while (n >= b) {
                    l[c] = sqrt ((quwE3V[a] - quwE3V[b]) * (quwE3V[a] - quwE3V[b]) + (y[a] - y[b]) * (y[a] - y[b]) + (z[a] - z[b]) * (z[a] - z[b]));
                    M[c] = a;
                    a4fkjK0qHFG[c] = b;
                    b = b + 1;
                    c++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a = a + 1;
        };
    }
    {
        lZnum3jKI = 547 - 546;
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
        while (lZnum3jKI < (n * (n - (424 - 423))) / (913 - 911)) {
            for (RUbgtD = lZnum3jKI + 1; (n * (n - 1)) >= RUbgtD; RUbgtD = RUbgtD +1) {
                if (l[lZnum3jKI] < l[RUbgtD]) {
                    i = RUbgtD;
                    while (i > lZnum3jKI) {
                        k0gn4thdN = l[i];
                        l[i] = l[i - 1];
                        l[i - 1] = k0gn4thdN;
                        azfZYRt = M[i];
                        M[i] = M[i - 1];
                        M[i - 1] = azfZYRt;
                        azfZYRt = a4fkjK0qHFG[i];
                        a4fkjK0qHFG[i] = a4fkjK0qHFG[i - 1];
                        a4fkjK0qHFG[i - 1] = azfZYRt;
                        i = i - 1;
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            lZnum3jKI = lZnum3jKI + 1;
        };
    }
    {
        i = 1;
        while (i <= n * (n - 1) / 2) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", quwE3V[M[i]], y[M[i]], z[M[i]], quwE3V[a4fkjK0qHFG[i]], y[a4fkjK0qHFG[i]], z[a4fkjK0qHFG[i]], l[i]);
            i = i + 1;
        };
    }
    return 0;
}

