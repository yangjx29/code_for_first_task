void  main () {
    int n, m = 0, i, a [(309 - 299)];
    scanf ("%d", &n);
    do {
        a[m] = n % 10;
        m = m + 1;
        n = n / (10);
    }
    while (n > 0);
    {
        i = 0;
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
        while (i < m) {
            printf ("%d", a[i]);
            i = i + 1;
        };
    };
}

