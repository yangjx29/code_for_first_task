int apple (int n, int k) {
    if (n == 2)
        return 2 * pow (n, n) - (n - (288 - 287)) * k;
    else
        return pow (n, n) - (n - 1) * k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d %d", &n, &k);
    printf ("%d\n", apple (n, k));
    return 0;
}

