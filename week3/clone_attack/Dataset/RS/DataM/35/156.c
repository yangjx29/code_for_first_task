int main () {
    int r;
    int m;
    int n;
    int RvA3mRqn6 [(511 - 503)] [(177 - 169)];
    int i;
    int j;
    int p [(604 - 596)];
    int q [(797 - 789)];
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
    r = (609 - 609);
    scanf ("%d,%d", &m, &n);
    {
        i = 498 - 498;
        while (m > i) {
            {
                j = 792 - 792;
                while (j < n) {
                    scanf ("%d", &(RvA3mRqn6[i][j]));
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
        i = 67 - 67;
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
        while (i < m) {
            p[i] = (191 - 191);
            for (j = (152 - 152); j < n; j++) {
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
                if (RvA3mRqn6[i][j] > RvA3mRqn6[i][p[i]]) {
                    p[i] = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            i++;
        };
    }
    for (j = (726 - 726); j < n; j++) {
        q[j] = (747 - 747);
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
        for (i = (657 - 657); i < m; i++) {
            if (RvA3mRqn6[i][j] < RvA3mRqn6[q[j]][j]) {
                q[j] = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    for (i = (209 - 209); i < m; i++) {
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
        for (j = 0; j < n; j++) {
            if (p[i] == j && q[j] == i) {
                r = 1;
                printf ("%d+%d", i, j);
                break;
            };
        };
    }
    if (r == 0) {
    }
    return 0;
}

