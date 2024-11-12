int main () {
    int a [100];
    int n;
    int m;
    int q7H36B;
    int b [100];
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
    cin >> n >> m;
    for (q7H36B = 0; n > q7H36B; q7H36B = q7H36B + 1)
        cin >> a[q7H36B];
    for (q7H36B = 0; q7H36B < n - m; q7H36B = q7H36B + 1)
        b[m + q7H36B] = a[q7H36B];
    for (q7H36B = n - m; n > q7H36B; q7H36B++)
        b[q7H36B - n + m] = a[q7H36B];
    for (q7H36B = 0; q7H36B < n; q7H36B++) {
        if (q7H36B == n - 1)
            cout << b[q7H36B] << endl;
        else
            cout << b[q7H36B] << " ";
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
    return 0;
}

