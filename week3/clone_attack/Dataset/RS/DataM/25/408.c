int main () {
    int a [110] = {0};
    int n;
    cin >> n;
    a[0] = 1;
    for (int i = 0;
    i < n; i = i + 1) {
        {
            int j = 0;
            while (j < 100) {
                a[j] = a[j] * 2;
                j++;
            };
        }
        for (int j = 0;
        j < 100; j++) {
            if (a[j] > 9) {
                a[j + 1] = a[j + 1] + (a[j] / 10);
                a[j] = a[j] % 10;
            };
        };
    }
    for (int i = 99;
    i >= 0; i--) {
        if (a[i] != 0) {
            {
                int j = i;
                while (j >= 0) {
                    cout << a[j];
                    j--;
                };
            }
            break;
        };
    }
    return 0;
}

