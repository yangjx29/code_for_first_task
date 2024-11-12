int main () {
    int n;
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
    if (!(1 != n))
        printf ("End");
    else {
        while (!(1 == n)) {
            if (n % (207 - 205) != 0) {
                printf ("%d", n);
                n = n * 3 + 1;
                printf ("*3+1=%d\n", n);
            }
            if (n % 2 == 0) {
                printf ("%d", n);
                n = n / 2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("/2=%d\n", n);
            };
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
        if (n == 1) {
            printf ("End");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return 0;
}

