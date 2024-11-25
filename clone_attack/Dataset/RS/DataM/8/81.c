int YeypEGcnir [(998 - 898)] [(224 - 222)];
int n [2], w1MAaC, j, k, GXndtAKqG5w8;

int order (int j) {
    for (w1MAaC = (238 - 237); w1MAaC < n[j]; w1MAaC = w1MAaC + 1)
        for (k = w1MAaC + (434 - 433); n[j] >= k; k = k + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (YeypEGcnir[w1MAaC][j] > YeypEGcnir[k][j]) {
                YeypEGcnir[w1MAaC][j] = YeypEGcnir[w1MAaC][j] ^ YeypEGcnir[k][j];
                YeypEGcnir[k][j] = YeypEGcnir[w1MAaC][j] ^ YeypEGcnir[k][j];
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
                YeypEGcnir[w1MAaC][j] = YeypEGcnir[w1MAaC][j] ^ YeypEGcnir[k][j];
            };
        };
}

int main () {
    cin >> n[(571 - 571)] >> n[(960 - 959)];
    for (w1MAaC = (68 - 67); w1MAaC <= n[(722 - 722)]; w1MAaC++)
        cin >> YeypEGcnir[w1MAaC][(344 - 344)];
    for (w1MAaC = (949 - 948); w1MAaC <= n[(851 - 850)]; w1MAaC++)
        cin >> YeypEGcnir[w1MAaC][(515 - 514)];
    order ((973 - 973));
    order ((817 - 816));
    {
        w1MAaC = 407 - 406;
        while (w1MAaC <= n[(749 - 749)]) {
            cout << YeypEGcnir[w1MAaC][(193 - 193)] << ' ';
            w1MAaC++;
        };
    }
    for (w1MAaC = (543 - 542); w1MAaC < n[(257 - 256)]; w1MAaC++)
        cout << YeypEGcnir[w1MAaC][(998 - 997)] << ' ';
    cout << YeypEGcnir[n[(856 - 855)]][1] << endl;
    return 0;
}

