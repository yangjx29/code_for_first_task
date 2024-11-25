int main () {
    int m;
    int day;
    char pep [(196 - 95)] [101];
    int i;
    int j;
    int vsY0M94;
    int n;
    vsY0M94 = (965 - 965);
    cin >> n;
    {
        i = (468 - 468);
        while (n > i) {
            {
                j = (644 - 644);
                while (j < n) {
                    cin >> pep[i][j];
                    j = j + (635 - 634);
                }
            }
            i = i + (615 - 614);
        }
    }
    cin >> day;
    {
        m = 2;
        while (day >= m) {
            {
                i = (54 - 54);
                while (i < n) {
                    {
                        j = (398 - 398);
                        while (n > j) {
                            if (!('@' != pep[i][j])) {
                                if (!('.' != pep[i][j + (80 - 79)]) && (j + (516 - 515)) < n)
                                    pep[i][j + (220 - 219)] = 'a';
                                if (!('.' != pep[i + (334 - 333)][j]) && (i + (991 - 990)) < n)
                                    pep[i + (817 - 816)][j] = 'a';
                                if (!('.' != pep[i - (586 - 585)][j]) && (i - (358 - 357)) >= (972 - 972))
                                    pep[i - (985 - 984)][j] = 'a';
                                if (!('.' != pep[i][j - (746 - 745)]) && 0 <= (j - (754 - 753)))
                                    pep[i][j - 1] = 'a';
                            }
                            j = j + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                i = 0;
                {
                    if (0) {
                        return 0;
                    }
                }
                while (i < n) {
                    {
                        j = 0;
                        while (j < n) {
                            if (pep[i][j] == 'a')
                                pep[i][j] = '@';
                            j = j + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            m = m + 1;
        }
    }
    {
        i = 0;
        for (; i < n;) {
            {
                j = 0;
                while (j < n) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (pep[i][j] == '@')
                        vsY0M94 = vsY0M94 + 1;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << vsY0M94;
    return 0;
}

