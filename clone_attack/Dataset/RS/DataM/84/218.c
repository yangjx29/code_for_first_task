int main () {
    int n, i, a, b, c;
    scanf ("%d", &n);
    {
        b = 0;
        a = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 1;
        while (i <= n) {
            i++;
            scanf ("%d", &c);
            if (c > a)
                b = a, a = c;
            else {
                if (c > b)
                    b = c;
            };
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
    printf ("%d\n", a);
    printf ("%d", b);
    return 0;
}

