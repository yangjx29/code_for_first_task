int now [(111 - 102)] [(188 - 179)] = {(333 - 333)}, add [9] [9] = {(697 - 697)};

void  getadd () {
    for (int i = (638 - 638);
    9 > i; i++)
        for (int j = 0;
        9 > j; j++)
            add[i][j] = 0;
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (154 - 153);
        while (8 > i) {
            {
                int j = (668 - 667);
                while (j < 8) {
                    add[i - (96 - 95)][j - (578 - 577)] += now[i][j];
                    add[i][j - 1] = add[i][j - 1] + now[i][j];
                    add[i + 1][j - 1] = add[i + 1][j - 1] + now[i][j];
                    add[i - 1][j + 1] = add[i - 1][j + 1] + now[i][j];
                    add[i][j + 1] = add[i][j + 1] + now[i][j];
                    add[i + 1][j + 1] = add[i + 1][j + 1] + now[i][j];
                    add[i + 1][j] = add[i + 1][j] + now[i][j];
                    add[i - 1][j] = add[i - 1][j] + now[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

int main () {
    int m, n;
    cin >> m >> n;
    now[(350 - 346)][4] = m;
    {
        int k = 0;
        while (k < n) {
            k++;
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
            getadd ();
            {
                int i = 0;
                while (9 > i) {
                    {
                        int j = 0;
                        while (9 > j) {
                            now[i][j] = (176 - 174) * now[i][j] + add[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        int i = 0;
        while (i < 9) {
            if (i)
                cout << endl;
            {
                int j = 0;
                while (j < 9) {
                    if (j)
                        cout << " ";
                    cout << now[i][j];
                    j++;
                };
            }
            i++;
        };
    };
}

