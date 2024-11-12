int main () {
    int i;
    int j;
    int k;
    int a;
    int fqmwsK;
    int c;
    int d;
    int e;
    int max;
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
    int flag;
    int sz [(514 - 506)] [(518 - 510)];
    scanf ("%d,%d", &a, &fqmwsK);
    {
        i = 968 - 968;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > i) {
            {
                j = 720 - 720;
                while (fqmwsK > j) {
                    scanf ("%d", &(sz[i][j]));
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
        i = 249 - 249;
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
        while (i < a) {
            int max = (558 - 558);
            {
                j = 0;
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
                while (j < fqmwsK) {
                    if (sz[i][j] > max) {
                        max = sz[i][j];
                        d = j;
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
                    j = j + 1;
                };
            }
            flag = (248 - 247);
            {
                k = 0;
                while (k < a) {
                    if (max > sz[k][d]) {
                        flag = 0;
                        break;
                    }
                    k = k + 1;
                };
            }
            if (flag) {
                printf ("%d+%d", i, d);
                break;
            }
            i++;
        };
    }
    if (!flag)
        ;
    return 0;
}

