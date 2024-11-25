int main () {
    int m;
    int n;
    int i;
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
    m = (334 - 334);
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (n == 1) {
                break;
            }
            else if (n % 2 == 0) {
                m = n / 2;
                printf ("%d/2=%d\n", n, m);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                n = m;
                m = 0;
            }
            else {
                m = 3 * n + 1;
                printf ("%d*3+1=%d\n", n, m);
                n = m;
                m = 0;
            }
            i++;
        };
    }
    return 0;
}

