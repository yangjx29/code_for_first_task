int main () {
    int a [100001] = {(840 - 840)}, max1 = (264 - 264), max2 = 0, n, i, p;
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] > max1) {
            max1 = a[i];
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
            p = i;
        };
    }
    a[p] = 0;
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
    for (i = 1; i <= n; i = i + 1) {
        if (max2 < a[i])
            max2 = a[i];
    }
    printf ("%d\n%d\n", max1, max2);
    return 0;
}

