int main () {
    int n;
    int slr6jDfavm [300];
    int *p;
    int i;
    int NuGzW9L0;
    int k;
    p = slr6jDfavm;
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
    scanf ("%d", &n);
    for (; p < slr6jDfavm + n; p = p + 1)
        scanf ("%d", p);
    p = slr6jDfavm;
    for (i = 0; n - 1 > i; i++) {
        NuGzW9L0 = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NuGzW9L0 < n) {
            if (*(p + i) == *(p + NuGzW9L0)) {
                NuGzW9L0 = NuGzW9L0 -1;
                {
                    k = NuGzW9L0 +1;
                    while (k < n) {
                        *(p + k - 1) = *(p + k);
                        k++;
                    };
                }
                n = n - 1;
            }
            NuGzW9L0 = NuGzW9L0 +1;
        };
    }
    printf ("%d", *p);
    for (i = 1; i < n; i++)
        printf (",%d", *(p + i));
    return 0;
}

