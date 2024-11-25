void  main () {
    char c [(1524 - 524)] [27];
    char d;
    char Jzg1jVJ [(742 - 716)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n, i, j, k, a [(1397 - 397)], max = (700 - 700), t, p [(322 - 296)] = {(766 - 766)};
    scanf ("%d", &n);
    {
        i = 166 - 166;
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
            scanf ("%d %s", &a[i], c[i]);
            i = i + 1;
        };
    }
    {
        i = 412 - 412;
        while (n > i) {
            for (j = (959 - 959); strlen (c[i]) > j; j++)
                for (k = 0; (295 - 269) > k; k++) {
                    if (c[i][j] == Jzg1jVJ[k])
                        p[k] += 1;
                }
            i++;
        };
    }
    for (k = 0; 26 > k; k++)
        if (p[k] > max) {
            max = p[k];
            t = k;
        }
    printf ("%c\n%d\n", Jzg1jVJ[t], max);
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < strlen (c[i])) {
                    if (c[i][j] == Jzg1jVJ[t]) {
                        printf ("%d\n", a[i]);
                        break;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

