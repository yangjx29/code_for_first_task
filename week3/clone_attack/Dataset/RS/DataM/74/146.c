void  main () {
    int UvKL2rNjsHA;
    int sum;
    int Lr9WPVJ;
    int n;
    int xOvcwCVnpbo;
    int j;
    int QW4oFYTfP;
    int p;
    int a9X6nVAfK;
    int a [100];
    int b [1000];
    UvKL2rNjsHA = 0;
    sum = 0;
    scanf ("%d %d", &Lr9WPVJ, &n);
    for (xOvcwCVnpbo = Lr9WPVJ; n >= xOvcwCVnpbo; xOvcwCVnpbo = xOvcwCVnpbo + 1) {
        int a9X6nVAfK = (int) sqrt (xOvcwCVnpbo);
        for (j = 2; j <= a9X6nVAfK; j = j + 1) {
            if (xOvcwCVnpbo % j == 0)
                break;
        }
        if (j > a9X6nVAfK) {
            QW4oFYTfP = xOvcwCVnpbo;
            UvKL2rNjsHA = 0;
            do {
                a[UvKL2rNjsHA] = QW4oFYTfP % 10;
                UvKL2rNjsHA++;
                QW4oFYTfP = QW4oFYTfP / 10;
            }
            while (QW4oFYTfP > 0);
            for (p = 0; p < UvKL2rNjsHA / 2; p++) {
                if (a[p] != a[UvKL2rNjsHA -p - 1])
                    break;
            }
            if (p >= UvKL2rNjsHA / 2) {
                b[sum] = xOvcwCVnpbo;
                sum++;
            };
        };
    }
    if (sum == 0)
        printf ("no");
    else {
        for (a9X6nVAfK = 0; a9X6nVAfK < sum - 1; a9X6nVAfK = a9X6nVAfK + 1)
            printf ("%d,", b[a9X6nVAfK]);
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
        printf ("%d", b[sum - 1]);
    };
}

