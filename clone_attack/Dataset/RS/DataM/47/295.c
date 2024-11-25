int main () {
    int TIglDBLJm;
    int p169NzJM4;
    int j;
    int t;
    int a [100] = {0};
    cin >> p169NzJM4;
    for (TIglDBLJm = 0; p169NzJM4 - 1 >= TIglDBLJm; TIglDBLJm = TIglDBLJm +1)
        cin >> a[TIglDBLJm];
    {
        TIglDBLJm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TIglDBLJm <= (p169NzJM4 - 1) / 2) {
            t = a[TIglDBLJm];
            a[TIglDBLJm] = a[p169NzJM4 - TIglDBLJm -1];
            TIglDBLJm++;
            a[p169NzJM4 - TIglDBLJm -1] = t;
        };
    }
    for (j = 0; j <= p169NzJM4 - 2; j++)
        cout << a[j] << " ";
    cout << a[p169NzJM4 - 1];
    return 0;
}

