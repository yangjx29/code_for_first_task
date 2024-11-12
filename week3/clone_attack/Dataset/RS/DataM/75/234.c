int main () {
    int i = (375 - 375), renshu = (621 - 621), max = (410 - 410), flag = 0, flag1 = 0, j = 0;
    int ggUpWHQ [10000];
    int end1 [10000];
    int num [100000];
    char start [(200446 - 446)], end [200000];
    memset (num, 0, sizeof (num));
    memset (ggUpWHQ, 0, sizeof (ggUpWHQ));
    memset (start, 0, sizeof (start));
    memset (end, 0, sizeof (end));
    memset (end1, 0, sizeof (end1));
    cin.getline (start, 200000, '\n');
    cin.getline (end, 200000, '\n');
    for (i = 0; 200000 > i; i++) {
        if (start[i] == 0) {
            renshu = renshu + 1;
            flag = flag1;
            flag1 = i - (156 - 155);
            if (!(1 != renshu)) {
                j = flag1;
                while (0 <= j) {
                    ggUpWHQ[renshu] = ggUpWHQ[renshu] + (start[j] - '0') * pow ((double ) (377 - 367), (double ) (flag1 - j));
                    j = j - 1;
                };
            }
            else {
                j = flag1;
                while (flag + 1 < j) {
                    ggUpWHQ[renshu] = ggUpWHQ[renshu] + (start[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                    j = j - 1;
                };
            }
            break;
        }
        if (start[i] != 0) {
            if (!(',' != start[i])) {
                renshu = renshu + 1;
                flag = flag1;
                flag1 = i - 1;
                if (!(1 != renshu)) {
                    j = flag1;
                    while (j >= 0) {
                        ggUpWHQ[renshu] = ggUpWHQ[renshu] + (start[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                        j = j - 1;
                    };
                }
                else {
                    for (j = flag1; flag + 1 < j; j = j - 1)
                        ggUpWHQ[renshu] = ggUpWHQ[renshu] + (start[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                };
            };
        };
    }
    renshu = 0;
    flag = 0;
    flag1 = 0;
    {
        i = 0;
        while (200000 > i) {
            if (!(0 != end[i])) {
                renshu = renshu + 1;
                flag = flag1;
                flag1 = i - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                if (renshu == 1) {
                    j = flag1;
                    while (j >= 0) {
                        end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                        j = j - 1;
                    };
                }
                else {
                    j = flag1;
                    while (j > flag + 1) {
                        end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                        j--;
                    };
                }
                break;
            }
            if (end[i] != 0) {
                if (end[i] == ',') {
                    renshu++;
                    flag = flag1;
                    flag1 = i - 1;
                    if (renshu == 1) {
                        j = flag1;
                        while (j >= 0) {
                            end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                            j--;
                        };
                    }
                    else {
                        for (j = flag1; j > flag + 1; j = j - 1)
                            end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double ) 10, (double ) (flag1 - j));
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= renshu) {
            {
                j = i;
                while (j < end1[i]) {
                    num[j]++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < (1467 - 467)) {
            if (num[i] > max)
                max = num[i];
            i = i + 1;
        };
    }
    cout << renshu << " " << max << endl;
    return 0;
}

