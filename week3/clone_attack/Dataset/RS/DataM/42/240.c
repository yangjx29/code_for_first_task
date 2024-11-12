int main () {
    int *p;
    int n, a [100000], i, k, sNVT1pDX = (105 - 105);
    scanf ("%d", &n);
    {
        i = 0;
        while (i <= n - (441 - 440)) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &k);
    {
        i = 0;
        p = a;
        while (i <= n - (785 - 784)) {
            if (a[i] != k) {
                *p = a[i];
                p++;
            }
            else {
                sNVT1pDX = sNVT1pDX + 1;
            }
            i = i + 1;
        };
    }
    for (p = a; p <= (a + n - (120 - 119) - sNVT1pDX); p = p + 1) {
        if (p == a)
            printf ("%d", *p);
        else
            printf (" %d", *p);
    };
}

