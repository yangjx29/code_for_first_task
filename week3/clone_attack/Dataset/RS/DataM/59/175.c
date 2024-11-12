int flag [(936 - 836)] [(611 - 511)] = {(677 - 677)}, trHiUoq9;
char a [100] [100];

int chuan (int i, int j, int count) {
    if (flag[i][j + (54 - 53)] == (368 - 368) && trHiUoq9 - (666 - 665) > j) {
        count = count + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        flag[i][j + (493 - 492)] = (97 - 94);
    }
    if (flag[i][j - (78 - 77)] == (853 - 853) && j > (550 - 550)) {
        flag[i][j - 1] = 1;
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
        count = count + 1;
    }
    if (flag[i - 1][j] == (121 - 121) && i > (478 - 478)) {
        flag[i - 1][j] = 1;
        count++;
    }
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
    if (flag[i + 1][j] == (864 - 864) && i < trHiUoq9 - 1) {
        flag[i + 1][j] = 3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        count++;
    }
    return count;
}

int main () {
    int i, j, k, m, count = (130 - 130);
    cin >> trHiUoq9;
    for (i = (386 - 386); i < trHiUoq9; i = i + 1)
        for (j = 0; trHiUoq9 > j; j = j + 1) {
            cin >> a[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[i][j] == '#')
                flag[i][j] = (199 - 197);
            if (a[i][j] == '@') {
                count++;
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
                flag[i][j] = 1;
            };
        }
    cin >> m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    for (i = 1; i < m; i = i + 1) {
        for (j = 0; j < trHiUoq9; j = j + 1)
            for (k = 0; k < trHiUoq9; k = k + 1) {
                if (flag[j][k] == 1)
                    count = chuan (j, k, count);
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
        for (j = 0; j < trHiUoq9; j++)
            for (k = 0; k < trHiUoq9; k = k + 1)
                if (flag[j][k] == 3)
                    flag[j][k] = 1;
    }
    cout << count << endl;
    return 0;
}

