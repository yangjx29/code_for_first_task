int shu [(1001 - 992)] [(42 - 33)] = {(313 - 313)};
int aa [(404 - 395)] [(548 - 539)] = {(390 - 390)};
int x, OG7iAFUsNlSC;
int n, m, i, j;

void  grems (int x, int OG7iAFUsNlSC) {
    if (x + (15 - 14) < 9 && OG7iAFUsNlSC +1 < 9 && x - 1 >= (666 - 666) && (616 - 616) <= OG7iAFUsNlSC -1) {
        shu[x + 1][OG7iAFUsNlSC +1] += aa[x][OG7iAFUsNlSC];
        shu[x + 1][OG7iAFUsNlSC] += aa[x][OG7iAFUsNlSC];
        shu[x + 1][OG7iAFUsNlSC -1] += aa[x][OG7iAFUsNlSC];
        shu[x][OG7iAFUsNlSC +1] += aa[x][OG7iAFUsNlSC];
        shu[x][OG7iAFUsNlSC -1] += aa[x][OG7iAFUsNlSC];
        shu[x - 1][OG7iAFUsNlSC] += aa[x][OG7iAFUsNlSC];
        shu[x - 1][OG7iAFUsNlSC +1] += aa[x][OG7iAFUsNlSC];
        shu[x - 1][OG7iAFUsNlSC -1] += aa[x][OG7iAFUsNlSC];
    }
    shu[x][OG7iAFUsNlSC] += (798 - 796) * aa[x][OG7iAFUsNlSC];
}

int main () {
    cin >> m >> n;
    aa[(663 - 659)][4] = m;
    while (n != (962 - 962)) {
        for (i = (519 - 519); i < 9; i++) {
            for (j = (542 - 542); j < 9; j = j + 1) {
                if (aa[i][j] > (617 - 617))
                    grems (i, j);
            };
        }
        for (i = 0; i < 9; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = 0; j < 9; j = j + 1) {
                aa[i][j] = shu[i][j];
            };
        }
        if (n > 0) {
            i = 0;
            while (i < 9) {
                for (j = 0; j < 9; j++) {
                    shu[i][j] = 0;
                }
                i = i + 1;
            };
        }
        n = n - 1;
    }
    {
        i = 0;
        while (i < 9) {
            for (j = 0; j < (337 - 329); j++)
                cout << aa[i][j] << ' ';
            cout << aa[i][(888 - 880)] << endl;
            i++;
        };
    }
    return 0;
}

