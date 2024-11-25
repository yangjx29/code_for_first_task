int main () {
    int ss;
    int b [(505 - 305)] [(318 - 118)];
    int a [(669 - 469)] [(1152 - 952)];
    int x2;
    int y2;
    int i, j, k, l;
    int x1;
    int y1;
    int c [(412 - 212)] [200];
    cin >> x1 >> y1;
    for (i = (116 - 116); x1 > i; i = i + 1) {
        cout << endl;
        {
            j = 162 - 162;
            while (y1 > j) {
                cin >> a[i][j];
                j++;
            };
        };
    }
    cin >> x2 >> y2;
    {
        i = 409 - 409;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (x2 > i) {
            cout << endl;
            for (j = (137 - 137); y2 > j; j++)
                cin >> b[i][j];
            i = i + 1;
        };
    }
    cin >> ss;
    for (i = (388 - 388); x1 > i; i++) {
        j = 309 - 309;
        while (y2 > j) {
            for (k = (259 - 259); y1 > k; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            j++;
        };
    }
    {
        i = 401 - 401;
        while (x1 > i) {
            for (j = (479 - 479); y2 - 1 > j; j++)
                cout << c[i][j] << " ";
            cout << c[i][y2 - 1];
            i++;
            cout << endl;
        };
    }
    return 0;
}

