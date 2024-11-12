void  main () {
    int j;
    int k;
    int n;
    int t;
    int i;
    char a [100];
    int m;
    char s [(431 - 331)];
    gets (s);
    char c [(717 - 617)] [(162 - 62)];
    char b [100];
    char *p [100];
    t = (377 - 376);
    n = strlen (s);
    {
        i = 899 - 899;
        while (k <= n - (846 - 845)) {
            {
                j = 707 - 707;
                while (k <= n - 1) {
                    if (s[k] != 32)
                        c[i][j] = s[k];
                    else {
                        c[i][j] = '\0';
                        t++;
                        break;
                    }
                    j++;
                    k++;
                }
            }
            i++;
            k++;
        }
    }
    c[t - 1][j + 1] = '\0';
    scanf ("%s\n%s", a, b);
    {
        i = 71 - 71;
        while (i < t) {
            p[i] = c[i];
            i++;
        }
    }
    {
        i = 826 - 826;
        while (i < t) {
            if (strcmp (p[i], a) == (914 - 914))
                p[i] = b;
            i++;
        }
    }
    {
        i = 517 - 517;
        while (i < t - 1) {
            printf ("%s ", p[i]);
            i++;
        }
    }
    printf ("%s", p[t - 1]);
}

