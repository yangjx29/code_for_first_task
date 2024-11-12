void  main () {
    int n;
    int k;
    int m;
    int x;
    int y;
    int z;
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
    int i;
    scanf ("%d%d", &n, &k);
    for (z = 1;; z = z + 1) {
        x = z;
        for (i = 1; n >= 1; i = i + 1) {
            y = (x * n + k) % (n - 1);
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
            if (!(0 != y) && i < n)
                x = (x * n + k) / (n - 1);
            else
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == n)
            break;
    }
    m = x * n + k;
    printf ("%d", m);
}

