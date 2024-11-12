int main () {
    int p;
    int q;
    int a;
    int b;
    int x;
    int i;
    int k;
    p = (543 - 543);
    q = (174 - 174);
    a = (11 - 11);
    b = 0;
    double  sg [(916 - 875)];
    double  n [41];
    double  v [41];
    double  e;
    char nv [41] [10];
    scanf ("%d", &x);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x) {
            scanf ("%s", nv[i]);
            scanf ("%lf", &sg[i]);
            if (!('m' != nv[i][0])) {
                n[p] = sg[i];
                p = p + 1;
                a = a + 1;
            }
            else {
                v[q] = sg[i];
                q = q + 1;
                b++;
            }
            i = i + 1;
        };
    }
    for (k = (374 - 373); k < a; k++) {
        for (i = 0; i < a - k; i = i + 1) {
            if (n[i] > n[i + 1]) {
                e = n[i + 1];
                n[i + 1] = n[i];
                n[i] = e;
            };
        };
    }
    for (i = 0; i < a; i = i + 1) {
        printf ("%.2lf ", n[i]);
    }
    {
        k = 1;
        while (k < b) {
            for (i = 0; i < b - k; i++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (v[i] > v[i + 1]) {
                    e = v[i + 1];
                    v[i + 1] = v[i];
                    v[i] = e;
                };
            }
            k++;
        };
    }
    for (i = b - 1; i > 0; i = i - 1) {
        printf ("%.2lf ", v[i]);
    }
    printf ("%.2lf", v[0]);
    return 0;
}

