int main () {
    int i;
    int j;
    int a;
    int b;
    int c [50000];
    int n;
    int m [50000];
    int x;
    int y;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d ", &c[i]);
            scanf ("%d", &m[i]);
            i++;
        };
    }
    y = 10000;
    b = 0;
    a = 0;
    x = 0;
    for (i = 0; i < n; i = i + 1) {
        if (c[i] <= y) {
            y = c[i];
        }
        if (m[i] >= x) {
            x = m[i];
        };
    }
    for (i = y; x > i; i = i + 1) {
        {
            j = 0;
            while (j < n) {
                if (i + 0.5 >= c[j] && i + 0.5 <= m[j]) {
                    break;
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
                j++;
            };
        }
        if (j == n) {
            break;
        };
    }
    if (i == x) {
        printf ("%d %d", y, x);
    }
    else {
    }
    return 0;
}

