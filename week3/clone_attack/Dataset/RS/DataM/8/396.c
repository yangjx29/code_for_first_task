int m, n;

int main () {
    int p [100] = {0}, q [100] = {0}, fVaq3PiKk [200] = {0};
    void  re (int a [], int b []);
    void  or (int a [], int b []);
    void  cb (int a [], int b [], int d []);
    void  pr (int d []);
    pr (fVaq3PiKk);
    re (p, q);
    or (p, q);
    cb (p, q, fVaq3PiKk);
    return 0;
}

void  re (int a [], int b []) {
    int i;
    scanf ("%d %d", &m, &n);
    for (i = 0; m > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; n > i; i++)
        scanf ("%d", &b[i]);
}

void  or (int a [], int b []) {
    int i, j, t;
    {
        i = 0;
        while (m - 1 > i) {
            {
                j = i + 1;
                while (j < m) {
                    if (a[j] < a[i]) {
                        t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - 1 > i) {
            {
                j = i + 1;
                while (n > j) {
                    if (b[i] > b[j]) {
                        t = b[i];
                        b[i] = b[j];
                        b[j] = t;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

void  cb (int a [], int b [], int d []) {
    int i;
    {
        i = 0;
        while (m > i) {
            d[i] = a[i];
            i++;
        };
    }
    {
        i = m;
        while (i < m + n) {
            d[i] = b[i - m];
            i++;
        };
    };
}

void  pr (int d []) {
    int i;
    printf ("%d", d[0]);
    {
        i = 1;
        while (i < m + n) {
            printf (" %d", d[i]);
            i++;
        };
    };
}

