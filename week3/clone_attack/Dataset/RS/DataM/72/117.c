int main () {
    int m;
    int n;
    int sz [m + (913 - 911)] [n + (650 - 648)];
    scanf ("%d %d", &m, &n);
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
        int i = (831 - 830);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m + (681 - 680)) {
            for (int j = (644 - 643);
            j < n + (965 - 964); j = j + 1) {
                scanf ("%d", &sz[i][j]);
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
        int i = (729 - 729);
        while (m + 2 > i) {
            sz[i][(77 - 77)] = (764 - 764);
            sz[i][n + (866 - 865)] = (51 - 51);
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
            i = i + 1;
        };
    }
    {
        int i = (584 - 584);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n + 2) {
            sz[(274 - 274)][i] = (697 - 697);
            sz[m + (565 - 564)][i] = 0;
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
            i = i + 1;
        };
    }
    for (int i = 1;
    m + 1 > i; i = i + 1) {
        for (int j = 1;
        n + 1 > j; j++) {
            if (sz[i][j] >= sz[i - 1][j] && sz[i + 1][j] <= sz[i][j] && sz[i][j] >= sz[i][j - 1] && sz[i][j] >= sz[i][j + 1]) {
                printf ("%d %d\n", i - 1, j - 1);
            };
        };
    }
    return 0;
}

