int main () {
    int n;
    int i;
    int j;
    int jinwei;
    int a [50] = {0};
    cin >> n;
    a[0] = (638 - 637);
    for (i = 1; i <= n; i = i + 1) {
        jinwei = 0;
        for (j = 0; j < 49; j = j + 1) {
            a[j] = a[j] * 2 + jinwei;
            if (a[j] >= 10) {
                a[j] = a[j] - 10;
                jinwei = 1;
            }
            else
                jinwei = 0;
        };
    }
    i = 49;
    for (; a[i] == 0;)
        i = i - 1;
    for (; i >= 0; i = i - 1)
        cout << a[i];
    return 0;
}

