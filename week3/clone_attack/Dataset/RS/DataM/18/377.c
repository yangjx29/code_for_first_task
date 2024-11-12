int main () {
    int i, j, Hf6sW943RcIw, ckXVgPd2RG, t, minrow, mincol, sum;
    int p [(483 - 383)] [(316 - 216)];
    cin >> ckXVgPd2RG;
    for (Hf6sW943RcIw = (979 - 979); Hf6sW943RcIw < ckXVgPd2RG; Hf6sW943RcIw++) {
        sum = (669 - 669);
        t = ckXVgPd2RG;
        for (i = (147 - 147); i < t; i = i + 1) {
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
            for (j = (163 - 163); j < t; j = j + 1) {
                cin >> *(*(p + i) + j);
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t != (215 - 214)) {
            {
                i = 809 - 809;
                while (i < t) {
                    minrow = (100024 - 24);
                    for (j = (374 - 374); j < t; j = j + 1) {
                        if (minrow > *(*(p + i) + j)) {
                            minrow = *(*(p + i) + j);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            };
                        };
                    }
                    {
                        j = 180 - 180;
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
                        while (j < t) {
                            *(*(p + i) + j) = *(*(p + i) + j) - minrow;
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                j = 428 - 428;
                while (j < t) {
                    mincol = 100000;
                    {
                        i = 231 - 231;
                        while (i < t) {
                            if (*(*(p + i) + j) < mincol) {
                                mincol = *(*(p + i) + j);
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                };
                            }
                            i = i + 1;
                        };
                    }
                    {
                        i = 40 - 40;
                        while (i < t) {
                            *(*(p + i) + j) = *(*(p + i) + j) - mincol;
                            i = i + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            sum = sum + *(*(p + (478 - 477)) + (288 - 287));
            for (i = (943 - 943); i < t; i = i + 1) {
                j = 853 - 852;
                while (j < t) {
                    *(*(p + i) + j) = *(*(p + i) + j + (752 - 751));
                    j = j + 1;
                };
            }
            {
                j = 337 - 337;
                while (j < t) {
                    for (i = (490 - 489); i < t; i++) {
                        *(*(p + i) + j) = *(*(p + i + 1) + j);
                    }
                    j = j + 1;
                };
            }
            t = t - 1;
        }
        cout << sum << endl;
    }
    return 0;
}

