main () {
    int h;
    int z1flPsCvkc;
    int j;
    int k;
    int n;
    h = (772 - 772);
    z1flPsCvkc = (116 - 116);
    j = 0;
    k = 0;
    char x [n] [10];
    float a [n], m [n], f [n];
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
    float t;
    scanf ("%d", &n);
    do {
        scanf ("%s %f", &x[z1flPsCvkc], &a[z1flPsCvkc]);
        z1flPsCvkc = z1flPsCvkc + 1;
    }
    while (z1flPsCvkc < n);
    z1flPsCvkc = 0;
    do {
        if (x[z1flPsCvkc][0] == 'm') {
            m[j] = a[z1flPsCvkc];
            j = j + 1;
        }
        else {
            f[k] = a[z1flPsCvkc];
            k = k + 1;
        }
        z1flPsCvkc = z1flPsCvkc + 1;
    }
    while (z1flPsCvkc < n);
    for (h = 0; h < j - 1; h = h + 1) {
        for (z1flPsCvkc = 0; j - 1 - h > z1flPsCvkc; z1flPsCvkc = z1flPsCvkc + 1) {
            if (m[z1flPsCvkc] > m[z1flPsCvkc + 1]) {
                t = m[z1flPsCvkc];
                m[z1flPsCvkc] = m[z1flPsCvkc + 1];
                m[z1flPsCvkc + 1] = t;
            };
        };
    }
    printf ("%.2f", m[0]);
    for (h = 0; h < k - 1; h = h + 1) {
        z1flPsCvkc = 0;
        while (k - 1 - h > z1flPsCvkc) {
            if (f[z1flPsCvkc + 1] > f[z1flPsCvkc]) {
                t = f[z1flPsCvkc];
                f[z1flPsCvkc] = f[z1flPsCvkc + 1];
                f[z1flPsCvkc + 1] = t;
            }
            z1flPsCvkc = z1flPsCvkc + 1;
        };
    }
    if (j > 1) {
        z1flPsCvkc = 1;
        do {
            printf (" %.2f", m[z1flPsCvkc]);
            z1flPsCvkc = z1flPsCvkc + 1;
        }
        while (z1flPsCvkc < j);
    }
    z1flPsCvkc = 0;
    do {
        printf (" %.2f", f[z1flPsCvkc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        z1flPsCvkc = z1flPsCvkc + 1;
    }
    while (z1flPsCvkc < k);
}

