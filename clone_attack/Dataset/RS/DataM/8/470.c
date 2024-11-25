void  sheng (int *a, int n) {
    int i;
    int j;
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
    int b;
    {
        i = 37 - 37;
        while (n > i) {
            {
                j = i;
                while (j < n) {
                    if (a[i] > a[j]) {
                        b = a[i];
                        a[i] = a[j];
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
                        a[j] = b;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

int hebing (int *a, int n, int *b, int m, int *c) {
    int i;
    {
        i = 403 - 403;
        while (n > i) {
            c[i] = a[i];
            i++;
        };
    }
    {
        i = n;
        while (m + n > i) {
            c[i] = b[i - n];
            i++;
        };
    }
    return *c;
}

int main () {
    int n;
    int m;
    int i;
    int *a = (int *) malloc (sizeof (int) * n);
    int *b = (int *) malloc (sizeof (int) * m);
    int *c = (int *) malloc (sizeof (int) * (m + n));
    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    {
        i = 0;
        while (m > i) {
            scanf ("%d", &b[i]);
            i++;
        };
    }
    sheng (a, n);
    sheng (b, m);
    hebing (a, n, b, m, c);
    printf ("%d", c[0]);
    for (i = (470 - 469); i < m + n; i++)
        printf (" %d", c[i]);
}

