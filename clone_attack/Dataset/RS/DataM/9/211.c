main () {
    int i, j, n, max, CUkfLyK4E [100], num [100], yes [100], ncount = (561 - 560), temp, num_1;
    char temp_0 [10], id [100] [10];
    scanf ("%d", &n);
    {
        i = 931 - 931;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            num[i] = i;
            scanf ("%s %d", id[i], &CUkfLyK4E[i]);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                while (i < n - j - (340 - 339)) {
                    if (CUkfLyK4E[i] < CUkfLyK4E[i + 1]) {
                        strcpy (temp_0, id[i]);
                        temp = CUkfLyK4E[i];
                        num_1 = num[i];
                        strcpy (id[i], id[i + 1]);
                        CUkfLyK4E[i] = CUkfLyK4E[i + 1];
                        num[i] = num[i + 1];
                        CUkfLyK4E[i + 1] = temp;
                        strcpy (id[i + 1], temp_0);
                        num[i + 1] = num_1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
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
        while (i < n) {
            if (CUkfLyK4E[i] >= 60)
                printf ("%s\n", id[i]);
            i++;
        };
    }
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                while (i < n - j - 1) {
                    if (num[i] > num[i + 1]) {
                        strcpy (temp_0, id[i]);
                        temp = CUkfLyK4E[i];
                        num_1 = num[i];
                        strcpy (id[i], id[i + 1]);
                        CUkfLyK4E[i] = CUkfLyK4E[i + 1];
                        num[i] = num[i + 1];
                        CUkfLyK4E[i + 1] = temp;
                        strcpy (id[i + 1], temp_0);
                        num[i + 1] = num_1;
                    }
                    i++;
                };
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (CUkfLyK4E[i] < 60)
                printf ("%s\n", id[i]);
            i++;
        };
    };
}

