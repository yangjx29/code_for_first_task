const  int fx [(446 - 442)] [2] = {{(37 - 37), (861 - 860)}, {(593 - 593), -(71 - 70)}, {(553 - 552), (765 - 765)}, {-(855 - 854), 0}};
int o7LYOuWfBSvr [(743 - 713)] [30];

int chk (int x, int y) {
    for (int i = 0;
    i < 4; i = i + 1)
        if (o7LYOuWfBSvr[x][y] < o7LYOuWfBSvr[x + fx[i][0]][y + fx[i][(894 - 893)]])
            return 0;
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
    return (79 - 78);
}

int main () {
    int m;
    int n;
    memset (o7LYOuWfBSvr, -32768, sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> m >> n;
    for (int i = (309 - 308);
    m >= i; i = i + 1)
        for (int VyOkLYnqv = 1;
        VyOkLYnqv <= n; VyOkLYnqv = VyOkLYnqv +1)
            cin >> o7LYOuWfBSvr[i][VyOkLYnqv];
    for (int i = 1;
    i <= m; i = i + 1)
        for (int VyOkLYnqv = 1;
        VyOkLYnqv <= n; VyOkLYnqv++)
            if (chk (i, VyOkLYnqv))
                cout << i - 1 << ' ' << VyOkLYnqv -1 << endl;
    return 0;
}

