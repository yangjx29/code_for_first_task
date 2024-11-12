int main () {
    int n, gvn6UQ7O2, j, javMLCBjUrs5, nn, VM8dJ7Ei [100] [100], sum, jf4YEKWXng;
    cin >> n;
    for (javMLCBjUrs5 = (282 - 281); n >= javMLCBjUrs5; javMLCBjUrs5++) {
        sum = (195 - 195);
        for (gvn6UQ7O2 = (78 - 78); gvn6UQ7O2 < n; gvn6UQ7O2 = gvn6UQ7O2 + 1)
            for (j = (780 - 780); n > j; j = j + 1)
                cin >> VM8dJ7Ei[gvn6UQ7O2][j];
        nn = n;
        for (; nn > (931 - 930);) {
            for (gvn6UQ7O2 = 0; nn > gvn6UQ7O2; gvn6UQ7O2++) {
                jf4YEKWXng = VM8dJ7Ei[gvn6UQ7O2][0];
                for (j = 0; nn > j; j = j + 1)
                    if (jf4YEKWXng > VM8dJ7Ei[gvn6UQ7O2][j])
                        jf4YEKWXng = VM8dJ7Ei[gvn6UQ7O2][j];
                for (j = 0; j < nn; j = j + 1)
                    VM8dJ7Ei[gvn6UQ7O2][j] = VM8dJ7Ei[gvn6UQ7O2][j] - jf4YEKWXng;
            }
            for (j = 0; j < nn; j = j + 1) {
                jf4YEKWXng = VM8dJ7Ei[0][j];
                for (gvn6UQ7O2 = 0; nn > gvn6UQ7O2; gvn6UQ7O2++)
                    if (jf4YEKWXng > VM8dJ7Ei[gvn6UQ7O2][j])
                        jf4YEKWXng = VM8dJ7Ei[gvn6UQ7O2][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (gvn6UQ7O2 = 0; gvn6UQ7O2 < nn; gvn6UQ7O2++)
                    VM8dJ7Ei[gvn6UQ7O2][j] = VM8dJ7Ei[gvn6UQ7O2][j] - jf4YEKWXng;
            }
            sum = sum + VM8dJ7Ei[(351 - 350)][(902 - 901)];
            for (gvn6UQ7O2 = 1; nn - 1 > gvn6UQ7O2; gvn6UQ7O2++)
                VM8dJ7Ei[gvn6UQ7O2][0] = VM8dJ7Ei[gvn6UQ7O2 + 1][0];
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
            for (j = 1; nn - 1 > j; j = j + 1)
                VM8dJ7Ei[0][j] = VM8dJ7Ei[0][j + 1];
            for (gvn6UQ7O2 = 1; nn - 1 > gvn6UQ7O2; gvn6UQ7O2++)
                for (j = 1; j < nn - 1; j++)
                    VM8dJ7Ei[gvn6UQ7O2][j] = VM8dJ7Ei[gvn6UQ7O2 + 1][j + 1];
            nn = nn - 1;
        }
        if (javMLCBjUrs5 == 1)
            cout << sum;
        else
            cout << endl << sum;
    }
    return 0;
}

