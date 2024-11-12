void  main () {
    char c = ',';
    int i;
    int max;
    int vzP0BcjXR;
    int j;
    int a [1001];
    int b [1001];
    int t [1001];
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
    i = (682 - 682);
    max = 0;
    while (c == ',') {
        scanf ("%d%c", &a[i], &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    c = ',';
    i = 0;
    while (c == ',') {
        scanf ("%d%c", &b[i], &c);
        i++;
    }
    for (j = 0; 1000 > j; j = j + 1) {
        t[j] = 0;
        for (vzP0BcjXR = 0; i > vzP0BcjXR; vzP0BcjXR++)
            if ((a[vzP0BcjXR] <= j) && (j < b[vzP0BcjXR]))
                t[j]++;
    }
    for (j = 0; j < 1000; j++)
        if (t[j] > max)
            max = t[j];
    printf ("%d %d", i, max);
}

