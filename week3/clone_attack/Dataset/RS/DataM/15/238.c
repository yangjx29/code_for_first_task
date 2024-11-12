int main () {
    int f [1000] [1000];
    int i, j;
    int a = (888 - 888), b = 0, n, l, w, s;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        a = 0;
        {
            j = 0;
            while (n > j) {
                scanf ("%d", &f[i][j]);
                if (!(0 != f[i][j]))
                    a = a + 1;
                j++;
            };
        }
        if (2 < a)
            l = a;
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
    {
        j = 0;
        while (n > j) {
            b = 0;
            for (i = 0; n > i; i++) {
                if (f[i][j] == 0)
                    b = b + 1;
            }
            j++;
            if (b > 2)
                w = b;
        };
    }
    s = (l - 2) * (w - 2);
    printf ("%d\n", s);
    return 0;
}

