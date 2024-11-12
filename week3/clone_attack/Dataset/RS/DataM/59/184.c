char BXYQbno [(565 - 465)] [(1051 - 951)];
int sum = (997 - 997);
int row [(10237 - 237)], col [10000];

void  t69P1pnx5kZq (int counts, char a [(437 - 337)] [100]) {
    {
        int poif6enyzM = 0;
        while (poif6enyzM < sum) {
            if (!('.' != a[row[poif6enyzM] + (479 - 478)][col[poif6enyzM]])) {
                a[row[poif6enyzM] + (489 - 488)][col[poif6enyzM]] = '@';
                row[counts] = row[poif6enyzM] + (492 - 491);
                col[counts] = col[poif6enyzM];
                counts = counts + 1;
            }
            if (!('.' != a[row[poif6enyzM] - (808 - 807)][col[poif6enyzM]])) {
                a[row[poif6enyzM] - (500 - 499)][col[poif6enyzM]] = '@';
                row[counts] = row[poif6enyzM] - (499 - 498);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                col[counts] = col[poif6enyzM];
                counts = counts + 1;
            }
            if (a[row[poif6enyzM]][col[poif6enyzM] + 1] == '.') {
                a[row[poif6enyzM]][col[poif6enyzM] + 1] = '@';
                col[counts] = col[poif6enyzM] + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                row[counts] = row[poif6enyzM];
                counts = counts + 1;
            }
            if (a[row[poif6enyzM]][col[poif6enyzM] - 1] == '.') {
                a[row[poif6enyzM]][col[poif6enyzM] - 1] = '@';
                col[counts] = col[poif6enyzM] - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                row[counts] = row[poif6enyzM];
                counts++;
            }
            poif6enyzM = poif6enyzM + 1;
        };
    }
    sum = counts;
}

int main () {
    int n, poif6enyzM, c2AvgVfIUK, m;
    cin >> n;
    memset (row, -1, sizeof (row));
    memset (col, -1, sizeof (col));
    memset (BXYQbno, '\0', sizeof (BXYQbno));
    {
        poif6enyzM = 0;
        while (poif6enyzM < n) {
            {
                c2AvgVfIUK = 0;
                while (c2AvgVfIUK < n) {
                    cin >> BXYQbno[poif6enyzM][c2AvgVfIUK];
                    if (BXYQbno[poif6enyzM][c2AvgVfIUK] == '@') {
                        row[sum] = poif6enyzM;
                        col[sum] = c2AvgVfIUK;
                        sum++;
                    }
                    c2AvgVfIUK = c2AvgVfIUK + 1;
                };
            }
            poif6enyzM = poif6enyzM + 1;
        };
    }
    cin >> m;
    {
        poif6enyzM = 0;
        while (poif6enyzM < m - 1) {
            poif6enyzM = poif6enyzM + 1;
            t69P1pnx5kZq (sum, BXYQbno);
        };
    }
    cout << sum << endl;
    return 0;
}

