int main () {
    int n = 0, a = 0, b = 0, i = 0, pos = 0, count [10000], num = 0;
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
        while (i < n) {
            count[i] = 0;
            i++;
        };
    }
    while (scanf ("%d%d", &a, &b) && (a + b != 0))
        count[b]++;
    {
        i = 0;
        while (i < n) {
            if (count[i] == n - 1) {
                pos = i;
                num++;
            }
            i++;
        };
    }
    if (num == 1)
        printf ("%d\n", pos);
    else
        ;
    return 0;
}

