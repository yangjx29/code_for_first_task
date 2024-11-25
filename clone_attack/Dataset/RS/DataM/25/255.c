int main () {
    int result [100];
    int a [100];
    int N, i, j;
    cin >> N;
    memset (a, 0, sizeof (a));
    a[0] = (708 - 707);
    memset (result, 0, sizeof (result));
    for (i = 1; i <= N; i = i + 1) {
        for (j = 0; 100 > j; j = j + 1) {
            result[j] = a[j] * 2;
        }
        for (j = 0; 100 > j; j = j + 1) {
            if (10 <= result[j]) {
                result[j + 1] = result[j + 1] + result[j] / 10;
                result[j] = result[j] % 10;
            };
        }
        for (j = 0; 100 > j; j = j + 1) {
            a[j] = result[j];
        };
    }
    j = 99;
    for (; a[j] == 0;)
        j = j - 1;
    for (; j >= 0; j = j - 1) {
        cout << a[j];
    }
    cout << endl;
    return 0;
}

