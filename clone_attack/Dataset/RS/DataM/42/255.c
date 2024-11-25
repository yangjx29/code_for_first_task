int main () {
    int a [100000];
    int i;
    int n;
    int k;
    int *p;
    int j;
    scanf ("%d", &n);
    {
        p = a;
        while ((a + n) > p) {
            scanf ("%d", p);
            p++;
        };
    }
    scanf ("%d", &k);
    for (i = 0; i < n; i = i + 1) {
        if (a[i] == k) {
            for (p = a, j = i; j < n - 1; j = j + 1) {
                *(p + j) = *(p + j + 1);
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
            }
            i = i - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n--;
        };
    }
    for (p = a; p < (a + n - 1); p++) {
        printf ("%d ", *p);
    }
    printf ("%d", a[n - 1]);
    return 0;
}

