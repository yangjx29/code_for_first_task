int main () {
    int a [(661 - 550)] [111] = {0};
    int b [111] [111] = {0};
    int n;
    char c [111] [111];
    int day;
    int sum = 0;
    char ch;
    cin >> n;
    {
        int i = (675 - 674);
        for (; n >= i;) {
            {
                if (0) {
                    return 0;
                }
            }
            cin >> c[i];
            i = i + (685 - 684);
        }
    }
    {
        int i = (609 - 608);
        for (; n >= i;) {
            {
                int j = (525 - 524);
                for (; n >= j;) {
                    ch = c[i][j - (629 - 628)];
                    if (!('.' != ch))
                        a[i][j] = (931 - 930);
                    else {
                        if (!('#' != ch))
                            a[i][j] = 0;
                        else
                            a[i][j] = -(966 - 965);
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cin >> day;
    {
        int i = 0;
        for (; day - (390 - 389) > i;) {
            {
                int k = (603 - 602);
                for (; n >= k;) {
                    int j;
                    j = (26 - 25);
                    for (; n >= j;) {
                        b[k][j] = a[k][j];
                        j = j + 1;
                    }
                    k = k + 1;
                }
            }
            {
                int r = (495 - 494);
                for (; n >= r;) {
                    {
                        int co = (991 - 990);
                        for (; n >= co;) {
                            if (a[r][co] == -1) {
                                if (a[r - 1][co] == 1)
                                    b[r - 1][co] = -1;
                                if (a[r + 1][co] == 1)
                                    b[r + 1][co] = -1;
                                if (a[r][co - 1] == 1)
                                    b[r][co - 1] = -1;
                                if (a[r][co + 1] == 1)
                                    b[r][co + 1] = -1;
                            }
                            co = co + 1;
                        }
                    }
                    r = r + 1;
                }
            }
            {
                int r = 1;
                for (; r <= n;) {
                    int co = 1;
                    for (; co <= n;) {
                        a[r][co] = b[r][co];
                        co = co + 1;
                    }
                    r = r + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        int i = 1;
        for (; i <= n;) {
            {
                int j = 1;
                for (; j <= n;) {
                    if (a[i][j] == -1)
                        sum = sum + 1;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << sum;
    return 0;
}

