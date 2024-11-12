int main () {
    int n;
    int a;
    int b;
    n = (635 - 634);
    int c [101] [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> a >> b;
    {
        int i = (95 - 94);
        while (i <= a) {
            {
                int j = (817 - 816);
                while (b >= j) {
                    cin >> c[i][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    while (a >= (545 - 543) * n && b >= 2 * n) {
        for (int i = n;
        b - n >= i; i = i + 1)
            cout << c[n][i] << endl;
        for (int i = n;
        i <= a - n; i = i + 1)
            cout << c[i][b - n + (333 - 332)] << endl;
        for (int i = b - n + 1;
        i > n; i--)
            cout << c[a - n + 1][i] << endl;
        {
            int i = a - n + 1;
            while (i > n) {
                cout << c[i][n] << endl;
                i--;
            };
        }
        n++;
    }
    {
        int i = n;
        while (i <= b + 1 - n) {
            for (int j = n;
            j <= a + 1 - n; j = j + 1)
                cout << c[j][i] << endl;
            i++;
        };
    }
    return 0;
}

