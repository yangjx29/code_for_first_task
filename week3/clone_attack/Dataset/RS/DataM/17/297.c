right (char yYAP1p6BTr [], int DmPYiphN5, int n) {
    int j;
    int hK3dvyJ = (819 - 819), right = (867 - 867);
    int Pu7bdT3QlJ;
    Pu7bdT3QlJ = (391 - 391);
    for (j = DmPYiphN5 +(283 - 282); n > j; j = j + 1) {
        if (!('(' != yYAP1p6BTr[j]))
            right = right + 1;
        if (!(')' != yYAP1p6BTr[j]))
            hK3dvyJ = hK3dvyJ + 1;
        if (hK3dvyJ > right) {
            Pu7bdT3QlJ = (848 - 847);
            break;
        };
    }
    return (Pu7bdT3QlJ);
}

hK3dvyJ (char yYAP1p6BTr [], int DmPYiphN5) {
    int j;
    int hK3dvyJ;
    int right;
    hK3dvyJ = (180 - 180);
    right = (706 - 706);
    int Pu7bdT3QlJ;
    Pu7bdT3QlJ = (371 - 371);
    {
        j = 931 - 930;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((301 - 301) <= j) {
            if (yYAP1p6BTr[j] == '(')
                right++;
            if (yYAP1p6BTr[j] == ')')
                hK3dvyJ = hK3dvyJ + 1;
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
            if (right > hK3dvyJ) {
                Pu7bdT3QlJ = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
            j = j - 1;
        };
    }
    return (Pu7bdT3QlJ);
}

trans (char YTnZUwrIqslL [], char s2 []) {
    int len;
    int DmPYiphN5;
    len = strlen (YTnZUwrIqslL);
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
    for (DmPYiphN5 = 0; DmPYiphN5 < len; DmPYiphN5 = DmPYiphN5 +1) {
        s2[DmPYiphN5] = ' ';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (YTnZUwrIqslL[DmPYiphN5] == ')') {
            if (hK3dvyJ (YTnZUwrIqslL, DmPYiphN5) == 1)
                s2[DmPYiphN5] = ' ';
            else
                s2[DmPYiphN5] = '?';
        }
        if (YTnZUwrIqslL[DmPYiphN5] == '(') {
            if (right (YTnZUwrIqslL, DmPYiphN5, len) == 1)
                s2[DmPYiphN5] == ' ';
            else
                s2[DmPYiphN5] = '$';
        };
    }
    s2[len] = '\0';
    return;
}

main () {
    int DmPYiphN5;
    int j;
    int n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    struct   aaa {
        char YTnZUwrIqslL [(394 - 289)];
        char s2 [(278 - 173)];
    };
    struct   aaa pJjW71xRGpB [(809 - 789)];
    scanf ("%d\n", &n);
    for (DmPYiphN5 = 0; DmPYiphN5 < n; DmPYiphN5 = DmPYiphN5 +1) {
        gets (pJjW71xRGpB[DmPYiphN5].YTnZUwrIqslL);
        trans (pJjW71xRGpB[DmPYiphN5].YTnZUwrIqslL, pJjW71xRGpB[DmPYiphN5].s2);
    }
    {
        DmPYiphN5 = 0;
        while (DmPYiphN5 < n) {
            printf ("%s\n%s\n", pJjW71xRGpB[DmPYiphN5].YTnZUwrIqslL, pJjW71xRGpB[DmPYiphN5].s2);
            DmPYiphN5++;
        };
    };
}

