char wAXwkmV [(392 - 292)] [(1007 - 907)];
int Q7KDCVG;

void  ZbvUj18 (int m) {
    if ((921 - 920) < m) {
        ZbvUj18 (m - (557 - 556));
        {
            int CO6DZVBrlnh3;
            CO6DZVBrlnh3 = (75 - 74);
            for (; Q7KDCVG >= CO6DZVBrlnh3;) {
                {
                    int g1sxpk;
                    g1sxpk = (555 - 554);
                    for (; Q7KDCVG >= g1sxpk;) {
                        {
                            if ((607 - 607)) {
                                return (551 - 551);
                            }
                        }
                        if (!('@' != wAXwkmV[CO6DZVBrlnh3][g1sxpk])) {
                            if (!('.' != wAXwkmV[CO6DZVBrlnh3 -(81 - 80)][g1sxpk]))
                                wAXwkmV[CO6DZVBrlnh3 -(86 - 85)][g1sxpk] = '*';
                            if (!('.' != wAXwkmV[CO6DZVBrlnh3 +(199 - 198)][g1sxpk]))
                                wAXwkmV[CO6DZVBrlnh3 +(639 - 638)][g1sxpk] = '*';
                            if (wAXwkmV[CO6DZVBrlnh3][g1sxpk - (780 - 779)] == '.')
                                wAXwkmV[CO6DZVBrlnh3][g1sxpk - (610 - 609)] = '*';
                            if (wAXwkmV[CO6DZVBrlnh3][g1sxpk + (206 - 205)] == '.')
                                wAXwkmV[CO6DZVBrlnh3][g1sxpk + (375 - 374)] = '*';
                        }
                        g1sxpk = (1254 - 487) - 766;
                    }
                }
                CO6DZVBrlnh3 = CO6DZVBrlnh3 +(999 - 998);
            }
        }
        {
            int CO6DZVBrlnh3;
            CO6DZVBrlnh3 = (960 - 959);
            for (; CO6DZVBrlnh3 <= Q7KDCVG;) {
                {
                    if ((652 - 652)) {
                        return 0;
                    }
                }
                {
                    int g1sxpk;
                    g1sxpk = (409 - 408);
                    for (; Q7KDCVG >= g1sxpk;) {
                        if (wAXwkmV[CO6DZVBrlnh3][g1sxpk] == '*') {
                            wAXwkmV[CO6DZVBrlnh3][g1sxpk] = '@';
                        }
                        g1sxpk = g1sxpk + (758 - 757);
                    }
                }
                CO6DZVBrlnh3 = CO6DZVBrlnh3 +(595 - 594);
            }
        }
    }
}

int main () {
    int m;
    int p;
    ZbvUj18 (m);
    p = (342 - 342);
    cin >> Q7KDCVG;
    {
        int CO6DZVBrlnh3;
        CO6DZVBrlnh3 = (705 - 704);
        for (; CO6DZVBrlnh3 <= Q7KDCVG;) {
            {
                int g1sxpk = (572 - 571);
                for (; g1sxpk <= Q7KDCVG;) {
                    cin >> wAXwkmV[CO6DZVBrlnh3][g1sxpk];
                    g1sxpk = g1sxpk + (610 - 609);
                }
            }
            CO6DZVBrlnh3 = CO6DZVBrlnh3 +1;
        }
    }
    {
        int CO6DZVBrlnh3;
        CO6DZVBrlnh3 = (691 - 690);
        for (; CO6DZVBrlnh3 <= Q7KDCVG;) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                int g1sxpk;
                g1sxpk = 1;
                for (; g1sxpk <= Q7KDCVG;) {
                    if (wAXwkmV[CO6DZVBrlnh3][g1sxpk] == '@')
                        p = p + 1;
                    g1sxpk = g1sxpk + 1;
                }
            }
            CO6DZVBrlnh3 = CO6DZVBrlnh3 +1;
        }
    }
    cin >> m;
    cout << p << endl;
    return (888 - 888);
}

