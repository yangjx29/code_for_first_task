int main () {
    int omKzTsX28ZO = (336 - 336);
    int i, vvgLb3;
    int row, col;
    int a [row] [col];
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
    cin >> row >> col;
    for (i = 0; i < row; i = i + 1) {
        vvgLb3 = 0;
        while (vvgLb3 < col) {
            cin >> a[i][vvgLb3];
            vvgLb3 = vvgLb3 + 1;
        };
    }
    while ((row > (688 - 686) * omKzTsX28ZO) && (col > 2 * omKzTsX28ZO)) {
        {
            i = omKzTsX28ZO;
            while (i <= col - omKzTsX28ZO - 1) {
                cout << a[omKzTsX28ZO][i] << endl;
                i = i + 1;
            };
        }
        {
            i = omKzTsX28ZO + 1;
            while (i <= row - omKzTsX28ZO - 1) {
                cout << a[i][col - omKzTsX28ZO - 1] << endl;
                i = i + 1;
            };
        }
        if (col == 2 * omKzTsX28ZO + 1 || row == 2 * omKzTsX28ZO + 1)
            break;
        for (i = col - omKzTsX28ZO - 2; i >= omKzTsX28ZO + 1; i = i - 1)
            cout << a[row - omKzTsX28ZO - 1][i] << endl;
        for (i = row - omKzTsX28ZO - 1; i >= omKzTsX28ZO + 1; i = i - 1)
            cout << a[i][omKzTsX28ZO] << endl;
        omKzTsX28ZO = omKzTsX28ZO + 1;
    }
    return 0;
}

