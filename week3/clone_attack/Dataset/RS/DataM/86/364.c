int main () {
    int n, i, j, a [100] [100], k;
    cin >> n;
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
    for (i = 1; n >= i; i++) {
        cin >> a[i][(754 - 754)];
        if (!(0 != a[i][0]))
            cout << 60 << endl;
        else {
            for (k = 1; k <= a[i][0]; k++)
                cin >> a[i][k];
            {
                j = 1;
                while (a[i][0] >= j) {
                    if (60 >= a[i][j] + 3 * j && a[i][j + 1] + 3 * (j + 1) > 63) {
                        cout << 60 - 3 * j << endl;
                        break;
                    }
                    if (a[i][j] + 3 * j <= 60 && a[i][j + 1] + 3 * (j + 1) > 60 && a[i][j] + 3 * (j + 1) <= 63) {
                        cout << a[i][j + 1] << endl;
                        break;
                    }
                    j++;
                };
            }
            if (j == a[i][0] + 1) {
                cout << 60 - 3 * a[i][0] << endl;
            };
        };
    }
    return 0;
}

