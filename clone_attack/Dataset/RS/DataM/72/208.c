int main () {
    int flag [200] [200];
    int ymbxFsB6 [200] [200];
    int RgGeftCLqXd;
    int n;
    memset (flag, 0, sizeof (flag));
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
    memset (ymbxFsB6, 0, sizeof (ymbxFsB6));
    cin >> RgGeftCLqXd >> n;
    for (int zGfo538 = (210 - 209);
    zGfo538 <= RgGeftCLqXd; zGfo538 = zGfo538 + 1)
        for (int j = 1;
        n >= j; j = j + 1) {
            cin >> ymbxFsB6[zGfo538][j];
        }
    for (int zGfo538 = 1;
    zGfo538 <= RgGeftCLqXd; zGfo538 = zGfo538 + 1)
        for (int j = 1;
        j <= n; j++) {
            if (ymbxFsB6[zGfo538][j] >= ymbxFsB6[zGfo538 - 1][j] && ymbxFsB6[zGfo538][j] >= ymbxFsB6[zGfo538 + 1][j] && ymbxFsB6[zGfo538][j] >= ymbxFsB6[zGfo538][j - 1] && ymbxFsB6[zGfo538][j] >= ymbxFsB6[zGfo538][j + 1])
                flag[zGfo538][j] = 1;
        }
    for (int zGfo538 = 1;
    zGfo538 <= RgGeftCLqXd; zGfo538++)
        for (int j = 1;
        j <= n; j++)
            if (flag[zGfo538][j])
                cout << zGfo538 - 1 << " " << j - 1 << endl;
    return 0;
}

