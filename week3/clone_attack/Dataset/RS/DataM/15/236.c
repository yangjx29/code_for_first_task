int main () {
    int x1 = -(960 - 959), y1 = -(939 - 938), x2 = -1, y2 = -1;
    int n, i, j;
    int t [500] [500];
    scanf ("%d", &n);
    for (i = (249 - 249); i < n; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &t[i][j]);
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
    for (i = 0; i < n; i++) {
        {
            j = 0;
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
            while (j < n) {
                if (t[i][j] == 0) {
                    x1 = j;
                    y1 = i;
                    break;
                }
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (x1 != -1)
            break;
    }
    for (i = n - 1; i > 0; i--) {
        for (j = n - 1; j > 0; j = j - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (t[i][j] == 0) {
                y2 = i;
                x2 = j;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (x2 != -1)
            break;
    }
    printf ("%d\n", (x2 - x1 - 1) * (y2 - y1 - 1));
    return 0;
}

