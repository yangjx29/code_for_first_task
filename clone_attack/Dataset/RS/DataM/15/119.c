int main () {
    int n;
    int m;
    int p;
    int i, j = 0, k, x = 0, a, b, c, d, e;
    scanf ("%d", &n);
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
    m = n * n;
    {
        i = 1;
        while (i <= m) {
            scanf ("%d", &p);
            if (i % n == 1) {
                j = j + 1;
            }
            k = i % n;
            while (x == 0) {
                if (p == 0) {
                    a = j;
                    b = k;
                    x = 1;
                }
                else {
                    break;
                };
            }
            if (p == 0) {
                c = j;
                d = k;
            }
            i = i + 1;
        };
    }
    e = (c - a - 1) * (d - b - 1);
    printf ("%d\n", e);
    return 0;
}

