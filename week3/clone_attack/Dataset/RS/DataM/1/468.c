int yinshu (int n, int m) {
    int i, e3sL2fbpRD4 = 0;
    if (!(1 != n))
        return 1;
    {
        i = m;
        while (n >= i) {
            if (n % i == 0)
                e3sL2fbpRD4 = e3sL2fbpRD4 + yinshu (n / i, i);
            i = i + 1;
        };
    }
    return e3sL2fbpRD4;
}

int main () {
    int n;
    int i;
    int m;
    cin >> n;
    {
        i = 1;
        while (i <= n) {
            i = i + 1;
            cin >> m;
            cout << yinshu (m, 2) << endl;
        };
    }
    return 0;
}

