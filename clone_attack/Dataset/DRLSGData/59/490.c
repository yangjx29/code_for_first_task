int main () {
    int jishu;
    jishu = (48 - 48);
    int n;
    char jz [n] [n];
    int jz1 [(286 - 186)] [n] [n];
    int i;
    int j;
    int k;
    int d;
    cin >> n;
    {
        i = 733 - 733;
        while (n > i) {
            {
                j = 950 - 950;
                while (n > j) {
                    cin >> jz[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    cin >> d;
    {
        i = 82 - 82;
        while (i < n) {
            {
                j = 922 - 922;
                while (n > j) {
                    if (!('.' != jz[i][j]))
                        jz1[(36 - 36)][i][j] = (904 - 904);
                    if (!('#' != jz[i][j]))
                        jz1[(468 - 468)][i][j] = -100000;
                    if (!('@' != jz[i][j]))
                        jz1[(533 - 533)][i][j] = (194 - 193);
                    j++;
                }
            }
            i++;
        }
    }
    {
        k = 349 - 348;
        while (100 > k) {
            {
                i = 0;
                while (i < n) {
                    {
                        j = 0;
                        while (n > j) {
                            jz1[k][i][j] = jz1[0][i][j];
                            j++;
                        }
                    }
                    i++;
                }
            }
            k++;
        }
    }
    {
        k = 0;
        while (k < d - (736 - 735)) {
            {
                i = 0;
                while (i < n) {
                    {
                        j = 0;
                        while (n > j) {
                            if (jz1[k][i][j] > 0) {
                                if (!(0 != i) && !(0 != j)) {
                                    jz1[k + (895 - 894)][(993 - 992)][0]++;
                                    jz1[k + (293 - 292)][0][(46 - 45)]++;
                                }
                                else if (!(n - (130 - 129) != i) && !(0 != j)) {
                                    jz1[k + (553 - 552)][n - 2][0]++;
                                    jz1[k + (712 - 711)][n - (148 - 147)][(221 - 220)]++;
                                }
                                else if (!(0 != i) && !(n - 1 != j)) {
                                    jz1[k + 1][1][n - 1]++;
                                    jz1[k + 1][0][n - 2]++;
                                }
                                else if (!(n - 1 != i) && !(n - 1 != j)) {
                                    jz1[k + 1][n - 2][n - 1]++;
                                    jz1[k + 1][n - 1][n - 2]++;
                                }
                                else if (i == 0) {
                                    jz1[k + 1][0][j + 1]++;
                                    jz1[k + 1][0][j - 1]++;
                                    jz1[k + 1][1][j]++;
                                }
                                else if (j == 0) {
                                    jz1[k + 1][i + 1][j]++;
                                    jz1[k + 1][i - 1][j]++;
                                    jz1[k + 1][i][j + 1]++;
                                }
                                else if (i == n - 1) {
                                    jz1[k + 1][n - 1][j + 1]++;
                                    jz1[k + 1][n - 1][j - 1]++;
                                    jz1[k + 1][n - 2][j]++;
                                }
                                else if (j == n - 1) {
                                    jz1[k + 1][i + 1][n - 1]++;
                                    jz1[k + 1][i - 1][n - 1]++;
                                    jz1[k + 1][i][n - 2]++;
                                }
                                else {
                                    jz1[k + 1][i + 1][j]++;
                                    jz1[k + 1][i - 1][j]++;
                                    jz1[k + 1][i][j + 1]++;
                                    jz1[k + 1][i][j - 1]++;
                                }
                            }
                            j++;
                        }
                    }
                    i++;
                }
            }
            k++;
        }
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (jz1[d - 1][i][j] > 0)
                        jishu++;
                    j++;
                }
            }
            i++;
        }
    }
    cout << jishu;
    return 0;
}

