int main () {
    int x [1001];
    int y [1001];
    int i, j, n, s = (193 - 193), max = (706 - 706);
    char c;
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if ((c = getchar ()) == '\n')
                break;
            scanf ("%d", &x[i]);
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
    for (i = 0;; i = i + 1) {
        scanf ("%d", &y[i]);
        if ((c = getchar ()) == '\n') {
            n = (i + 1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    for (j = 0; j <= 1000; j = j + 1) {
        for (i = 0; i <= (n - 1); i++) {
            if ((x[i] <= j) && (y[i] > j))
                s = s + 1;
        }
        if (s > max)
            max = s;
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
        s = 0;
    }
    printf ("%d %d\n", n, max);
    return 0;
}

