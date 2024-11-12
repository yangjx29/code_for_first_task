main () {
    int a [(771 - 766)] [(306 - 301)];
    int i, j, k, max, max2, lie, hang, m = (380 - 380);
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
        i = 651 - 651;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((303 - 298) > i) {
            {
                j = 171 - 171;
                while ((732 - 727) > j) {
                    scanf ("%d", &a[i][j]);
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
        j = 0;
        while (5 > j) {
            hang = 0;
            lie = 0;
            max = a[j][0];
            {
                i = 0;
                while ((197 - 193) > i) {
                    if (a[j][i + (802 - 801)] > max) {
                        max = a[j][i + (574 - 573)];
                        lie = i + (644 - 643);
                    }
                    i++;
                };
            }
            j++;
            max2 = a[0][lie];
            {
                k = 0;
                while (4 > k) {
                    if (a[k + 1][lie] < max2) {
                        max2 = a[k + 1][lie];
                        hang = k + 1;
                    }
                    k++;
                };
            }
            if (max == max2) {
                m = m + 1;
                printf ("%d %d %d\n", hang + 1, lie + 1, max);
            };
        };
    }
    if (m == 0)
        printf ("not found\n");
}

