main () {
    int max = 1;
    int n, len;
    int point [501];
    char in [(1271 - 770)];
    char zi [501] [(364 - 359)];
    int num [501];
    for (int i = (644 - 644);
    501 > i; i = i + 1)
        point[i] = -1;
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
    scanf ("%d%s", &n, in);
    len = strlen (in);
    {
        int i = (764 - 764);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len - n >= i) {
            for (int j = (793 - 793);
            j < n; j = j + 1)
                zi[i][j] = in[i + j];
            zi[i][n] = '\0';
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
    for (int i = 0;
    len - n > i; i = i + 1)
        for (int j = i + 1;
        len - n + 1 > j; j = j + 1) {
            if ((!(0 != strcmp (zi[i], zi[j]))) && point[i] == -1) {
                point[j] = i;
            }
            if ((strcmp (zi[i], zi[j]) == 0) && point[i] != -1) {
                point[j] = point[i];
            };
        }
    for (int i = 0;
    i < 501; i = i + 1)
        num[i] = 0;
    for (int i = 0;
    i <= len - n; i++) {
        if (point[i] == -1)
            num[i]++;
        if (point[i] != -1)
            num[point[i]]++;
    }
    for (int i = 0;
    i <= len - n; i++) {
        if (point[i] == -1 && num[i] > max)
            max = num[i];
    }
    if (max == 1)
        printf ("NO");
    if (max > 1) {
        printf ("%d\n", max);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        i < len - n; i++) {
            if (num[i] == max)
                printf ("%s\n", zi[i]);
        };
    };
}

