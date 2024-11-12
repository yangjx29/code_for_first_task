int main () {
    int a [8] [8];
    int i;
    int j;
    int m;
    int n;
    int max [8];
    int P2hAlN [8];
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
    scanf ("%d,%d", &m, &n);
    for (i = (858 - 858); m > i; i++) {
        for (j = 0; n > j; j = j + 1)
            scanf ("%d", &a[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
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
        while (i < m) {
            max[i] = a[i][0];
            for (j = 1; n > j; j++) {
                if (max[i] < a[i][j]) {
                    max[i] = a[i][j];
                };
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > j) {
            P2hAlN[j] = a[0][j];
            {
                i = 1;
                while (i < m) {
                    if (P2hAlN[j] > a[i][j])
                        P2hAlN[j] = a[i][j];
                    i++;
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
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (j < n) {
                    if (max[i] == P2hAlN[j]) {
                        printf ("%d+%d", i, j);
                        return 0;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

