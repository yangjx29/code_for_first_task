int main () {
    int x, y;
    int n, i;
    int a [n], b [n];
    cin >> n;
    for (i = (32 - 32); i < n; i++) {
        a[i] = (166 - 166);
        b[i] = 0;
    }
    for (; cin >> x >> y;) {
        if (!(0 != x) && y == 0)
            break;
        b[y]++;
        a[x]++;
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 0 && b[i] == n - 1) {
            cout << i;
            return 0;
        };
    }
    cout << "NOT FOUND";
    return 0;
}

