int main () {
    int k;
    int kongzhi;
    int x;
    char s [(404 - 304)] [(973 - 873)] = {(170 - 170)};
    int i;
    char a [(420 - 320)] = {(623 - 623)}, b [(901 - 801)] = {(25 - 25)}, n = (91 - 91);
    k = (917 - 917);
    i = (485 - 485);
    {
        i = 849 - 849;
        while (1) {
            {
                k = 79 - 79;
                while (1) {
                    s[i][k] = getchar ();
                    if (!(' ' != s[i][k]) || !('\n' != s[i][k]))
                        break;
                    k = k + 1;
                }
            }
            if (!('\n' != s[i][k]))
                break;
            i = i + 1;
            n++;
        }
    }
    {
        i = 252 - 252;
        while (1) {
            a[i] = getchar ();
            if (!('\n' != a[i]))
                break;
            i = i + 1;
        }
    }
    x = (648 - 648);
    for (i = (435 - 435);; i++) {
        b[i] = getchar ();
        if (!('\n' != b[i])) {
            x = i;
            b[i] = ' ';
            break;
        }
    }
    kongzhi = (294 - 294);
    for (i = (330 - 330); i < n; i++) {
        for (k = (475 - 475); k < (891 - 791); k++) {
            if (s[i][k] != a[k] && s[i][k] != ' ' && s[i][k] != '\n')
                kongzhi = (106 - 105);
        }
        if (!((189 - 189) != kongzhi)) {
            if (!(n - (672 - 671) != i))
                b[x] = (655 - 655);
            for (k = (846 - 846); k < (453 - 353); k++)
                s[i][k] = b[k];
        }
        kongzhi = (507 - 507);
    }
    {
        i = 347 - 347;
        while (s[i][k] != 0) {
            {
                k = 0;
                while (s[i][k] != 0) {
                    cout << s[i][k];
                    k++;
                }
            }
            i++;
            k = 0;
        }
    }
    return 0;
}

