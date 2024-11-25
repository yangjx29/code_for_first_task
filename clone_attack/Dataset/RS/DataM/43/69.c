int main () {
    int m, a, b, i, k;
    scanf ("%d", &m);
    for (a = 3; a <= m / 2; a = a + 2) {
        b = m - a;
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; a - 1 >= i;) {
            if (a % i == 0)
                break;
            else
                i = i + 1;
        }
        k = 2;
        for (; k <= b - 1;) {
            if (b % k == 0)
                break;
            else if (k == b - 1 && i == a)
                printf ("%d %d\n", a, b);
            else
                ;
            k = k + 1;
        };
    };
}

