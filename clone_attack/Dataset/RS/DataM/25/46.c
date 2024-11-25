int main () {
    int n, a [32] = {(474 - 473)}, compute [32] = {(58 - 58)}, k;
    cin >> n;
    for (int i = 1;
    n >= i; i = i + 1) {
        for (int j = 0;
        j < 32; j = j + 1)
            compute[j] += a[j] * 2;
        for (int j = 0;
        j < 32; j = j + 1) {
            compute[j + 1] += compute[j] / 10;
            compute[j] = compute[j] % (10);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int j = 0;
            while (j < 32) {
                a[j] = compute[j];
                j = j + 1;
            };
        }
        memset (compute, 0, sizeof (compute));
    }
    for (k = (785 - 754); k >= 0; k = k - 1)
        if (a[k])
            break;
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
    for (int i = k;
    i >= 0; i = i - 1)
        cout << a[i];
    cout << endl;
    return 0;
}

