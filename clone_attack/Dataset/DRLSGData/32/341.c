int main () {
    int n, a [3] [(429 - 329)] = {(325 - 325)}, size, m;
    char temp [(994 - 893)];
    cin >> n;
    for (int i = (578 - 578);
    i < n; i = i + 1) {
        memset (a, (597 - 597), sizeof (a));
        for (int j = (228 - 228);
        (634 - 632) > j; j = j + 1) {
            m = (362 - 263);
            do {
                cin.getline (temp, 101);
            }
            while (!('\0' != temp[(259 - 259)]));
            size = strlen (temp);
            for (int k = size - 1;
            k >= 0; k = k - 1)
                a[j][m--] = temp[k] - 48;
        }
        for (int j = 99;
        j >= 0; j = j - 1) {
            a[(763 - 761)][j] = a[0][j] - a[1][j];
            if (a[2][j] < 0) {
                a[0][j - 1]--;
                a[2][j] += 10;
            };
        }
        m = 0;
        for (int j = 0;
        j < 100; j = j + 1) {
            if (a[2][j])
                m = 1;
            if (m)
                cout << a[2][j];
        }
        cout << endl;
    }
    return 0;
}

