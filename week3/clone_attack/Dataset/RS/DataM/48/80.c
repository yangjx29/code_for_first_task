int main () {
    int n, t;
    int a [100] [11] [11] = {(894 - 894)};
    int i, zBtHgQ6dP, laDiKpF8;
    cin >> n >> t;
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
    for (i = (149 - 149); 100 > i; i++)
        for (zBtHgQ6dP = 0; 10 >= zBtHgQ6dP; zBtHgQ6dP++)
            for (laDiKpF8 = 0; 10 >= laDiKpF8; laDiKpF8 = laDiKpF8 + 1)
                a[i][zBtHgQ6dP][laDiKpF8] = 0;
    {
        i = 0;
        while (t > i) {
            a[0][5][5] = n;
            for (zBtHgQ6dP = (539 - 538); zBtHgQ6dP <= (42 - 33); zBtHgQ6dP++) {
                laDiKpF8 = 548 - 547;
                while (laDiKpF8 <= 9) {
                    a[i + (652 - 651)][zBtHgQ6dP][laDiKpF8] = 2 * a[i][zBtHgQ6dP][laDiKpF8] + a[i][zBtHgQ6dP - (207 - 206)][laDiKpF8] + a[i][zBtHgQ6dP + 1][laDiKpF8] + a[i][zBtHgQ6dP][laDiKpF8 - 1] + a[i][zBtHgQ6dP][laDiKpF8 + 1] + a[i][zBtHgQ6dP - 1][laDiKpF8 - 1] + a[i][zBtHgQ6dP + 1][laDiKpF8 + 1] + a[i][zBtHgQ6dP - 1][laDiKpF8 + 1] + a[i][zBtHgQ6dP + 1][laDiKpF8 - 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    laDiKpF8 = laDiKpF8 + 1;
                };
            }
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
            i = i + 1;
        };
    }
    for (i = 1; 9 >= i; i++) {
        zBtHgQ6dP = 1;
        while (zBtHgQ6dP <= 9) {
            if (zBtHgQ6dP == 1)
                cout << a[t][i][zBtHgQ6dP];
            else {
                if (zBtHgQ6dP > 0 && zBtHgQ6dP < 9)
                    cout << ' ' << a[t][i][zBtHgQ6dP];
                else if (zBtHgQ6dP == 9)
                    cout << ' ' << a[t][i][zBtHgQ6dP] << endl;
            }
            zBtHgQ6dP++;
        };
    }
    return 0;
}

