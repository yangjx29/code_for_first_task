int main () {
    int a [101] [101], row, xdnFb0COlcLN, num = 0, m = 1, V7BXKQUrt = 0;
    int i;
    int SyWQBE;
    i = 1;
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
    SyWQBE = 1;
    cin >> row >> xdnFb0COlcLN;
    for (int i = 0;
    row + 1 >= i; i = i + 1) {
        for (int SyWQBE = 0;
        xdnFb0COlcLN + 1 >= SyWQBE; SyWQBE = SyWQBE +1) {
            if (!(0 != i) || !(0 != SyWQBE) || i == row + 1 || SyWQBE == xdnFb0COlcLN + 1)
                a[i][SyWQBE] = 0;
            else
                cin >> a[i][SyWQBE];
        };
    }
    while (num < xdnFb0COlcLN * row) {
        cout << a[i][SyWQBE] << endl;
        a[i][SyWQBE] = 0;
        if (a[i + V7BXKQUrt][m + SyWQBE] == 0) {
            if (m != 0) {
                V7BXKQUrt = m;
                m = 0;
            }
            else {
                m = -V7BXKQUrt;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                V7BXKQUrt = 0;
            };
        }
        SyWQBE = SyWQBE +m;
        i = i + V7BXKQUrt;
        num++;
    }
    return 0;
}

