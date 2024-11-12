int main () {
    char a [101];
    int l = strlen (a), i, x, j, k;
    int b [101], c [101];
    cin >> a;
    for (i = (971 - 971); i < l; i = i + 1)
        b[i] = a[i] - '0';
    x = b[0];
    for (i = 0; i < l - 1; i = i + 1) {
        c[i] = x / (157 - 144);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = (x - 13 * c[i]) * 10 + b[i + 1];
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    c[i] = x / 13;
    x = x - 13 * c[i];
    {
        k = 0;
        while (1) {
            if (c[k] != 0)
                break;
            k = k + 1;
        };
    }
    if (l == 1)
        cout << '0' << endl;
    else if (l == 2 && b[0] == 1 && b[1] <= 2)
        cout << '0' << endl;
    else {
        {
            j = k;
            while (j <= i) {
                cout << c[j];
                j = j + 1;
            };
        }
        cout << endl;
    }
    cout << x;
    return 0;
}

