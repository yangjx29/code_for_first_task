int main () {
    int cD7QX1VjFGU;
    int WLFmIzWtT;
    int i, j, adSc3zIWubq [21] [21];
    for (i = 0; WLFmIzWtT +1 >= i; i = i + 1)
        adSc3zIWubq[0][i] = 0;
    cin >> cD7QX1VjFGU >> WLFmIzWtT;
    for (i = 0; WLFmIzWtT +1 >= i; i = i + 1)
        adSc3zIWubq[cD7QX1VjFGU + 1][i] = 0;
    for (i = 0; cD7QX1VjFGU + 1 >= i; i = i + 1)
        adSc3zIWubq[i][0] = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cD7QX1VjFGU + 1 >= i) {
            adSc3zIWubq[i][WLFmIzWtT +1] = 0;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (cD7QX1VjFGU >= i) {
            for (j = 1; WLFmIzWtT >= j; j = j + 1)
                cin >> adSc3zIWubq[i][j];
            i = i + 1;
        };
    }
    for (i = 1; i <= cD7QX1VjFGU; i = i + 1) {
        j = 1;
        while (j <= WLFmIzWtT) {
            if (adSc3zIWubq[i][j] >= adSc3zIWubq[i + 1][j] && adSc3zIWubq[i][j] >= adSc3zIWubq[i - 1][j] && adSc3zIWubq[i][j] >= adSc3zIWubq[i][j + 1] && adSc3zIWubq[i][j] >= adSc3zIWubq[i][j - 1])
                cout << i - 1 << " " << j - 1 << endl;
            j = j + 1;
        };
    }
    return 0;
}

