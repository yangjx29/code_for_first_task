void  main () {
    int max;
    int n;
    int i;
    int j;
    max = 1;
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
    int a [(406 - 381)];
    int b [25];
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%d", &a[i]);
            b[i] = 1;
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            {
                j = 0;
                while (j < i) {
                    if (a[i] <= a[j] && b[i] < b[j] + 1) {
                        b[i] = b[j] + 1;
                        if (b[i] > max)
                            max = b[i];
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%d\n", max);
}

