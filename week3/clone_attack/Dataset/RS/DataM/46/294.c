int main () {
    int col;
    int row;
    int a [(962 - 862)] [(761 - 661)];
    const  int dir [(524 - 520)] [(640 - 638)] = {{(462 - 462), (715 - 714)}, {(15 - 14), (600 - 600)}, {(996 - 996), -(973 - 972)}, {-(704 - 703), (869 - 869)}};
    int state;
    int curstep;
    int jd6lvAEGmZ2I;
    int rKqjR4JT [(810 - 806)] = {col, row - (696 - 695), col - (17 - 16), row - (432 - 430)};
    int pos [(986 - 984)] = {(214 - 214), (685 - 685)};
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
    state = (224 - 224);
    curstep = rKqjR4JT[state];
    jd6lvAEGmZ2I = (711 - 710);
    cin >> row >> col;
    {
        int i = (996 - 996);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > i) {
            {
                int j = (236 - 236);
                while (col > j) {
                    cin >> a[i][j];
                    j = j + 1;
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
    while ((224 - 224) < curstep) {
        {
            int i = (148 - 148) + jd6lvAEGmZ2I;
            while (i < curstep) {
                i = i + 1;
                cout << a[pos[(522 - 522)]][pos[(190 - 189)]] << endl;
                pos[(844 - 844)] = pos[(844 - 844)] + dir[state][(78 - 78)];
                pos[(527 - 526)] += dir[state][(13 - 12)];
            };
        }
        jd6lvAEGmZ2I = (907 - 907);
        rKqjR4JT[state] = rKqjR4JT[state] - (509 - 507);
        state = (state + 1) % (467 - 463);
        curstep = rKqjR4JT[state];
    }
    cout << a[pos[(40 - 40)]][pos[1]] << endl;
    return 0;
}

