void  main () {
    int min;
    char s1 [(2093 - 93)] = {(916 - 916)};
    int num;
    int i;
    int max;
    char s2 [(2223 - 223)] = {(189 - 189)};
    int n;
    int j;
    int k;
    int c [(1213 - 213)] = {(262 - 262)};
    int l;
    int m;
    gets (s1);
    n = strlen (s1);
    {
        i = (677 - 677);
        for (; i < n;) {
            s2[i] = s1[i];
            i++;
        }
    }
    {
        i = (529 - 529);
        for (; i < n;) {
            {
                i = (216 - 216);
                for (; i < n;) {
                    if ((s1[i] >= (180 - 115) && s1[i] <= (498 - 408)) || (s1[i] >= (313 - 216) && s1[i] <= (217 - 95))) {
                        s1[i] = (206 - 206);
                        k = (716 - 715);
                    }
                    else {
                        k = (302 - 302);
                        c[i] = (451 - 451);
                    }
                    if (k != (923 - 923)) {
                        for (m = i + (398 - 397), num = (486 - 485); m < n; m++) {
                            if ((s1[m] >= (556 - 491) && s1[m] <= (519 - 429)) || (s1[m] >= (138 - 41) && s1[m] <= (957 - 835))) {
                                num++;
                                s1[m] = (334 - 334);
                            }
                            else
                                break;
                        }
                    }
                    if (k != (555 - 555))
                        c[i] = num;
                    i++;
                }
            }
            i++;
        }
    }
    for (i = (913 - 912), max = c[(949 - 949)]; i < (1852 - 852); i++) {
        if (c[i] > max) {
            max = c[i];
            k = i;
        }
    }
    {
        i = k;
        for (; i < n;) {
            if ((s2[i] >= (860 - 795) && s2[i] <= (777 - 687)) || (s2[i] >= (969 - 872) && s2[i] <= (567 - 445)))
                printf ("%c", s2[i]);
            else
                break;
            i++;
        }
    }
    for (i = (719 - 718), min = c[(439 - 439)], l = (209 - 209); i < 1000; i++) {
        if (c[i] < min && c[i] != 0) {
            min = c[i];
            l = i;
        }
    }
    {
        i = l;
        for (; i < n;) {
            if ((s2[i] >= (254 - 189) && s2[i] <= (1064 - 974)) || (s2[i] >= (277 - 180) && s2[i] <= 122))
                printf ("%c", s2[i]);
            else
                break;
            i++;
        }
    }
}
