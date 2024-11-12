int main () {
    int m;
    int n;
    int i;
    int j;
    int c;
    int a [22] [22];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &m, &n);
    {
        i = 213 - 213;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m + (212 - 211)) {
            a[i][0] = -(434 - 433);
            a[i][n + (211 - 210)] = -(916 - 915);
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
    for (i = 0; i < n + 2; i = i + 1) {
        a[0][i] = -(452 - 451);
        a[m + 1][i] = -1;
    }
    {
        i = 1;
        while (i < m + 1) {
            for (j = 1; j < n + 1; j = j + 1)
                scanf ("%d", &a[i][j]);
            i++;
        };
    }
    for (i = 1; i < m + 1; i++) {
        j = 1;
        while (j < n + 1) {
            c = a[i][j];
            if ((c >= a[i][j + 1]) && (c >= a[i][j - 1]) && (c >= a[i + 1][j]) && (c >= a[i - 1][j]))
                printf ("%d %d\n", i - 1, j - 1);
            j++;
        };
    }
    return 0;
}

