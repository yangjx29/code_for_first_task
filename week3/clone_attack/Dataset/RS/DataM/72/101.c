void  sp0YEoU (int s [(775 - 753)] [22], int dKmWkSZl, int p7PBe6W, int m, int n) {
    if (!((791 - 791) != dKmWkSZl) && p7PBe6W == (216 - 216)) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + (381 - 380)][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W + (173 - 172)] <= s[dKmWkSZl][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (!(m != dKmWkSZl) && !(n != p7PBe6W)) {
        if ((s[dKmWkSZl - (249 - 248)][p7PBe6W] <= s[dKmWkSZl][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W - (539 - 538)]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (dKmWkSZl == m && p7PBe6W == (89 - 89)) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W + (287 - 286)]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl - (210 - 209)][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (dKmWkSZl == (446 - 446) && p7PBe6W == n) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + (567 - 566)][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W - (679 - 678)] <= s[dKmWkSZl][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (!((579 - 579) != dKmWkSZl)) {
        if ((s[dKmWkSZl][p7PBe6W + (646 - 645)] <= s[dKmWkSZl][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W - (343 - 342)] <= s[dKmWkSZl][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + (867 - 866)][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (p7PBe6W == 0) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W + (975 - 974)]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + 1][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl - 1][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return;
    }
    if (dKmWkSZl == m) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W + 1]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W - 1]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl - 1][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if (p7PBe6W == n) {
        if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W - 1]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + 1][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl - 1][p7PBe6W]))
            cout << dKmWkSZl << ' ' << p7PBe6W << endl;
        return;
    }
    if ((s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl - 1][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl + 1][p7PBe6W]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W - 1]) && (s[dKmWkSZl][p7PBe6W] >= s[dKmWkSZl][p7PBe6W + 1]))
        cout << dKmWkSZl << ' ' << p7PBe6W << endl;
}

int main () {
    int zPAFERXMV [22] [22];
    int m;
    int n;
    int i;
    int j;
    cin >> m >> n;
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j = j + 1)
            cin >> zPAFERXMV[i][j];
    for (i = 0; i < m; i++) {
        j = 0;
        while (j < n) {
            sp0YEoU (zPAFERXMV, i, j, m - 1, n - 1);
            j++;
        };
    }
    return 0;
}

