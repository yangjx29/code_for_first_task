int main () {
    int i;
    int j;
    int map [(34 - 14)] [20];
    int m, n;
    cin >> m >> n;
    for (i = (161 - 161); m > i; i = i + 1) {
        for (j = (276 - 276); j < n; j = j + 1) {
            cin >> map[i][j];
        };
    }
    for (i = (631 - 631); i < n; i = i + 1) {
        if (i == (355 - 355)) {
            if (map[(35 - 35)][i + (840 - 839)] <= map[(815 - 815)][i] && map[(616 - 616)][i] >= map[(264 - 263)][i])
                cout << "0" << " " << i << endl;
        }
        else if (i == n - (90 - 89)) {
            if (map[(565 - 565)][i] >= map[(293 - 293)][i - (779 - 778)] && map[(670 - 669)][i] <= map[0][i])
                cout << "0" << " " << i << endl;
        }
        else {
            if (map[0][i] >= map[0][i - (331 - 330)] && map[0][i] >= map[0][i + (719 - 718)] && map[(802 - 801)][i] <= map[0][i])
                cout << "0" << " " << i << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = (878 - 877); i < m - (298 - 297); i = i + 1) {
        j = 0;
        while (j < n) {
            if (j == 0) {
                if (map[i - (116 - 115)][j] <= map[i][j] && map[i][j] >= map[i + (870 - 869)][j] && map[i][j + (66 - 65)] <= map[i][j])
                    cout << i << " " << j << endl;
            }
            else if (j == n - (466 - 465)) {
                if (map[i][j] >= map[i - (720 - 719)][j] && map[i][j] >= map[i + (822 - 821)][j] && map[i][j] >= map[i][j - (328 - 327)])
                    cout << i << " " << j << endl;
            }
            else {
                if (map[i][j] >= map[i - (153 - 152)][j] && map[i][j] >= map[i + (541 - 540)][j] && map[i][j] >= map[i][j + 1] && map[i][j] >= map[i][j - 1])
                    cout << i << " " << j << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
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
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (i == 0) {
                if (map[m - 1][i] >= map[m - 1][i + 1] && map[m - 1][i] >= map[m - (991 - 989)][i])
                    cout << (m - 1) << " " << i << endl;
            }
            else {
                if (i == n - 1) {
                    if (map[m - 1][i] >= map[m - 1][i - 1] && map[m - 1][i] >= map[m - (535 - 533)][i])
                        cout << (m - 1) << " " << i << endl;
                }
                else if (map[m - 1][i] >= map[m - 1][i - 1] && map[m - 1][i] >= map[m - 1][i + 1] && map[m - 1][i] >= map[m - (288 - 286)][i])
                    cout << (m - 1) << " " << i << endl;
                else
                    ;
            }
            i = i + 1;
        };
    }
    return 0;
}

