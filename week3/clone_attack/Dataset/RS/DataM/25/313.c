int main () {
    int n;
    int a [100] = {(235 - 235)};
    n = (608 - 608);
    int i = 0, j = 0, k = 0;
    int flag = 0;
    a[99] = 1;
    cin >> n;
    {
        j = 0;
        while (n > j) {
            j = j + 1;
            for (i = 99; 0 <= i; i = i - 1) {
                a[i] = a[i] * 2 + k, k = 0;
                if (9 < a[i])
                    k = a[i] / 10, a[i] = a[i] % 10;
            };
        };
    }
    for (i = 0; 100 > i; i = i + 1) {
        if (a[i] != 0)
            flag = 1;
        if (flag != 0)
            cout << a[i];
    }
    return 0;
}

