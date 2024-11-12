int main () {
    int n;
    int m;
    int i;
    int j;
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
    int a [(237 - 137)] [(266 - 166)];
    cin >> n >> m;
    {
        i = 501 - 500;
        while (n >= i) {
            {
                j = 680 - 679;
                while (m >= j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = (153 - 151); i <= n + m; i = i + 1) {
        j = i - m;
        while (j <= min (n, i - (91 - 90))) {
            cout << a[j][i - j] << endl;
            j++;
        };
    };
}

