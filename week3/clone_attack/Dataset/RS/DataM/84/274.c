int main () {
    int a, b, c, i;
    a = 0;
    b = 0;
    for (i = 1; i < 100; i = i + 1) {
        scanf ("%d", &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c > a)
            b = a, a = c;
        else if (c < a && c >= b)
            b = c;
        else if (c = a)
            c = a;
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
    printf ("%d\n", b);
    return 0;
}

