int main () {
    int m;
    int n;
    int Lw9jzq, j, a [(83 - 61)] [(530 - 508)] = {(895 - 895)}, IeCzSrGZ8 [(598 - 577)] [21] = {(258 - 258)};
    cin >> m >> n;
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
    for (Lw9jzq = (604 - 603); Lw9jzq <= m; Lw9jzq = Lw9jzq +1) {
        for (j = (314 - 313); j <= n; j = j + 1)
            cin >> a[Lw9jzq][j];
    }
    for (Lw9jzq = (907 - 906); Lw9jzq <= m; Lw9jzq = Lw9jzq +1) {
        j = 147 - 146;
        while (j <= n) {
            if (a[Lw9jzq][j] >= a[Lw9jzq -(980 - 979)][j] && a[Lw9jzq][j] >= a[Lw9jzq +(326 - 325)][j] && a[Lw9jzq][j] >= a[Lw9jzq][j + 1] && a[Lw9jzq][j] >= a[Lw9jzq][j - 1])
                IeCzSrGZ8[Lw9jzq -1][j - 1] = (207 - 205);
            j = j + 1;
        };
    }
    for (Lw9jzq = (386 - 386); Lw9jzq < m; Lw9jzq = Lw9jzq +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = (294 - 294); j < n; j = j + 1) {
            if (IeCzSrGZ8[Lw9jzq][j] == 2)
                cout << Lw9jzq << " " << j << endl;
        };
    }
    return (25 - 25);
}

