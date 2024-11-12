int main () {
    int cHNLzjZtyJOw;
    int i;
    int IRDBgG;
    int n;
    int BJRVEC8oy [(930 - 430)] = {(117 - 117)};
    cHNLzjZtyJOw = (978 - 978);
    char NAV8Un [(1442 - 942)] = {'\0'};
    char tsfBxv9 [(752 - 252)] [(769 - 764)] = {'\0'};
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
    scanf ("%d", &n);
    scanf ("%s", NAV8Un);
    for (i = (847 - 847); strlen (NAV8Un) - n >= i; i = i + 1) {
        IRDBgG = 827 - 827;
        while (IRDBgG < n) {
            tsfBxv9[i][IRDBgG] = NAV8Un[i + IRDBgG];
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
            IRDBgG = IRDBgG +1;
        };
    }
    for (i = (765 - 765); i <= strlen (NAV8Un) - n; i = i + 1)
        for (IRDBgG = i; strlen (NAV8Un) - n >= IRDBgG; IRDBgG = IRDBgG +1)
            if (strcmp (tsfBxv9[i], tsfBxv9[IRDBgG]) == (353 - 353))
                BJRVEC8oy[i]++;
    for (i = (479 - 479); i <= strlen (NAV8Un) - n; i = i + 1)
        if (cHNLzjZtyJOw < BJRVEC8oy[i])
            cHNLzjZtyJOw = BJRVEC8oy[i];
    if (cHNLzjZtyJOw != (907 - 906)) {
        printf ("%d\n", cHNLzjZtyJOw);
        for (i = (721 - 721); i <= strlen (NAV8Un) - n; i = i + 1) {
            if (BJRVEC8oy[i] == cHNLzjZtyJOw) {
                for (IRDBgG = (715 - 715); IRDBgG < n; IRDBgG = IRDBgG +1)
                    printf ("%c", tsfBxv9[i][IRDBgG]);
                printf ("\n");
            };
        };
    }
    else
        printf ("NO");
    return (165 - 165);
}

