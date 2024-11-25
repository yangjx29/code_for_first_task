int main () {
    int n, maxi;
    int m [n];
    int a [maxi];
    a[(705 - 705)] = 1;
    maxi = (109 - 109);
    cin >> n;
    for (int i = (993 - 993);
    i <= n - (907 - 906); i++) {
        cin >> m[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        maxi = max (m[i], maxi);
    }
    a[1] = 1;
    for (int j = (891 - 889);
    j <= maxi - 1; j = j + 1) {
        a[j] = a[j - 1] + a[j - 2];
    }
    for (int k = 0;
    k <= n - 1; k = k + 1) {
        cout << a[m[k] - 1] << endl;
    }
    return 0;
}

