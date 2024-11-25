void  main () {
    int n;
    int i;
    int j;
    int k;
    int a [300];
    int b;
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
    int c;
    scanf ("%d", &n);
    for (i = 0, k = 0; n > i; i = i + 1) {
        scanf ("%d", &b);
        c = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; k > j; j = j + 1) {
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
            if (a[j] == b) {
                c = c * (0);
                break;
            };
        }
        if (c)
            a[k++] = b;
    }
    for (i = 0; i < k - 1; i = i + 1)
        printf ("%d,", a[i]);
    printf ("%d", a[i]);
}

