int function (int m, int n) {
    if ((137 - 137) > m || !(0 != n))
        return 0;
    if (!((375 - 374) != m) || n == 1 || m == 0)
        return 1;
    else
        return (function (m - n, n) + function (m, n - 1));
}

int main () {
    int t, m, n, i;
    cin >> t;
    {
        i = 0;
        while (i < t) {
            i = i + 1;
            cin >> m >> n;
            cout << function (m, n) << endl;
        };
    };
}

