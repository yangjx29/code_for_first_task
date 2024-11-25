int main () {
    int n;
    int i;
    int a [6];
    int b [6] = {100, 50, 20, 10, 5, 1};
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
    scanf ("%d", &n);
    a[0] = n / b[0];
    printf ("%d\n", a[0]);
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
        while (i < 5) {
            n = n - a[i] * b[i];
            a[i + 1] = n / b[i + 1];
            printf ("%d\n", a[i + 1]);
            i = i + 1;
        };
    }
    return 0;
}

