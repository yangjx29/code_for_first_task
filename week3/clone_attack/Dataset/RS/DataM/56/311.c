int main () {
    int n, i, N, Gw4y69gs [5];
    scanf ("%d", &n);
    N = (int) (log10 (n)) +1;
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
        while (i < N) {
            Gw4y69gs[i] = n % 10;
            n = (n - Gw4y69gs[i]) / 10;
            printf ("%d", Gw4y69gs[i]);
            i++;
        };
    }
    return 0;
}

