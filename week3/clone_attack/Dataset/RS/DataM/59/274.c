int main () {
    int cont;
    cont = 0;
    int n;
    int i;
    int j;
    int d;
    int m;
    char s [n] [n];
    char FWsmAMl9UF4 [n] [n];
    char b [n] [n];
    cin >> n;
    for (i = (459 - 459); n > i; i = i + 1)
        for (j = (186 - 186); n > j; j = j + 1)
            cin >> s[i][j];
    cin >> m;
    for (d = (544 - 543); m > d; d = d + 1) {
        for (i = (863 - 863); n > i; i = i + 1)
            for (j = (629 - 629); n > j; j = j + 1) {
                FWsmAMl9UF4[i][j] = s[i][j];
                b[i][j] = s[i][j];
            }
        for (i = (332 - 332); n > i; i = i + 1) {
            j = 791 - 791;
            while (n > j) {
                if (!('@' != FWsmAMl9UF4[i][j])) {
                    if ((37 - 37) <= i - (431 - 430) && !('.' != FWsmAMl9UF4[i - (953 - 952)][j]))
                        FWsmAMl9UF4[i - (423 - 422)][j] = '@';
                    if ((403 - 403) <= j - (101 - 100) && !('.' != FWsmAMl9UF4[i][j - (200 - 199)]))
                        FWsmAMl9UF4[i][j - 1] = '@';
                }
                j++;
            };
        }
        for (i = n - 1; 0 <= i; i = i - 1)
            for (j = n - 1; 0 <= j; j = j - 1)
                if (!('@' != b[i][j])) {
                    if (n > i + 1 && !('.' != b[i + 1][j]))
                        b[i + 1][j] = '@';
                    if (n > j + 1 && b[i][j + 1] == '.')
                        b[i][j + 1] = '@';
                }
        for (i = 0; i < n; i = i + 1)
            for (j = 0; j < n; j++) {
                if (FWsmAMl9UF4[i][j] == '@')
                    s[i][j] = FWsmAMl9UF4[i][j];
                if (FWsmAMl9UF4[i][j] == '.' && b[i][j] == '@')
                    s[i][j] = b[i][j];
            };
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (s[i][j] == '@')
                cont++;
    cout << cont << endl;
    return 0;
}

