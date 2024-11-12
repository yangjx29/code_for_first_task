int m, scV5PDAnRJNu, z6VPrGRI [20] [20];

void  gaocheng (int i, int j) {
    if (!((363 - 363) != i) && (263 - 263) < j && scV5PDAnRJNu > j) {
        if (z6VPrGRI[i][j + (387 - 386)] <= z6VPrGRI[i][j] && z6VPrGRI[i][j - (617 - 616)] <= z6VPrGRI[i][j] && z6VPrGRI[i + 1][j] <= z6VPrGRI[i][j])
            cout << i << " " << j << endl;
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
    else if (!(0 != i) && 0 < j && scV5PDAnRJNu > j) {
        if (z6VPrGRI[i][j + 1] <= z6VPrGRI[i][j] && z6VPrGRI[i][j - 1] <= z6VPrGRI[i][j] && z6VPrGRI[i - 1][j] <= z6VPrGRI[i][j])
            cout << i << " " << j << endl;
    }
    else if (!(0 != j) && 0 < i && m > i) {
        if (z6VPrGRI[i][j + 1] <= z6VPrGRI[i][j] && z6VPrGRI[i - 1][j] <= z6VPrGRI[i][j] && z6VPrGRI[i + 1][j] <= z6VPrGRI[i][j])
            cout << i << " " << j << endl;
    }
    else if (!(scV5PDAnRJNu != j) && 0 < i && m > i) {
        if (z6VPrGRI[i - 1][j] <= z6VPrGRI[i][j] && z6VPrGRI[i][j - 1] <= z6VPrGRI[i][j] && z6VPrGRI[i][j] >= z6VPrGRI[i + 1][j])
            cout << i << " " << j << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (j == 0 && !(0 != i)) {
        if (z6VPrGRI[i][j] >= z6VPrGRI[i + 1][j] && z6VPrGRI[i][j] >= z6VPrGRI[i][j + 1])
            cout << i << " " << j << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (i == 0 && j == scV5PDAnRJNu) {
        if (z6VPrGRI[i][j] >= z6VPrGRI[i + 1][j] && z6VPrGRI[i][j] >= z6VPrGRI[i][j - 1])
            cout << i << " " << j << endl;
    }
    else if (i == m && j == 0) {
        if (z6VPrGRI[i][j] >= z6VPrGRI[i - 1][j] && z6VPrGRI[i][j] >= z6VPrGRI[i][j + 1])
            cout << i << " " << j << endl;
    }
    else if (i == m && j == scV5PDAnRJNu) {
        if (z6VPrGRI[i][j] >= z6VPrGRI[i - 1][j] && z6VPrGRI[i][j] >= z6VPrGRI[i][j - 1])
            cout << i << " " << j << endl;
    }
    else {
        if (z6VPrGRI[i][j] >= z6VPrGRI[i][j + 1] && z6VPrGRI[i][j] >= z6VPrGRI[i][j - 1] && z6VPrGRI[i][j] >= z6VPrGRI[i - 1][j] && z6VPrGRI[i][j] >= z6VPrGRI[i + 1][j])
            cout << i << " " << j << endl;
    };
}

int main () {
    int i;
    int j;
    cin >> m >> scV5PDAnRJNu;
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < scV5PDAnRJNu; j++)
                cin >> z6VPrGRI[i][j];
            i++;
        };
    }
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < scV5PDAnRJNu; j++)
                gaocheng (i, j);
            i++;
        };
    };
}

