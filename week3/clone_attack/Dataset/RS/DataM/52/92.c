int main () {
    int n, m, xWGKCeQca37M;
    int a [n];
    int *iZNz645YI = NULL, *nlN8pf7 = NULL;
    cin >> n >> m;
    for (xWGKCeQca37M = 0; n > xWGKCeQca37M; xWGKCeQca37M = xWGKCeQca37M + 1)
        cin >> a[xWGKCeQca37M];
    iZNz645YI = a;
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
    nlN8pf7 = a + n;
    for (xWGKCeQca37M = 0; xWGKCeQca37M < n - m; xWGKCeQca37M = xWGKCeQca37M + 1) {
        *(nlN8pf7 + xWGKCeQca37M) = *(iZNz645YI + xWGKCeQca37M);
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
    iZNz645YI = a + n - m;
    for (xWGKCeQca37M = 0; xWGKCeQca37M < n - 1; xWGKCeQca37M = xWGKCeQca37M + 1) {
        cout << *(iZNz645YI = iZNz645YI + 1) << " ";
    }
    cout << *iZNz645YI << endl;
    return 0;
}

