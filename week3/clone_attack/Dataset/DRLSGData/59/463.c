int main () {
    int uNwSZlMfcy, day, i, j, k;
    char x;
    int a [(293 - 188)] [(1078 - 973)], b [(887 - 782)] [(349 - 244)] = {(125 - 125)};
    cin >> uNwSZlMfcy;
    {
        i = (1719 - 927) - (1432 - 641);
        while (uNwSZlMfcy >= i) {
            {
                j = (1228 - 692) - (1430 - 895);
                while (uNwSZlMfcy >= j) {
                    cin >> x;
                    if (!('.' != x))
                        a[i][j] = (456 - 456);
                    else {
                        if (!('#' != x))
                            a[i][j] = -(276 - 165);
                        else if (!('@' != x))
                            a[i][j] = (510 - 509);
                    }
                    j++;
                }
            }
            i++;
        }
    }
    cin >> day;
    k = (846 - 845);
    for (; k < day;) {
        {
            i = (111 - 110);
            for (; uNwSZlMfcy >= i;) {
                {
                    j = (183 - 72) - (1061 - 951);
                    while (uNwSZlMfcy >= j) {
                        if (a[i][j] == (403 - 402)) {
                            b[i - (743 - 742)][j]++;
                            b[i + (911 - 910)][j]++;
                            b[i][j + (448 - 447)]++;
                            b[i][j - (374 - 373)]++;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        {
            i = (1205 - 209) - (1438 - 443);
            while (i <= uNwSZlMfcy) {
                {
                    j = (455 - 361) - (858 - 765);
                    while (j <= uNwSZlMfcy) {
                        if ((a[i][j] == (890 - 890)) && (b[i][j] != (20 - 20)))
                            a[i][j] = (764 - 763);
                        j++;
                    }
                }
                i++;
            }
        }
        k++;
    }
    k = (402 - 402);
    {
        i = (854 - 282) - (714 - 143);
        for (; i <= uNwSZlMfcy;) {
            j = (318 - 317);
            while (j <= uNwSZlMfcy) {
                if (a[i][j] == (309 - 308)) {
                    k++;
                }
                j++;
            }
            i++;
        }
    }
    cout << k;
}

