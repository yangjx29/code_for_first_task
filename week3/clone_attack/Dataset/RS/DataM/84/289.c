int main () {
    int a [100];
    int npsWwq;
    int hWJQT6AnY3a;
    int gQS25IXTE;
    scanf ("%d", &npsWwq);
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
    {
        hWJQT6AnY3a = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hWJQT6AnY3a <= npsWwq) {
            scanf ("%d", &a[hWJQT6AnY3a]);
            hWJQT6AnY3a = hWJQT6AnY3a + 1;
        };
    }
    {
        hWJQT6AnY3a = 1;
        while (hWJQT6AnY3a <= npsWwq - 1) {
            if (a[hWJQT6AnY3a] > a[hWJQT6AnY3a + 1]) {
                gQS25IXTE = a[hWJQT6AnY3a];
                a[hWJQT6AnY3a] = a[hWJQT6AnY3a + 1];
                a[hWJQT6AnY3a + 1] = gQS25IXTE;
            }
            hWJQT6AnY3a++;
        };
    }
    printf ("%d\n", a[npsWwq]);
    for (hWJQT6AnY3a = 1; hWJQT6AnY3a <= npsWwq - 2; hWJQT6AnY3a++)
        if (a[hWJQT6AnY3a] > a[hWJQT6AnY3a + 1]) {
            gQS25IXTE = a[hWJQT6AnY3a];
            a[hWJQT6AnY3a] = a[hWJQT6AnY3a + 1];
            a[hWJQT6AnY3a + 1] = gQS25IXTE;
        }
    printf ("%d\n", a[npsWwq - 1]);
    return 0;
}

