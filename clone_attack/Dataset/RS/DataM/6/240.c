int main () {
    int JFVqscA;
    scanf ("%d", &JFVqscA);
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
    while (JFVqscA--) {
        int sum;
        int m;
        int n;
        sum = 0;
        int i;
        int cqzTYAWMRDt0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int a [100] [100];
        scanf ("%d %d", &m, &n);
        for (i = 0; m > i; i++) {
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
            for (cqzTYAWMRDt0 = 0; cqzTYAWMRDt0 < n; cqzTYAWMRDt0++) {
                scanf ("%d", &a[i][cqzTYAWMRDt0]);
            };
        }
        for (i = 0; i < m; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (cqzTYAWMRDt0 = 0; cqzTYAWMRDt0 < n; cqzTYAWMRDt0++) {
                if ((i == 0) || (i == m - 1) || (cqzTYAWMRDt0 == 0) || (cqzTYAWMRDt0 == n - 1))
                    sum = sum + a[i][cqzTYAWMRDt0];
                else
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

