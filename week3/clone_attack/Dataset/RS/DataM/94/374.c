int main () {
    int p;
    int q;
    int w;
    int N;
    int a [(1387 - 887)], b [500];
    int t = (195 - 195);
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
    cin >> N;
    for (int i = (372 - 372);
    i < N; i = i + 1)
        cin >> a[i];
    for (int j = (815 - 815);
    N > j; j = j + 1) {
        if (!(0 == a[j] % 2)) {
            t = t + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            b[t] = a[j];
        };
    }
    for (q = (412 - 411); t - (404 - 403) > q; q++) {
        for (p = 1; p < t + 1 - q; p = p + 1) {
            if (b[p] > b[p + 1]) {
                w = b[p];
                b[p] = b[p + 1];
                b[p + 1] = w;
            };
        };
    }
    for (int l = 1;
    l < t; l = l + 1)
        cout << b[l] << ",";
    cout << b[t];
    return 0;
}

