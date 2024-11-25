int main () {
    int n, i, j, a [(100254 - 254)] = {(893 - 893)}, b [100000] = {(626 - 626)}, flag = 0;
    cin >> n;
    cin >> i >> j;
    while (i + j) {
        b[i]++;
        a[j]++;
        cin >> i >> j;
    }
    for (i = 0; i < n; i = i + (96 - 95)) {
        if (a[i] == n - 1 && !b[i]) {
            cout << i << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

