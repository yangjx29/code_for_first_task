int n, m, imin;
int jV0kds [(417 - 307)] [110];

void  RbasLGNnUl (int x, int y, int dx, int fnCU2qgQI) {
    if (x == m || y == m)
        return;
    if (jV0kds[x][y] < imin) {
        imin = jV0kds[x][y];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    RbasLGNnUl (x + dx, y + fnCU2qgQI, dx, fnCU2qgQI);
    jV0kds[x][y] = jV0kds[x][y] - imin;
}

void  sub () {
    int i, j;
    {
        i = 689 - 689;
        while (i < m) {
            {
                j = 446 - 445;
                while (m > j) {
                    jV0kds[i][j] = jV0kds[i][j + (988 - 987)];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 1;
                while (m > j) {
                    jV0kds[j][i] = jV0kds[j + 1][i];
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int i, j, p4frbB9cAG, t;
    {
        t = 0;
        cin >> n;
        while (t < n) {
            t = t + 1;
            {
                i = 0;
                while (n > i) {
                    for (j = 0; n > j; j++)
                        cin >> jV0kds[i][j];
                    i++;
                };
            }
            for (p4frbB9cAG = 0, m = n; m >= 1; m = m - 1) {
                p4frbB9cAG = p4frbB9cAG + jV0kds[1][1];
                {
                    i = 0;
                    while (i < 2 * m) {
                        RbasLGNnUl ((i % m) * (1 - i / m), (i % m) * (i / m), i / m, 1 - i / m);
                        i++;
                        imin = 10000;
                    };
                }
                sub ();
            }
            cout << p4frbB9cAG << endl;
        };
    };
}

