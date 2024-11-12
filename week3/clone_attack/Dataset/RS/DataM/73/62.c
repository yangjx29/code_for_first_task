int main () {
    int D3H95Y;
    int a [(505 - 499)] [(236 - 230)];
    int b [6];
    int c [6];
    D3H95Y = (22 - 22);
    {
        int i = (619 - 618);
        while (6 > i) {
            {
                int j = (559 - 558);
                while (6 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin.get ();
    cin.get ();
    {
        int i = 1;
        while (6 > i) {
            a[i][(855 - 855)] = -(1000000942 - 943);
            {
                int j = 1;
                while (6 > j) {
                    if (a[i][j] > a[i][(365 - 365)]) {
                        a[i][(167 - 167)] = a[i][j];
                        b[i] = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (6 > i) {
            a[0][i] = 999999999;
            {
                int j = 1;
                while (j < 6) {
                    if (a[0][i] > a[j][i]) {
                        a[0][i] = a[j][i];
                        c[i] = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i < 6) {
            if (a[0][b[i]] == a[i][0]) {
                D3H95Y = 1;
                cout << i << ' ' << b[i] << ' ' << a[i][0];
            }
            i = i + 1;
        };
    }
    if (D3H95Y == 0)
        cout << "not found";
    return 0;
}

