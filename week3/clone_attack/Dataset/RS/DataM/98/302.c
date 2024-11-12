int main () {
    char a [(1063 - 63)] [(64 - 19)];
    int sum = 0, n, i;
    cin >> n;
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
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++) {
        if (sum == 0) {
            sum = strlen (a[i]);
        }
        else if (strlen (a[i]) + 1 + sum <= 80) {
            cout << " ";
            sum = sum + 1 + strlen (a[i]);
        }
        else if (strlen (a[i]) + 1 + sum > 80) {
            sum = strlen (a[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << endl;
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
        cout << a[i];
    }
    return 0;
}

