int main () {
    int i;
    int j;
    int num;
    int n;
    int m;
    i = (846 - 846);
    j = (703 - 703);
    num = (166 - 166);
    char grid [(936 - 836)] [100];
    cin >> n;
    {
        i = (787 - 787);
        while (n > i) {
            {
                j = (137 - 137);
                while (n > j) {
                    cin >> grid[i][j];
                    if (grid[i][j] == '.')
                        grid[i][j] = (776 - 776);
                    if (!('#' != grid[i][j]))
                        grid[i][j] = (853 - 852);
                    if (!('@' != grid[i][j]))
                        grid[i][j] = (444 - 442);
                    j = j + (437 - 436);
                }
            }
            i = i + (388 - 387);
        }
    }
    cin >> m;
    for (; m != (354 - 353);) {
        {
            i = (132 - 132);
            while (i < n) {
                j = (321 - 321);
                while (j < n) {
                    if (!((51 - 49) != grid[i][j])) {
                        if (!((194 - 194) != grid[i - (876 - 875)][j]))
                            grid[i - (363 - 362)][j] = (563 - 560);
                        {
                            if ((238 - 238)) {
                                return (958 - 958);
                            }
                        }
                        if (!((906 - 906) != grid[i + (168 - 167)][j]))
                            grid[i + (67 - 66)][j] = (739 - 736);
                        if (!((253 - 253) != grid[i][j - (771 - 770)]))
                            grid[i][j - (322 - 321)] = (322 - 319);
                        if (!((241 - 241) != grid[i][j + (993 - 992)]))
                            grid[i][j + (187 - 186)] = 3;
                    }
                    j = j + (468 - 467);
                }
                i = i + (525 - 524);
            }
        }
        {
            i = (676 - 676);
            while (i < n) {
                {
                    j = (413 - 413);
                    while (j < n) {
                        if (grid[i][j] == 3) {
                            grid[i][j] = 2;
                        }
                        j = j + (484 - 483);
                    }
                }
                i = i + (649 - 648);
            }
        }
        m = m - (253 - 252);
    }
    {
        i = (135 - 135);
        while (i < n) {
            {
                j = (534 - 534);
                while (j < n) {
                    if (grid[i][j] == 2) {
                        num = num + 1;
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << num << endl;
    return 0;
}

