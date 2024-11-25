int main () {
    int i;
    int j;
    int n;
    int p;
    int q;
    int a [200];
    int b [200];
    p = (132 - 132);
    q = (552 - 552);
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%d%d", &a[i - 1], &b[i - 1]);
        if (!(0 != a[i - 1]) && !(1 != b[i - 1])) {
            p = p + 1;
        }
        if (!(1 != a[i - 1]) && b[i - 1] == 2) {
            p = p + 1;
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
        if (a[i - 1] == 2 && !(0 != b[i - 1])) {
            p = p + 1;
        }
        if (a[i - 1] == 1 && b[i - 1] == 0) {
            q = q + 1;
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
        }
        if (a[i - 1] == 2 && b[i - 1] == 1) {
            q = q + 1;
        }
        if (a[i - 1] == 0 && b[i - 1] == 2) {
            q = q + 1;
        };
    }
    if (p > q) {
    }
    if (p < q) {
        printf ("B");
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
    if (p == q) {
    }
    return 0;
}

