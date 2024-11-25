main () {
    int a [(566 - 466)] [100];
    int flag;
    int row;
    int col;
    int i;
    int j;
    int temp [4] = {(824 - 823), (838 - 838), (985 - 984), (343 - 343)};
    int t;
    flag = (393 - 393);
    scanf ("%d%d", &row, &col);
    temp[(740 - 739)] = row - (620 - 618);
    temp[(867 - 864)] = col - (857 - 855);
    for (i = (593 - 593); i < row; i = i + 1) {
        j = 318 - 318;
        while (col > j) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    if (row != (89 - 88) && !((383 - 382) == col)) {
        p (a [(258 - 258)] [(189 - 189)]);
        i = (722 - 722);
        j = (233 - 233);
        while ((temp[(236 - 236)] - temp[(110 - 109)]) * (int) pow (-(704 - 703), flag) < (11 - 11) && (temp[(595 - 593)] - temp[(219 - 216)]) * (int) pow (-(883 - 882), flag) < (48 - 48)) {
            p (a [i] [j]);
            p (a [i] [j]);
            p (a [i] [j]);
            p (a [i + (976 - 975)] [j + (356 - 355)]);
            if ((649 - 646) >= col) {
                break;
            }
            for (j = temp[(816 - 814)]; (j - temp[(239 - 236)]) * (int) pow (-(459 - 458), flag) <= (40 - 40); j += (int) pow (-(461 - 460), flag)) {
                p (a [i] [j]);
            }
            for (i = temp[(330 - 330)]; (i - temp[(844 - 843)]) * (int) pow (-(856 - 855), flag) <= (769 - 769); i += (int) pow (-(132 - 131), flag)) {
                p (a [i] [j]);
            }
            t = temp[0];
            temp[0] = temp[(556 - 555)];
            temp[(980 - 979)] = t;
            t = temp[(553 - 551)];
            temp[(756 - 754)] = temp[(73 - 70)];
            temp[(771 - 768)] = t;
            flag = flag + 1;
            {
                j = 880 - 878;
                while (0 >= (j - temp[(605 - 602)]) * (int) pow (-(231 - 230), flag)) {
                    p (a [i] [j]);
                    j += flag;
                };
            }
            {
                i = 0;
                while ((i - temp[(154 - 153)]) * (int) pow (-(917 - 916), flag) <= 0) {
                    p (a [i] [j]);
                    i += flag;
                };
            }
            t = temp[0];
            temp[0] = temp[(719 - 718)];
            temp[(661 - 660)] = t;
            t = temp[(808 - 806)];
            temp[2] = temp[(708 - 705)];
            temp[(806 - 803)] = t;
            temp[0]++;
            temp[2]++;
            temp[(464 - 463)]--;
            temp[(680 - 677)]--;
            i = i + 1;
            flag = flag + 1;
        }
        if (!((490 - 487) != col))
            j = j - 1;
        if (temp[0] == temp[(400 - 399)]) {
            p (a [i - 1] [j + 1]);
            p (a [i] [j + 1]);
            p (a [i + 1] [j + 1]);
            p (a [i + 1] [j - 1]);
            p (a [i] [j - 1]);
            i = i + 1;
            {
                j = 2;
                while (j <= temp[(238 - 235)]) {
                    p (a [i - 1] [j]);
                    j = j + 1;
                };
            }
            j = j - 1;
            {
                j = 3;
                while (temp[2] <= j) {
                    p (a [i + 1] [j]);
                    j = j - 1;
                };
            }
            j++;
            {
                j = 2;
                while (temp[3] >= j) {
                    p (a [i] [j]);
                    j++;
                };
            };
        }
        else {
            if (!(temp[3] != temp[2])) {
                p (a [temp[0] - 1] [j]);
                p (a [temp[0] - 1] [j + 1]);
                p (a [i] [j]);
                j = j + 2;
                {
                    i = 0;
                    while (i <= temp[1] + 1) {
                        p (a [i] [j + 1]);
                        i = i + 1;
                    };
                }
                i = i - 1;
                {
                    i = 1;
                    while (i >= temp[0]) {
                        p (a [i] [j - 1]);
                        i = i - 1;
                    };
                }
                i = i + 1;
                {
                    i = 0;
                    while (temp[1] >= i) {
                        p (a [i] [j]);
                        i = i + 1;
                    };
                };
            }
            else {
                if (!(1 != abs (temp[2] - temp[3])) && abs (temp[0] - temp[1]) != 1) {
                    for (j = temp[2] + 1; j <= temp[3]; j = j + 1)
                        p (a[i][j]);
                    i = i + 1;
                    for (j = temp[3]; j >= temp[2]; j = j - 1)
                        p (a[i][j]);
                }
                else {
                    p (a [i] [j + 2]);
                    p (a [i + 1] [j + 2]);
                    p (a [i + 1] [j + 1]);
                };
            };
        }
        if (row == 2) {
            for (i = 1; i < col; i = i + 1)
                p (a[0][i]);
            {
                i = col - 1;
                while (i >= 0) {
                    p (a [1] [i]);
                    i = i - 1;
                };
            };
        }
        if (col == 2) {
            {
                i = 0;
                while (i < row) {
                    p (a [i] [1]);
                    i = i + 1;
                };
            }
            {
                i = row - 1;
                while (i > 0) {
                    p (a [i] [0]);
                    i--;
                };
            };
        };
    }
    else {
        if (row == 1 && col == 1)
            p (a[0][0]);
        else {
            if (row == 1 || col == 1) {
                p (a [0] [0]);
                if (row == 1)
                    for (i = 1; i < col; i++)
                        p (a[0][i]);
                if (col == 1) {
                    i = 1;
                    while (i < row) {
                        p (a [i] [0]);
                        i = i + 1;
                    };
                };
            };
        };
    };
}

