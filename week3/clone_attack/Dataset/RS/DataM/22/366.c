int main () {
    int a;
    int b;
    int n;
    a = 0;
    b = 0;
    while (scanf ("%d,", &n) != EOF) {
        if (a < n) {
            b = a;
            a = n;
        }
        else if (n < a)
            if (n > b)
                b = n;
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
    if (b == 0)
        printf ("No");
    else
        printf ("%d", b);
}

