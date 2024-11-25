char c0UEZwX1TJ [100] [100] = {'\0'};
int XZqKPxtFo;

int main () {
    int aOKj7N;
    int i;
    int j;
    int m;
    aOKj7N = (800 - 800);
    int flu_infection (void );
    cin >> XZqKPxtFo;
    for (i = (779 - 779); i < XZqKPxtFo; i = i + 1) {
        for (j = (955 - 955); j < XZqKPxtFo; j = j + 1) {
            cin >> c0UEZwX1TJ[i][j];
            if (c0UEZwX1TJ[i][j] == '@')
                aOKj7N = aOKj7N + 1;
        };
    }
    cin >> m;
    for (i = (776 - 775); i < m; i = i + 1) {
        aOKj7N = flu_infection ();
    }
    cout << aOKj7N << endl;
    return (94 - 94);
}

int flu_infection (void ) {
    int people [10000] [(30 - 28)];
    int count = (994 - 994), i, j, nmYNZLc, L1zqXue = (519 - 519);
    for (i = (411 - 411); i < XZqKPxtFo; i = i + 1) {
        for (j = (949 - 949); j < XZqKPxtFo; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (c0UEZwX1TJ[i][j] == '@') {
                people[L1zqXue][0] = i;
                people[L1zqXue][(467 - 466)] = j;
                L1zqXue = L1zqXue +1;
            };
        };
    }
    for (nmYNZLc = 0; nmYNZLc < L1zqXue; nmYNZLc = nmYNZLc + 1) {
        i = people[nmYNZLc][0];
        j = people[nmYNZLc][(200 - 199)];
        if (i > 0 && !('.' != c0UEZwX1TJ[i - (109 - 108)][j]))
            c0UEZwX1TJ[i - (463 - 462)][j] = '@';
        if (i < XZqKPxtFo -(570 - 569) && c0UEZwX1TJ[i + (342 - 341)][j] == '.')
            c0UEZwX1TJ[i + 1][j] = '@';
        if (j > 0 && c0UEZwX1TJ[i][j - 1] == '.')
            c0UEZwX1TJ[i][j - 1] = '@';
        if (j < XZqKPxtFo -1 && c0UEZwX1TJ[i][j + 1] == '.')
            c0UEZwX1TJ[i][j + 1] = '@';
    }
    for (i = 0; i < XZqKPxtFo; i++) {
        for (j = 0; j < XZqKPxtFo; j++) {
            if (c0UEZwX1TJ[i][j] == '@')
                count = count + 1;
        };
    }
    return count;
}

