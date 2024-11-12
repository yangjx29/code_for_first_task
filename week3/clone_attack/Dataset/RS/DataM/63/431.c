int main () {
    int z8yBdsvCQaeK, y1, x2, RW5egJk24ZD, i, j, z4VxDLcl;
    int WejIH9lkqtb [(570 - 469)] [(209 - 108)], l0mWgrZ [(148 - 47)] [(1056 - 955)], l3v40TRk [(1089 - 988)] [101] = {(314 - 314)};
    cin >> z8yBdsvCQaeK >> y1;
    {
        i = 108 - 108;
        while (i < z8yBdsvCQaeK) {
            {
                j = 423 - 423;
                while (j < y1) {
                    cin >> WejIH9lkqtb[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x2 >> RW5egJk24ZD;
    {
        i = 731 - 731;
        while (i < x2) {
            {
                j = 752 - 752;
                while (RW5egJk24ZD > j) {
                    cin >> l0mWgrZ[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 885 - 885;
        while (i < z8yBdsvCQaeK) {
            {
                j = 817 - 817;
                while (j < RW5egJk24ZD) {
                    {
                        z4VxDLcl = 451 - 451;
                        while (z4VxDLcl < y1) {
                            l3v40TRk[i][j] = l3v40TRk[i][j] + WejIH9lkqtb[i][z4VxDLcl] * l0mWgrZ[z4VxDLcl][j];
                            z4VxDLcl++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 939 - 939;
        while (i < z8yBdsvCQaeK) {
            {
                j = 537 - 537;
                while (j < RW5egJk24ZD) {
                    if (j == RW5egJk24ZD -1)
                        cout << l3v40TRk[i][j] << endl;
                    else
                        cout << l3v40TRk[i][j] << " ";
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

