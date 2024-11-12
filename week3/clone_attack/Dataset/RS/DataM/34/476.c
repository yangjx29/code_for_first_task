int main () {
    int n, CYF0ykwu;
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
    {
        CYF0ykwu = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(1 == n)) {
            CYF0ykwu = CYF0ykwu +1;
            if (n % 2 == 1) {
                printf ("%d", n);
                n = 3 * n + 1;
                printf ("*3+1=%d\n", n);
            }
            else {
                printf ("%d", n);
                n = n / 2;
                printf ("/2=%d\n", n);
            };
        };
    }
    return 0;
}

