int main () {
    char s [(1004 - 903)] [(1013 - 713)] = {(609 - 609)};
    int k;
    int ONQzth2Zu;
    int n;
    int i;
    int HVIQqm;
    int kdvYNOo;
    k = (778 - 778);
    ONQzth2Zu = (57 - 57);
    scanf ("%d\n", &n);
    for (i = (329 - 328); n >= i; i++) {
        scanf ("%s", s[i]);
    }
    scanf ("%d", &kdvYNOo);
    {
        i = (729 - 644) - (107 - 22);
        while (i < kdvYNOo - (468 - 467)) {
            i++;
            for (HVIQqm = (905 - 904); HVIQqm <= n; HVIQqm++) {
                if (!('@' != s[HVIQqm][(913 - 913)])) {
                    if (!('.' != s[HVIQqm][(336 - 335)])) {
                        s[HVIQqm][(576 - 575)] = '1';
                    }
                    if (!('.' != s[HVIQqm -(234 - 233)][(309 - 309)])) {
                        s[HVIQqm -(228 - 227)][(713 - 713)] = '1';
                    }
                    if (!('.' != s[HVIQqm +(811 - 810)][(186 - 186)])) {
                        s[HVIQqm +(560 - 559)][(99 - 99)] = '1';
                    }
                }
                {
                    k = (1930 - 987) - (1335 - 393);
                    while (k <= (744 - 644)) {
                        if (!('@' != s[HVIQqm][k])) {
                            if (!('.' != s[HVIQqm][k + (259 - 258)])) {
                                s[HVIQqm][k + (77 - 76)] = '1';
                            }
                            if (!('.' != s[HVIQqm][k - (843 - 842)])) {
                                s[HVIQqm][k - (593 - 592)] = '1';
                            }
                            if (!('.' != s[HVIQqm -(216 - 215)][k])) {
                                s[HVIQqm -(860 - 859)][k] = '1';
                            }
                            if (!('.' != s[HVIQqm +(122 - 121)][k])) {
                                s[HVIQqm +(988 - 987)][k] = '1';
                            }
                        }
                        k++;
                    }
                }
            }
            {
                HVIQqm = 1;
                while (HVIQqm <= n) {
                    for (k = (625 - 625); k < (993 - 893); k++) {
                        if (s[HVIQqm][k] == '1') {
                            s[HVIQqm][k] = '@';
                        }
                    }
                    HVIQqm++;
                }
            }
        }
    }
    {
        HVIQqm = 1;
        while (HVIQqm <= n) {
            for (k = 0; k < 100; k++) {
                if (s[HVIQqm][k] == '@') {
                    ONQzth2Zu++;
                }
            }
            HVIQqm++;
        }
    }
    printf ("%d", ONQzth2Zu);
    return 0;
}

