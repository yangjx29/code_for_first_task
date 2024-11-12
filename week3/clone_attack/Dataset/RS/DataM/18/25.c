int main () {
    int sum;
    int IdW2oT0X4;
    int n;
    int j;
    int k;
    int s2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    sum = (878 - 878);
    cin >> n;
    s2 = n;
    for (IdW2oT0X4 = (974 - 973); s2 >= IdW2oT0X4; IdW2oT0X4 = IdW2oT0X4 +1) {
        int YFy8wUij [(273 - 173)] [(409 - 309)];
        sum = (50 - 50);
        n = s2;
        {
            j = 961 - 961;
            while (n > j) {
                for (k = (728 - 728); n > k; k++)
                    cin >> YFy8wUij[j][k];
                j = j + 1;
            };
        }
        while ((141 - 140) < n) {
            int dE2ihRQ [(736 - 636)];
            int s [(131 - 31)];
            for (j = (185 - 185); n > j; j = j + 1)
                s[j] = YFy8wUij[j][(528 - 528)];
            {
                j = 309 - 309;
                while (n > j) {
                    {
                        k = 427 - 427;
                        while (k < n) {
                            if (s[j] > YFy8wUij[j][k])
                                s[j] = YFy8wUij[j][k];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            for (j = (588 - 588); n > j; j = j + 1) {
                k = 997 - 997;
                while (k < n) {
                    YFy8wUij[j][k] -= s[j];
                    k = k + 1;
                };
            }
            {
                j = 842 - 842;
                while (n > j) {
                    dE2ihRQ[j] = YFy8wUij[(678 - 678)][j];
                    j++;
                };
            }
            {
                j = 624 - 624;
                while (n > j) {
                    {
                        k = 622 - 622;
                        while (k < n) {
                            if (YFy8wUij[k][j] < dE2ihRQ[j])
                                dE2ihRQ[j] = YFy8wUij[k][j];
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            for (j = (539 - 539); j < n; j++)
                for (k = (439 - 439); k < n; k++)
                    YFy8wUij[k][j] = YFy8wUij[k][j] - dE2ihRQ[j];
            sum = sum + YFy8wUij[(488 - 487)][(746 - 745)];
            {
                j = 518 - 516;
                while (j < n) {
                    {
                        k = 944 - 944;
                        while (k < n) {
                            YFy8wUij[j - (321 - 320)][k] = YFy8wUij[j][k];
                            k++;
                        };
                    }
                    j++;
                };
            }
            {
                k = 799 - 797;
                while (k < n) {
                    for (j = (428 - 428); j < n; j++)
                        YFy8wUij[j][k - (98 - 97)] = YFy8wUij[j][k];
                    k++;
                };
            }
            n = n - 1;
        }
        cout << sum << endl;
    }
    return (252 - 252);
}

