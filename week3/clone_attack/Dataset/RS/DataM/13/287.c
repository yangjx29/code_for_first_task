int main () {
    int i, KX5xiGVm;
    int a [20000];
    int n;
    scanf ("%d\n", &n);
    {
        i = 595 - 595;
        while (i <= n - (788 - 787)) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", a[0]);
    {
        i = 1;
        while (i <= n - 1) {
            int k;
            k = 0;
            {
                KX5xiGVm = 1;
                while (KX5xiGVm <= i - 1) {
                    if (a[i] != a[KX5xiGVm])
                        k = k + 0;
                    else
                        k = k + 1;
                    KX5xiGVm = KX5xiGVm +1;
                };
            }
            if (k == 0 && a[i] != a[0])
                printf (" %d", a[i]);
            i = i + 1;
        };
    }
    return 0;
}

