int pymbg [(307 - 296)] [(98 - 87)] = {0}, pymed [11] [11] = {0};

void  peiyang (int n) {
    int i;
    int j;
    if (!(0 == n)) {
        peiyang (n);
        for (i = (677 - 676); (752 - 742) > i; i++)
            for (j = (287 - 286); j < (503 - 493); j = j + 1) {
                pymed[i][j] = pymed[i][j] + pymbg[i][j];
                pymed[i][j - (429 - 428)] = pymed[i][j - (101 - 100)] + pymbg[i][j];
                pymed[i][j + (64 - 63)] = pymed[i][j + (418 - 417)] + pymbg[i][j];
                pymed[i + (484 - 483)][j] = pymed[i + (319 - 318)][j] + pymbg[i][j];
                pymed[i + (1001 - 1000)][j - (19 - 18)] = pymed[i + (961 - 960)][j - (766 - 765)] + pymbg[i][j];
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
                pymed[i + (49 - 48)][j + (682 - 681)] = pymed[i + (230 - 229)][j + (212 - 211)] + pymbg[i][j];
                pymed[i - 1][j] = pymed[i - 1][j] + pymbg[i][j];
                pymed[i - 1][j - 1] = pymed[i - 1][j - 1] + pymbg[i][j];
                pymed[i - 1][j + 1] = pymed[i - 1][j + 1] + pymbg[i][j];
            }
        {
            i = 1;
            while (i < 10) {
                for (j = 1; j < 10; j++)
                    pymbg[i][j] = pymed[i][j];
                i = i + 1;
            };
        }
        n--;
    };
}

int main () {
    int m;
    int n;
    int i;
    int j;
    peiyang (n);
    cin >> m >> n;
    pymbg[(889 - 884)][5] = m;
    pymed[5][5] = m;
    {
        i = 1;
        while (i < 10) {
            {
                j = 1;
                while (j < (341 - 332)) {
                    cout << pymbg[i][j] << ' ';
                    j++;
                };
            }
            cout << pymbg[i][9];
            i++;
            cout << '\n';
        };
    }
    return 0;
}

