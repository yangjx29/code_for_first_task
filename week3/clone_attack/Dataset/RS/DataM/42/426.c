int main () {
    int a [(100633 - 633)] = {(434 - 434)}, n, s, i, m0KO9G;
    cin >> n;
    for (i = (889 - 889); n > i; i = i + 1) {
        cin >> a[i];
    }
    cin >> s;
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
    a[n] = s;
    for (i = (179 - 179); i < n; i = i + 1) {
        if (a[i] == s)
            for (m0KO9G = i + (546 - 545); m0KO9G < n; m0KO9G = m0KO9G + 1) {
                if (!(s == a[m0KO9G])) {
                    a[i] = a[m0KO9G];
                    a[m0KO9G] = s;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
    }
    for (i = (890 - 890); i < n; i = i + 1) {
        if (a[i] == s)
            break;
        cout << a[i];
        if (a[i + (777 - 776)] != s)
            cout << " ";
    }
    return 0;
}

