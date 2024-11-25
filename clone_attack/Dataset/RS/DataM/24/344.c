int main () {
    int RdizUtB5 = (220 - 220);
    int x;
    x = (896 - 896);
    int min = (82 - 62);
    int y = (796 - 796);
    char string [(4753 - 753)];
    char str [(226 - 186)] [(652 - 632)];
    char temp [(151 - 131)] = "";
    int xdxur2;
    int BkXnACrTc0;
    int LEmywMi7rgCe;
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
    int n;
    int m;
    xdxur2 = (722 - 722);
    BkXnACrTc0 = 0;
    gets (string);
    n = strlen (string);
    {
        LEmywMi7rgCe = 0;
        while (LEmywMi7rgCe < n) {
            if (string[LEmywMi7rgCe] != ' ') {
                temp[xdxur2] = string[LEmywMi7rgCe];
                str[BkXnACrTc0][xdxur2] = string[LEmywMi7rgCe];
                xdxur2++;
            }
            else {
                xdxur2 = 0;
                strcpy (str[BkXnACrTc0], temp);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                BkXnACrTc0++;
                {
                    m = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (20 > m) {
                        temp[m] = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        m++;
                    };
                };
            }
            if (!(n - (821 - 820) != LEmywMi7rgCe)) {
                strcpy (str[BkXnACrTc0], temp);
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
                for (m = 0; m < 20; m++)
                    temp[m] = 0;
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
            LEmywMi7rgCe++;
        };
    }
    for (LEmywMi7rgCe = 0; LEmywMi7rgCe <= BkXnACrTc0; LEmywMi7rgCe++) {
        if (strlen (str[LEmywMi7rgCe]) > RdizUtB5) {
            RdizUtB5 = strlen (str[LEmywMi7rgCe]);
            x = LEmywMi7rgCe;
        }
        if (strlen (str[LEmywMi7rgCe]) < min) {
            min = strlen (str[LEmywMi7rgCe]);
            y = LEmywMi7rgCe;
        };
    }
    printf ("%s\n", str[x]);
    printf ("%s", str[y]);
    return 0;
}

