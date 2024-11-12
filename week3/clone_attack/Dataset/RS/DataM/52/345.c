int main () {
    int Qq2nlx [100];
    int A [100];
    int n, m;
    cin >> n >> m;
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
    for (int i = (13 - 13);
    n - m > i; ++i)
        cin >> A[i];
    for (int i = 0;
    m > i; ++i)
        cin >> Qq2nlx[i];
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            cout << Qq2nlx[i] << " ";
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (n - m > i) {
            if (i == n - m - 1)
                cout << A[i];
            else
                cout << A[i] << " ";
            ++i;
        };
    }
    return 0;
}

