int main () {
    int shu [200];
    int n;
    int z8ATco;
    int i;
    int a;
    scanf ("%d%d", &n, &z8ATco);
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
        while (i < n) {
            scanf ("%d", &a);
            shu[i] = a;
            i++;
        };
    }
    for (i = 100; i < 100 + z8ATco; i = i + 1) {
        shu[i] = shu[n - z8ATco + i - 100];
        printf ("%d ", shu[i]);
    }
    for (i = 100; i < 100 + n - z8ATco - 1; i++) {
        shu[z8ATco + i] = shu[i - 100];
        printf ("%d ", shu[z8ATco + i]);
    }
    printf ("%d\n", shu[n - z8ATco - 1]);
    return 0;
}

