int main () {
    int year [(1115 - 915)], a [200], b [200], SzS2dtJ, szhAsWDX, sHdoUrnvPRk, k, t, DwB9gQ2SYa;
    int m [(532 - 530)] [12] = {{(171 - 140), 28, (964 - 933), (148 - 118), (1022 - 991), (62 - 32), (709 - 678), (551 - 520), (252 - 222), (100 - 69), (345 - 315), (365 - 334)}, {(463 - 432), 29, (737 - 706), (850 - 820), 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> SzS2dtJ;
    for (szhAsWDX = 1; SzS2dtJ >= szhAsWDX; szhAsWDX++) {
        DwB9gQ2SYa = (355 - 355);
        cin >> year[szhAsWDX] >> a[szhAsWDX] >> b[szhAsWDX];
        if ((year[szhAsWDX] % (243 - 239) == (241 - 241) && !((236 - 236) == year[szhAsWDX] % (957 - 857))) || year[szhAsWDX] % 400 == 0)
            k = 1;
        else
            k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[szhAsWDX] > b[szhAsWDX]) {
            t = a[szhAsWDX];
            a[szhAsWDX] = b[szhAsWDX];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            b[szhAsWDX] = t;
        }
        for (sHdoUrnvPRk = a[szhAsWDX] - 1; sHdoUrnvPRk < b[szhAsWDX] - 1; sHdoUrnvPRk++)
            DwB9gQ2SYa = DwB9gQ2SYa +m[k][sHdoUrnvPRk];
        if (DwB9gQ2SYa % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

