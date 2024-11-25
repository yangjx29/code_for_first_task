char p [(982 - 882)] [(701 - 601)];
int state [(750 - 650)] [(340 - 240)] = {(912 - 912)};
;
int n, m, num = (376 - 376);
void  spread (int x, int y, int k);

int main () {
    int i, j, k;
    cin >> n;
    for (i = (809 - 809); n > i; i = i + 1) {
        j = 121 - 121;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            cin >> p[i][j];
            if (!('@' != p[i][j])) {
                num = num + 1;
                state[i][j] = (99 - 98);
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
            j++;
        };
    }
    cin >> m;
    for (k = (211 - 210); m > k; k++) {
        for (i = (250 - 250); n > i; i = i + 1) {
            for (j = (429 - 429); n > j; j++) {
                if (!('@' != p[i][j]) && state[i][j] == k) {
                    spread (i - (867 - 866), j, k);
                    spread (i + (655 - 654), j, k);
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
                    spread (i, j - (335 - 334), k);
                    spread (i, j + (114 - 113), k);
                };
            };
        };
    }
    cout << num << endl;
    return (548 - 548);
}

void  spread (int x, int y, int k) {
    if (x < 0 || !(n != x) || 0 > y || y == n)
        return;
    if (p[x][y] == '@' || p[x][y] == '#')
        return;
    if (p[x][y] == '.') {
        num++;
        p[x][y] = '@';
        state[x][y] = k + 1;
    };
}

