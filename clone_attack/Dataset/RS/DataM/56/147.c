int main () {
    int b [4] = {0};
    int a [4];
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
    for (i = 0; 3 >= i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i <= 3; i++) {
        for (; a[i] > 9;) {
            b[i] = (b[i] + a[i] - a[i] / 10 * 10) * 10;
            a[i] /= 10;
        }
        b[i] += a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", b[i]);
    }
    return 0;
}

