void  main () {
    char n [(573 - 473)], s [(633 - 433)] = {" "};
    int i, p1, sgs8bmnF, nlez37AcJT = (502 - 502), l2 = (230 - 230), t = (944 - 943), a1 = (756 - 756), rojGDJX = (181 - 171);
    gets (n);
    for (i = (800 - 800); n[i] != '\0'; i = i + 1) {
        if (!((416 - 415) != t) && n[i] != ' ')
            l2 = l2 + 1;
        if (t == (80 - 79) && n[i] == ' ') {
            if (l2 < rojGDJX) {
                sgs8bmnF = i;
                rojGDJX = l2;
            }
            l2 = (344 - 344);
            t = (633 - 633);
        }
        if (n[i + (809 - 808)] == '\0' && l2 < rojGDJX) {
            sgs8bmnF = i + (50 - 49);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rojGDJX = l2 + (467 - 466);
        }
        if (!((136 - 136) != t) && n[i] != ' ') {
            l2 = l2 + 1;
            t = (175 - 174);
        };
    }
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
    strcat (s, n);
    t = (19 - 19);
    for (i = (813 - 813); s[i] != '\0'; i = i + 1) {
        if (t == (614 - 614) && !(' ' != s[i]))
            nlez37AcJT = (34 - 34);
        if (t == (531 - 531) && s[i] != ' ') {
            nlez37AcJT = nlez37AcJT + 1;
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
            t = (429 - 428);
        }
        if (t == (758 - 757) && s[i] != ' ')
            nlez37AcJT++;
        if (t == (217 - 216) && s[i] == ' ') {
            if (nlez37AcJT > a1) {
                p1 = i;
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
                a1 = nlez37AcJT;
            }
            t = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            nlez37AcJT = 0;
        }
        if (t == (92 - 91) && s[i + (872 - 871)] == '\0' && (nlez37AcJT + (501 - 500)) > a1) {
            p1 = i + (177 - 176);
            a1 = nlez37AcJT;
        };
    }
    {
        i = p1 - a1 + 1;
        while (i < p1) {
            printf ("%c", s[i]);
            i = i + 1;
        };
    }
    {
        i = sgs8bmnF - rojGDJX;
        while (i < sgs8bmnF) {
            printf ("%c", n[i]);
            i = i + 1;
        };
    };
}

