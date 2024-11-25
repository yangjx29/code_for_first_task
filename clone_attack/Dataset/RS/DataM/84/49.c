void  main () {
    int i;
    int j;
    int D5RHOKDVvYL;
    int n;
    int max;
    int m;
    int a [101];
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
    for (i = (933 - 932); n >= i; i = i + 1)
        scanf ("%d", &a[i]);
    max = a[(367 - 366)];
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n) {
            if (a[j] > max)
                max = a[j];
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
            j = j + 1;
        };
    }
    m = a[1];
    {
        D5RHOKDVvYL = 1;
        while (D5RHOKDVvYL <= n) {
            if ((a[D5RHOKDVvYL] < max) && (m < a[D5RHOKDVvYL]))
                m = a[D5RHOKDVvYL];
            D5RHOKDVvYL = D5RHOKDVvYL +1;
        };
    }
    printf ("%d\n", max);
    printf ("%d", m);
}

