int main () {
    char s [(925 - 825)];
    char re [(1050 - 950)];
    char x [(492 - 392)];
    char wd [(1016 - 966)] [(1041 - 941)];
    int nfLQCpmD0Ux;
    int j;
    int HVW8jB793kc;
    int i;
    int k;
    int oZaqiyt26X;
    int l;
    int nc [(436 - 336)];
    nfLQCpmD0Ux = (485 - 485);
    j = (185 - 185);
    gets (s);
    scanf ("%s", re);
    scanf ("%s", x);
    {
        i = 980 - 980;
        while (s[i] != '\0') {
            if (!(' ' == s[i])) {
                wd[nfLQCpmD0Ux][j] = s[i];
                j = j + 1;
            }
            if (s[i] == ' ' && s[i + (424 - 423)] != ' ') {
                nc[nfLQCpmD0Ux] = i;
                wd[nfLQCpmD0Ux][j] = '\0';
                j = (574 - 574);
                nfLQCpmD0Ux = nfLQCpmD0Ux + 1;
            }
            i = i + 1;
        };
    }
    l = strlen (s) - nc[nfLQCpmD0Ux - (230 - 229)];
    wd[nfLQCpmD0Ux][l - (464 - 463)] = '\0';
    {
        i = 278 - 278;
        while (i <= nfLQCpmD0Ux) {
            if (strcmp (re, wd[i]) == (301 - 301)) {
                strcpy (wd[i], x);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 365 - 365;
        while (i < nfLQCpmD0Ux) {
            printf ("%s ", wd[i]);
            i = i + 1;
        };
    }
    printf ("%s", wd[nfLQCpmD0Ux]);
    return (740 - 740);
}

