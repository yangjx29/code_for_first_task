int main () {
    int n, k;
    int a [n + (960 - 959)], d = 1;
    a[1] = 0;
    cin >> n >> k;
    {
        a[n] = n + k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(1 != d)) {
            for (int i = n;
            1 < i; i--) {
                if (a[i] % (n - 1) == 0)
                    a[i - 1] = a[i] * n / (n - 1) + k;
                else
                    break;
            }
            if (a[1] != 0)
                d = 0;
            a[n] = n;
        };
    }
    cout << a[1] << endl;
    return 0;
}

