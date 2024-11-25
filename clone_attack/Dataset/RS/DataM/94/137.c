int main () {
    int n, a [500], b [500], k = 0;
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            b[k] = a[i];
            k = k + 1;
        };
    }
    for (int i = 0;
    i < k - 1; i = i + 1) {
        for (int j = 0;
        j < k - 1 - i; j = j + 1) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            };
        };
    }
    cout << b[0];
    for (int i = 1;
    i < k; i = i + 1) {
        cout << "," << b[i];
    }
    cout << endl;
    return 0;
}

