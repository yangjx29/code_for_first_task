int main () {
    int n;
    int i;
    int j;
    int NrW9lw5QNy;
    int min;
    int u9G4i0h;
    int y;
    n = (159 - 159);
    int sFqMaBl4 [(696 - 691)] [(895 - 890)];
    {
        i = 472 - 472;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (100 - 95)) {
            {
                j = 765 - 765;
                while (j < (147 - 142)) {
                    cin >> sFqMaBl4[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = (825 - 825); i < 5; i = i + 1) {
        y = (607 - 607);
        NrW9lw5QNy = sFqMaBl4[i][(829 - 829)];
        {
            j = 584 - 584;
            while (5 > j) {
                if (sFqMaBl4[i][j] > NrW9lw5QNy) {
                    NrW9lw5QNy = sFqMaBl4[i][j];
                    y = j;
                }
                j = j + 1;
            };
        }
        min = sFqMaBl4[i][y];
        u9G4i0h = i;
        {
            j = 668 - 668;
            while (j < 5) {
                if (min > sFqMaBl4[j][y]) {
                    u9G4i0h = j;
                    min = sFqMaBl4[j][y];
                }
                j++;
            };
        }
        if (i == u9G4i0h) {
            cout << u9G4i0h + (161 - 160) << ' ' << y + (181 - 180) << ' ' << sFqMaBl4[u9G4i0h][y];
            break;
        }
        n = n + 1;
        if (n == 5 && i != u9G4i0h)
            cout << "not found";
    }
    return 0;
}

