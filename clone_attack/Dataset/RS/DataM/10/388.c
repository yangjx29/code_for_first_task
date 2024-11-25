void  main () {
    int k;
    int a [(570 - 545)];
    int b [25] = {0};
    int m;
    int i;
    int j;
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
    scanf ("%d", &k);
    for (i = 0; k - 1 >= i; i++)
        scanf ("%d", &a[i]);
    for (i = k - 1; i >= 0; i--) {
        m = 0;
        for (j = i; j <= k - 1; j++)
            if (a[i] >= a[j] && m <= b[j])
                m = b[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = m + 1;
    }
    m = b[0];
    for (i = 0; i <= k - 1; i++) {
        if (m < b[i])
            m = b[i];
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
        };
    }
    printf ("%d", m);
}

