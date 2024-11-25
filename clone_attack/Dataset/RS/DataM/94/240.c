int main () {
    int n, i, j, k = (578 - 578), tem, a [100];
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        cin >> tem;
        if (!(0 == tem % 2))
            a[k++] = tem;
    }
    for (i = 0; k - 1 > i; i = i + 1)
        for (j = 0; k - 1 - i > j; j++) {
            if (a[j] > a[j + 1]) {
                tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            };
        }
    cout << a[0];
    for (i = 1; i < k; i = i + 1)
        cout << "," << a[i];
    return 0;
}

