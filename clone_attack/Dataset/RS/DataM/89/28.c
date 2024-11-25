int main () {
    int n, a [100000], b [100000], i = 1, j = 1, ming;
    scanf ("%d", &n);
    for (int k = 0;
    n > k; k++) {
        a[k] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[k] = 0;
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
    while (!(0 == i) || !(0 == j)) {
        scanf ("%d %d", &i, &j);
        b[j] = b[j] + 1;
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
        a[i] = a[i] + 1;
    }
    for (int k = 0;
    n > k; k++) {
        ming = ming + 1;
        if (b[k] == n - 1 && a[k] == 0)
            printf ("%d\n", k);
    }
    if (ming == 0) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

