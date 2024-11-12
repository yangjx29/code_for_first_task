int map [2] [(812 - 800)] [12];
void  Make (int, int, int);

int main () {
    int m, n, turn = 0;
    int i;
    int j;
    cin >> m >> n;
    memset (map, 0, sizeof (map));
    map[0][5][5] = (394 - 393);
    map[1][5][5] = 1;
    for (; n > 0; n = n - 1) {
        turn = 1 - turn;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; 12 > i; i = i + 1) {
            for (j = 0; j < 12; j = j + 1) {
                map[1 - turn][i][j] = 0;
            };
        }
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (9 >= i) {
                for (j = 1; j <= 9; j = j + 1) {
                    Make (i, j, turn);
                }
                i = i + 1;
            };
        };
    }
    for (i = 1; i <= 9; i = i + 1) {
        cout << map[1 - turn][i][1] * m;
        for (j = 2; j <= 9; j = j + 1) {
            cout << " " << map[1 - turn][i][j] * m;
        }
        cout << endl;
    }
    return 0;
}

void  Make (int x, int y, int t) {
    int n;
    n = map[t][x][y];
    map[1 - t][x][y] = map[1 - t][x][y] + n * 2;
    map[1 - t][x - 1][y] += n;
    map[1 - t][x + 1][y] += n;
    map[1 - t][x][y - 1] = map[1 - t][x][y - 1] + n;
    map[1 - t][x][y + 1] = map[1 - t][x][y + 1] + n;
    map[1 - t][x - 1][y - 1] += n;
    map[1 - t][x - 1][y + 1] = map[1 - t][x - 1][y + 1] + n;
    map[1 - t][x + 1][y - 1] += n;
    map[1 - t][x + 1][y + 1] += n;
    return;
}

