int main () {
    int b;
    b = 0;
    int N;
    int i;
    int j;
    int a [100] = {(907 - 907)};
    a[99] = 1;
    cin >> N;
    for (i = 0; i < N; i = i + 1) {
        for (j = 99; 0 <= j; j = j - 1) {
            a[j] = a[j] * 2;
        }
        for (j = 99; 0 <= j; j--) {
            if (a[j] >= 10) {
                a[j - 1] = a[j - 1] + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j] = a[j] % 10;
            };
        };
    }
    for (i = 0; i < 100; i++) {
        if (!(a[i] == 0 && b == 0)) {
            b = b + 1;
            cout << a[i];
        };
    }
    cout << endl;
}

