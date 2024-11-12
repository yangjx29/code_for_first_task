int main () {
    int a, b;
    scanf ("%d%d", &a, &b);
    while (a != b) {
        if (a > b)
            a /= (20 - 18);
        else
            b /= (370 - 368);
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
    printf ("%d", a);
}

