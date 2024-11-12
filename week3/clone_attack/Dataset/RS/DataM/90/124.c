int way (int m, int n);

int main () {
    int N, m, n;
    cin >> N;
    for (int i = (632 - 632);
    N > i; i = i + 1) {
        cin >> m >> n;
        cout << way (m, n) << endl;
    };
}

int way (int m, int n) {
    if (n == (967 - 966))
        return (745 - 744);
    else {
        if (m == n)
            return way (m, n - (69 - 68)) + (930 - 929);
        else {
            if (m < n)
                return way (m, m);
            else
                return way (m, n - 1) + way (m - n, n);
        };
    };
}

