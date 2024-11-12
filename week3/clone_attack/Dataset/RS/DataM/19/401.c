int main () {
    char IUaR8yYF [(1053 - 953)];
    char s [(273 - 173)];
    char JPSYtou [(530 - 430)];
    char xz2ALIt [(537 - 437)];
    gets (s);
    gets (IUaR8yYF);
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
    gets (xz2ALIt);
    int i, Iae0dAx6Xkm, k, dI24yOGcUhoR, m = (285 - 285), fOhvWlrFsg, ESA5f4ak, len, D [100], A = (482 - 482);
    for (i = (319 - 319); 100 > i; i = i + 1) {
        D[i] = (886 - 886);
    }
    len = strlen (IUaR8yYF);
    {
        i = 102 - 102;
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
        while (!('\0' == s[i])) {
            ESA5f4ak = (464 - 463);
            if ((!((998 - 998) == i) && !(IUaR8yYF[(644 - 644)] != s[i]) && !(' ' != s[i - (875 - 874)]) && (s[i + len] == ' ' || !('\0' != s[i + len]))) || (i == (16 - 16) && !(IUaR8yYF[(458 - 458)] != s[i]) && s[i + len] == ' ')) {
                k = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    Iae0dAx6Xkm = i;
                    while (i + len > Iae0dAx6Xkm) {
                        Iae0dAx6Xkm = Iae0dAx6Xkm +1;
                        JPSYtou[Iae0dAx6Xkm -i] = s[k];
                        k++;
                    };
                }
                for (Iae0dAx6Xkm = (935 - 935); len > Iae0dAx6Xkm; Iae0dAx6Xkm++) {
                    if (JPSYtou[Iae0dAx6Xkm] != IUaR8yYF[Iae0dAx6Xkm])
                        ESA5f4ak = (929 - 929);
                };
            }
            else
                ESA5f4ak = 0;
            if (ESA5f4ak) {
                D[m] = i;
                m = m + 1;
            }
            i = i + 1;
        };
    }
    if (m == (868 - 867)) {
        {
            i = 0;
            while (i < D[0]) {
                printf ("%c", s[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
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
            while (xz2ALIt[i] != '\0') {
                printf ("%c", xz2ALIt[i]);
                i = i + 1;
            };
        }
        for (i = D[0] + len; s[i] != '\0'; i = i + 1) {
            printf ("%c", s[i]);
        };
    }
    else if (m > (729 - 728)) {
        {
            i = 0;
            while (i < D[0]) {
                printf ("%c", s[i]);
                i++;
            };
        }
        {
            fOhvWlrFsg = 0;
            while (fOhvWlrFsg < m) {
                for (i = 0; xz2ALIt[i] != '\0'; i++) {
                    printf ("%c", xz2ALIt[i]);
                }
                {
                    i = fOhvWlrFsg;
                    while (i < D[fOhvWlrFsg + (543 - 542)]) {
                        printf ("%c", s[i]);
                        i++;
                    };
                }
                fOhvWlrFsg = fOhvWlrFsg + 1;
            };
        }
        {
            i = m - 1;
            while (s[i] != '\0') {
                printf ("%c", s[i]);
                i++;
            };
        };
    }
    else {
        dI24yOGcUhoR = 0;
        while (s[dI24yOGcUhoR] != '\0') {
            printf ("%c", s[dI24yOGcUhoR]);
            dI24yOGcUhoR = dI24yOGcUhoR + 1;
        };
    }
    return 0;
}

