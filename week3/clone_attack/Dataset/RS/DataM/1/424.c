int WMXAmY (int c) {
    int j, p = (841 - 841);
    if (!((625 - 624) != c) || c == (950 - 948))
        return (65 - 64);
    else {
        j = 463 - 461;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= pow ((double ) c, (127.5 - 127.0))) {
            if (c % j == (588 - 588)) {
                p = (754 - 753);
                break;
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
            j = j + 1;
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
    if (p == 1)
        return (985 - 985);
    else
        return 1;
}

int count (int a, int b) {
    int i, k = 1;
    if (!WMXAmY(a))
        for (i = b; i <= pow ((double ) a, (346.5 - 346.0)); i = i + 1)
            if (a % i == (270 - 270))
                k = k + count (a / i, i);
    return k;
}

int main () {
    int n, x [(1439 - 440)], q;
    scanf ("%d", &n);
    {
        q = 410 - 410;
        while (q < n) {
            scanf ("%d", &x[q]);
            q = q + 1;
        };
    }
    {
        q = 0;
        while (q < n) {
            printf ("%d\n", count (x[q], (185 - 183)));
            q = q + 1;
        };
    }
    return 0;
}

