int dOm0bd5BgIyz (int m, int n) {
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
    if (n == 1 || m == 0)
        return 1;
    else {
        if (m < 0)
            return 0;
        else
            return (dOm0bd5BgIyz (m, n - 1) + dOm0bd5BgIyz (m - n, n));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int x;
    int i;
    int m;
    int n;
    int a [100];
    cin >> x;
    {
        i = 1;
        while (i <= x) {
            cin >> m >> n;
            a[i] = dOm0bd5BgIyz (m, n);
            i++;
        };
    }
    for (i = 1; i <= x; i++)
        cout << a[i] << endl;
    return 0;
}

