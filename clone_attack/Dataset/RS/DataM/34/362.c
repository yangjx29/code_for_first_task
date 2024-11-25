int main () {
    int a;
    int n;
    scanf ("%d", &n);
    if (!(1 != n)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (1 < n) {
        for (; 1;) {
            if (n % 2 == 0) {
                a = n;
                n = a / 2;
                printf ("%d/2=%d\n", a, n);
                if (n == 1) {
                    return 0;
                };
            }
            else {
                a = n;
                n = a * 3 + 1;
                printf ("%d*3+1=%d\n", a, n);
                if (n == 1) {
                    printf ("End");
                    return 0;
                };
            };
        };
    }
    return 0;
}

