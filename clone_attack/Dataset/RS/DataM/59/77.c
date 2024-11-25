int main () {
    int AxIWcg9l;
    int HK6p4ToPI9R;
    int m;
    int i;
    int j;
    int T1IJH8;
    AxIWcg9l = (715 - 715);
    char jBPtz4FkiZn [(162 - 61)] [(187 - 86)] [(1009 - 908)];
    cin >> HK6p4ToPI9R;
    {
        i = 461 - 460;
        while (HK6p4ToPI9R >= i) {
            {
                j = 390 - 389;
                while (HK6p4ToPI9R >= j) {
                    cin >> jBPtz4FkiZn[i][j][(485 - 484)];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        T1IJH8 = 514 - 513;
        while (m - (886 - 885) >= T1IJH8) {
            {
                i = 991 - 990;
                while (HK6p4ToPI9R >= i) {
                    for (j = (136 - 135); j <= HK6p4ToPI9R; j++)
                        jBPtz4FkiZn[i][j][T1IJH8 +(475 - 474)] = jBPtz4FkiZn[i][j][T1IJH8];
                    i = i + 1;
                };
            }
            {
                i = 420 - 419;
                while (i <= HK6p4ToPI9R) {
                    {
                        j = 953 - 952;
                        while (j <= HK6p4ToPI9R) {
                            if (jBPtz4FkiZn[i][j][T1IJH8] == '@') {
                                if (jBPtz4FkiZn[i + (643 - 642)][j][T1IJH8] == '.')
                                    jBPtz4FkiZn[i + (199 - 198)][j][T1IJH8 +(78 - 77)] = '@';
                                if (jBPtz4FkiZn[i - (989 - 988)][j][T1IJH8] == '.')
                                    jBPtz4FkiZn[i - (723 - 722)][j][T1IJH8 +(436 - 435)] = '@';
                                if (jBPtz4FkiZn[i][j + (185 - 184)][T1IJH8] == '.')
                                    jBPtz4FkiZn[i][j + (25 - 24)][T1IJH8 +(242 - 241)] = '@';
                                if (jBPtz4FkiZn[i][j - (110 - 109)][T1IJH8] == '.')
                                    jBPtz4FkiZn[i][j - (433 - 432)][T1IJH8 +(731 - 730)] = '@';
                            }
                            j++;
                        };
                    }
                    i++;
                };
            }
            T1IJH8 = T1IJH8 +1;
        };
    }
    {
        i = 1;
        while (i <= HK6p4ToPI9R) {
            {
                j = 1;
                while (j <= HK6p4ToPI9R) {
                    if (jBPtz4FkiZn[i][j][m] == '@')
                        AxIWcg9l += 1;
                    j++;
                };
            }
            i++;
        };
    }
    cout << AxIWcg9l;
    return (675 - 675);
}

