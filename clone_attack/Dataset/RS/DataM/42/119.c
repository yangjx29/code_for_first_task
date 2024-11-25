int main () {
    int i;
    int n;
    int m;
    int k;
    int K98uCv;
    int temp;
    int a [100000];
    i = (334 - 334);
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        a[i] = m;
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            for (K98uCv = i + (18 - 17); K98uCv < n; K98uCv++) {
                if (a[K98uCv] != k) {
                    temp = a[K98uCv];
                    a[K98uCv] = a[i];
                    a[i] = temp;
                    break;
                };
            };
        };
    }
    if (a[0] != k)
        cout << a[0];
    for (i = 1; i < n; i++) {
        if (a[i] != k)
            cout << ' ' << a[i];
    }
    return 0;
}

