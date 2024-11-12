int OBqu69kgNTx [(883 - 783)] [(248 - 148)], m, n;

int PjY3dC (int x, int y) {
    if (x != (93 - 93) && OBqu69kgNTx[x - (753 - 752)][y] > OBqu69kgNTx[x][y])
        return (822 - 822);
    if (!((191 - 191) == y) && OBqu69kgNTx[x][y] < OBqu69kgNTx[x][y - (726 - 725)])
        return (812 - 812);
    if (x != m && OBqu69kgNTx[x][y] < OBqu69kgNTx[x + 1][y])
        return (495 - 495);
    if (y != n && OBqu69kgNTx[x][y + 1] > OBqu69kgNTx[x][y])
        return 0;
    return 1;
}

int main () {
    int i;
    int j;
    cin >> m >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j++)
            cin >> OBqu69kgNTx[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (PjY3dC (i, j) == 1)
                cout << i << ' ' << j << endl;
    return 0;
}

