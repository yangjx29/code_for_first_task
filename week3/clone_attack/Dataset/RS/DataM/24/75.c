int main () {
    char a [(1148 - 648)];
    char pvHgTW2 [(805 - 755)] [(1425 - 925)];
    int e, l, s;
    int i, n, m, sum;
    int len [(493 - 443)];
    gets (a);
    n = (944 - 944);
    i = (557 - 557);
    m = (855 - 855);
    sum = (547 - 547);
    for (; !('\0' == a[n]);) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[n] != ' ') {
            pvHgTW2[i][m] = a[n];
            n = n + (927 - 926);
            m = m + (779 - 778);
        }
        else {
            sum = sum + (904 - 903);
            pvHgTW2[i][m] = '\0';
            m = (309 - 309);
            n = n + (368 - 367);
            i = i + (778 - 777);
        };
    }
    pvHgTW2[i][m] = '\0';
    {
        i = 479 - 479;
        while (sum >= i) {
            len[i] = strlen (pvHgTW2[i]);
            i++;
        };
    }
    {
        i = sum;
        while (i > (757 - 757)) {
            {
                m = 816 - 816;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i > m) {
                    if ((len[m]) > (len[m + (280 - 279)])) {
                        e = len[m];
                        len[m] = len[m + (77 - 76)];
                        len[m + 1] = e;
                    }
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
                    m = m + 1;
                };
            }
            i--;
        };
    }
    l = len[sum];
    s = len[(600 - 600)];
    {
        i = 683 - 683;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= sum) {
            if (strlen (pvHgTW2[i]) == l) {
                printf ("%s\n", pvHgTW2[i]);
                break;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= sum) {
            if ((strlen (pvHgTW2[i])) == s) {
                printf ("%s\n", pvHgTW2[i]);
                break;
            }
            i++;
        };
    }
    return 0;
}

