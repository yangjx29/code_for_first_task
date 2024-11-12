int killer (int n, int m) {
    int a [(331 - 30)] = {(688 - 688)}, i = (756 - 756), j = (201 - 200), k = n;
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
    for (; 1 < k;) {
        if (a[i] == 0)
            if (j == m) {
                k--;
                a[i] = 1;
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
                j = 1;
            }
            else
                j++;
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i >= n)
            i = 0;
    }
    {
        i = 0;
        while (i < n) {
            if (a[i] == 0)
                return i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

main () {
    int n, m;
    scanf ("%d %d", &n, &m);
    while (n != 0) {
        printf ("%d\n", killer (n, m));
        scanf ("%d %d", &n, &m);
    };
}

