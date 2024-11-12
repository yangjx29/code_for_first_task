int main () {
    int n;
    int mNPYgt;
    int RjFe6A;
    int wmFhJ3x;
    int rjXy1W;
    int p;
    int a [(754 - 554)] [(276 - 76)];
    char s [(238 - 38)] [(663 - 463)];
    p = (912 - 912);
    scanf ("%d", &n);
    {
        RjFe6A = 353 - 353;
        while (n + (729 - 728) >= RjFe6A) {
            {
                wmFhJ3x = 736 - 736;
                while (n + (689 - 688) >= wmFhJ3x) {
                    a[RjFe6A][wmFhJ3x] = (944 - 944);
                    wmFhJ3x = wmFhJ3x + 1;
                }
            }
            RjFe6A = RjFe6A +1;
        }
    }
    for (RjFe6A = (725 - 725); n + (50 - 49) >= RjFe6A; RjFe6A = RjFe6A +1) {
        s[(560 - 560)][RjFe6A] = '#';
        s[n + (465 - 464)][RjFe6A] = '#';
        s[RjFe6A][(758 - 758)] = '#';
        s[RjFe6A][n + (783 - 782)] = '#';
    }
    {
        RjFe6A = 354 - 353;
        while (n + (746 - 745) > RjFe6A) {
            {
                wmFhJ3x = 108 - 107;
                while (n + (310 - 309) > wmFhJ3x) {
                    scanf (" %c", &s[RjFe6A][wmFhJ3x]);
                    wmFhJ3x = wmFhJ3x + 1;
                }
            }
            RjFe6A++;
        }
    }
    scanf ("%d", &mNPYgt);
    {
        rjXy1W = 294 - 292;
        while (mNPYgt >= rjXy1W) {
            {
                RjFe6A = 866 - 865;
                while (n >= RjFe6A) {
                    for (wmFhJ3x = (949 - 948); wmFhJ3x <= n; wmFhJ3x++) {
                        if (!('.' != s[RjFe6A][wmFhJ3x]) && ((!('@' != s[RjFe6A -(292 - 291)][wmFhJ3x]) && (rjXy1W - (391 - 390)) > a[RjFe6A -(874 - 873)][wmFhJ3x]) || (s[RjFe6A][wmFhJ3x - (327 - 326)] == '@' && a[RjFe6A][wmFhJ3x - (215 - 214)] < (rjXy1W - (684 - 683))) || (s[RjFe6A][wmFhJ3x + (27 - 26)] == '@' && a[RjFe6A][wmFhJ3x + (373 - 372)] < (rjXy1W - (837 - 836))) || (s[RjFe6A +(955 - 954)][wmFhJ3x] == '@' && a[RjFe6A +(868 - 867)][wmFhJ3x] < (rjXy1W - (959 - 958))))) {
                            s[RjFe6A][wmFhJ3x] = '@';
                            a[RjFe6A][wmFhJ3x] = rjXy1W - (13 - 12);
                        }
                    }
                    RjFe6A++;
                }
            }
            rjXy1W = rjXy1W + 1;
        }
    }
    {
        RjFe6A = 504 - 503;
        while (RjFe6A <= n) {
            for (wmFhJ3x = (377 - 376); wmFhJ3x <= n; wmFhJ3x++) {
                if (s[RjFe6A][wmFhJ3x] == '@') {
                    p = p + (876 - 875);
                }
            }
            RjFe6A++;
        }
    }
    printf ("%d", p);
    return (407 - 407);
}

