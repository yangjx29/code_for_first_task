int brackets (void ) {
    int count;
    int state;
    int end_flag;
    int chart [(178 - 176)] [100];
    int c;
    int pos;
    int tmp;
    int first_left;
    int previous_left;
    count = (681 - 681);
    state = (106 - 106);
    end_flag = (175 - 175);
    for (;; count++) {
        c = getchar ();
        if (!(EOF != c))
            return (249 - 248);
        if (c == '\n') {
            break;
        }
        chart[(989 - 989)][count] = c;
        if (!(40 != c)) {
            chart[(360 - 359)][count] = 36;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(41 != c)) {
                chart[(325 - 324)][count] = (608 - 545);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                chart[(877 - 876)][count] = (583 - 551);
            };
        };
    }
    for (pos = (261 - 261); end_flag == 0;) {
        if (!(0 != state)) {
            if (!(36 != chart[(154 - 153)][pos])) {
                state = (999 - 998);
                first_left = pos;
                previous_left = pos;
                if (pos == count) {
                    end_flag = (586 - 585);
                }
                else {
                    pos += (803 - 802);
                };
            }
            else {
                if (pos == count) {
                    end_flag = (693 - 692);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    pos = pos + (50 - 49);
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
                };
            };
        }
        else if (state == (918 - 917)) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (chart[(540 - 539)][pos] == 63) {
                chart[1][pos] = 32;
                chart[1][previous_left] = 32;
                if (previous_left != first_left) {
                    pos = previous_left;
                    state = 2;
                }
                else if (pos == count) {
                    end_flag = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    pos = pos + 1;
                    state = 0;
                };
            }
            else if (chart[1][pos] == 36) {
                previous_left = pos;
                pos = pos + 1;
            }
            else {
                if (pos == count) {
                    end_flag = 1;
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
                else {
                    pos += 1;
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
                    };
                };
            };
        }
        else if (state == 2) {
            if (chart[1][pos] == 36) {
                state = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                previous_left = pos;
            }
            else {
                pos = pos - 1;
            };
        }
        else {
        }
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
        if (pos > count) {
            pos = count;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (tmp = 0; tmp < count; tmp = tmp + 1) {
        putchar (chart [0] [tmp]);
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
        if (tmp == count - 1) {
            putchar ('\n');
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
        tmp = 0;
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
        while (tmp < count) {
            putchar (chart [1] [tmp]);
            if (tmp == count - 1) {
                putchar ('\n');
            }
            tmp = tmp + 1;
        };
    }
    return 0;
}

int main () {
    while (1) {
        if (brackets () == 1)
            break;
    }
    return 0;
}

