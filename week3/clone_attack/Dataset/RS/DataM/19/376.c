int main () {
    int i, j, HVvwEDMN3ciT, F43hXz7, fMCJmLBg = 0;
    char s [(359 - 259)];
    char P8wEQS [100];
    char Amk5HAUgsL [100];
    char XF3Cfobey [100] [100];
    gets (s);
    gets (P8wEQS);
    gets (Amk5HAUgsL);
    HVvwEDMN3ciT = strlen (s);
    {
        i = 0;
        j = 0;
        while (i < HVvwEDMN3ciT +(729 - 728)) {
            if (s[i] != ' ' && !(0 == s[i])) {
                XF3Cfobey[fMCJmLBg][j] = s[i];
            }
            else {
                XF3Cfobey[fMCJmLBg][j] = 0;
                j = -1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                fMCJmLBg += (299 - 298);
            }
            i++;
            j = j + 1;
        };
    }
    for (i = 0; i < fMCJmLBg; i++) {
        if (strcmp (XF3Cfobey[i], P8wEQS) == 0) {
            strcpy (XF3Cfobey[i], Amk5HAUgsL);
        };
    }
    {
        i = 0;
        while (i < fMCJmLBg - 1) {
            printf ("%s ", XF3Cfobey[i]);
            i++;
        };
    }
    printf ("%s", XF3Cfobey[fMCJmLBg - 1]);
    return 0;
}

