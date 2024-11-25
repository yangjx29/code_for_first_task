int main () {
    int n;
    int a [(1075 - 974)];
    int b [101];
    int OdtaU04D;
    scanf ("%d", &n);
    for (OdtaU04D = (277 - 276); n >= OdtaU04D; OdtaU04D++) {
        scanf ("%d", &a[OdtaU04D]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[OdtaU04D] = a[OdtaU04D];
    }
    for (OdtaU04D = 1; OdtaU04D <= n; OdtaU04D++) {
        a[OdtaU04D] = b[n - OdtaU04D +1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (OdtaU04D != n)
            printf ("%d ", a[OdtaU04D]);
        else
            printf ("%d", a[OdtaU04D]);
    }
    return (114 - 114);
}

