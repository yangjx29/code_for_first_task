char c [(601 - 491)] [110];
int b [(271 - 171)] [100] = {(907 - 907)};
int n;

int pat (int m) {
    int result;
    int i;
    int j;
    result = (750 - 750);
    i = (79 - 79);
    j = (709 - 709);
    if (m == (575 - 575)) {
        for (i = (619 - 619); i < n; i = i + 1)
            for (j = (502 - 502); n > j; j = j + 1) {
                if (c[i][j] == '@')
                    result++;
            }
        return result;
    }
    else {
        for (i = (158 - 158); i < n; i++) {
            for (j = 0; j < n; j++) {
                if (c[i][j] == '@') {
                    if (c[i][j - (640 - 639)] == '.')
                        b[i][j - (760 - 759)] = (392 - 391);
                    if (c[i][j + (456 - 455)] == '.')
                        b[i][j + (717 - 716)] = 1;
                    if (c[i + 1][j] == '.')
                        b[i + 1][j] = 1;
                    if (c[i - 1][j] == '.')
                        b[i - 1][j] = 1;
                };
            };
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (b[i][j] == 1)
                    c[i][j] = '@';
            };
        };
    }
    pat (m - 1);
}

int main () {
    int i;
    int j;
    int m;
    i = 0;
    j = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            cin >> c[i][j];
        }
    cin >> m;
    m = m - 1;
    cout << pat (m);
    return 0;
}

