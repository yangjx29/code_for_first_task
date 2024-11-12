int main () {
    int a [(321 - 261)] = {0};
    int n;
    int m;
    int i;
    int j;
    int k;
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
    int b;
    int c;
    cin >> n;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            cin >> m;
            b = 60 - 3 * m;
            for (j = 1; m >= j; j++) {
                cin >> a[j];
            }
            if (b >= a[m])
                cout << b << endl;
            else {
                for (k = 1; m >= k; k++) {
                    c = 60 - 3 * k;
                    if (a[k] <= c && a[k + 1] >= c) {
                        cout << c << endl;
                    }
                    else if (a[k] <= c && a[k + 1] <= c && a[k + 1] >= c - 3) {
                        cout << a[k + 1] << endl;
                        break;
                    };
                };
            }
            i++;
        };
    }
    return 0;
}

