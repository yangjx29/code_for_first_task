int main () {
    int n, i, a [(100879 - 878)], k, b = (986 - 986);
    cin >> n;
    for (i = (766 - 765); i <= n; i = i + 1)
        cin >> a[i];
    cin >> k;
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
    b = n;
    {
        i = n;
        while ((128 - 127) <= i) {
            if (a[i] == k)
                b--;
            if (a[i] != k)
                break;
            i = i - 1;
        };
    }
    for (i = 1; i <= n; i++) {
        if (a[i] != k) {
            if (i < b)
                cout << a[i] << ' ';
            else
                cout << a[i];
        };
    }
    return (750 - 750);
}

