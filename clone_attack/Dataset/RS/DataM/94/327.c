int main () {
    int N, JnkZXvY [500], b [500], k, y4lmDzbuQIhv, j, t;
    y4lmDzbuQIhv = 0;
    scanf ("%d", &N);
    for (; N > y4lmDzbuQIhv;) {
        scanf ("%d", &JnkZXvY[y4lmDzbuQIhv]);
        y4lmDzbuQIhv = y4lmDzbuQIhv + 1;
    }
    y4lmDzbuQIhv = 0;
    k = 0;
    for (; N > y4lmDzbuQIhv;) {
        if (JnkZXvY[y4lmDzbuQIhv] % 2 == 1) {
            k = k + 1;
            b[k - 1] = JnkZXvY[y4lmDzbuQIhv];
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
        y4lmDzbuQIhv = y4lmDzbuQIhv + 1;
    }
    scanf ("%d", &N);
    for (j = 0; k - 1 > j; j = j + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (y4lmDzbuQIhv = 0; y4lmDzbuQIhv < k - j - 1; y4lmDzbuQIhv = y4lmDzbuQIhv + 1) {
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
            if (b[y4lmDzbuQIhv] > b[y4lmDzbuQIhv + 1]) {
                t = b[y4lmDzbuQIhv];
                b[y4lmDzbuQIhv] = b[y4lmDzbuQIhv + 1];
                b[y4lmDzbuQIhv + 1] = t;
            };
        };
    }
    y4lmDzbuQIhv = 0;
    while (y4lmDzbuQIhv < k) {
        if (y4lmDzbuQIhv < k - 1) {
            printf ("%d,", b[y4lmDzbuQIhv]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            y4lmDzbuQIhv = y4lmDzbuQIhv + 1;
        }
        else {
            printf ("%d", b[y4lmDzbuQIhv]);
            y4lmDzbuQIhv = y4lmDzbuQIhv + 1;
        };
    }
    return 0;
}

