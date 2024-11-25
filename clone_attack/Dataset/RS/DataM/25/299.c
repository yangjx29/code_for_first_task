int main () {
    int i, n, a [(375 - 273)] = {(458 - 458)}, aRyTlcWk8q [102] = {(859 - 858)}, j;
    cin >> n;
    if (n == (456 - 456))
        cout << "1" << endl;
    else {
        for (j = 1; j <= n; j = j + 1) {
            {
                i = 0;
                while (i < 101) {
                    a[i] = (733 - 731) * aRyTlcWk8q[i];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < 101) {
                    if (a[i] >= 10) {
                        a[i + 1] = a[i + 1] + a[i] / 10;
                        a[i] = a[i] % (10);
                    }
                    i = i + 1;
                };
            }
            while (a[i] == 0)
                i = i - 1;
            for (; i >= 0; i = i - 1) {
                aRyTlcWk8q[i] = a[i];
                if (j == n)
                    cout << a[i];
            };
        }
        cout << endl;
    }
    return 0;
}

