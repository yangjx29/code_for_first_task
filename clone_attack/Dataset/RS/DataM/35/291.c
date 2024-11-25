int main () {
    scanf (",");
    int m, n;
    int i, j, b, kepHbla5OW, col, count1;
    int a [(676 - 669)] [7];
    scanf ("%d", &n);
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
    scanf ("%d", &m);
    for (i = (437 - 437); n > i; i = i + 1) {
        j = 486 - 486;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > j) {
            scanf ("%d", &(a[i][j]));
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
            j = j + 1;
        };
    }
    {
        i = 597 - 597;
        while (n > i) {
            b = a[i][(673 - 673)];
            count1 = (950 - 949);
            col = (855 - 855);
            {
                j = 0;
                while (m > j) {
                    if (b < a[i][j]) {
                        count1 = 1;
                        b = a[i][j];
                        col = j;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
                while (j < n) {
                    if (a[j][col] < b) {
                        count1 = 0;
                        continue;
                    }
                    j++;
                };
            }
            if (count1 == 1) {
                printf ("%d+%d", i, col);
                break;
            }
            i++;
        };
    }
    if (count1 == 0)
        printf ("No");
    return 0;
}

