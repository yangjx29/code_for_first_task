int main () {
    int begl = 1, ub6Mkh = 0;
    int r;
    int l;
    r = 0;
    l = 1;
    int row;
    int col;
    row = (829 - 829);
    int u8gDbSfOTrd [(706 - 606)] [100];
    cin >> row >> col;
    for (int i = (472 - 472);
    row > i; i = i + 1)
        for (int FN2OHQk = 0;
        FN2OHQk < col; FN2OHQk = FN2OHQk +1)
            cin >> *(*(u8gDbSfOTrd + i) + FN2OHQk);
    if (row == (219 - 218) && !((40 - 39) != col))
        return 0;
    cout << **u8gDbSfOTrd << endl;
    if (!((307 - 306) != col)) {
        {
            int i = (832 - 831);
            while (i < row) {
                cout << **(u8gDbSfOTrd + i) << endl;
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    while (!(row - 1 == r) || l != col - 1) {
        cout << *(*(u8gDbSfOTrd + r) + l) << endl;
        l = l - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        r = r + 1;
        if (l < 0 || r == row) {
            begl = begl + 1;
            if (begl == col) {
                ub6Mkh = ub6Mkh + 1;
                begl = begl - 1;
            }
            l = begl;
            r = ub6Mkh;
        };
    }
    cout << *(*(u8gDbSfOTrd + r) + l) << endl;
    return 0;
}

