int main () {
    int sum (int n, int k);
    int n, k, s;
    scanf ("%d %d", &n, &k);
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
    s = sum (n, k);
    printf ("%d", s);
    return 0;
}

int sum (int n, int k) {
    int s, i;
    s = n;
    for (i = 1; n - 1 > i; i++)
        s = s * n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    s = s - k;
    s = s * n + k;
    return s;
}

