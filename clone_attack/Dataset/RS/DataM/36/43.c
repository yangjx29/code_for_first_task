void  main () {
    int PsZnwgbG;
    int ll;
    int i;
    int flag;
    char s [50];
    char EUh3xtoQ [50];
    int hCh9Fn17X [52] = {0};
    scanf ("%s", s);
    scanf ("%s", EUh3xtoQ);
    PsZnwgbG = strlen (s);
    ll = strlen (EUh3xtoQ);
    if (!(ll == PsZnwgbG))
        ;
    else {
        flag = 1;
        {
            i = 0;
            while (PsZnwgbG > i) {
                if (s[i] >= 'A' && 'Z' >= s[i])
                    hCh9Fn17X[s[i] - 'a']++;
                else if ('a' <= s[i] && 'z' >= s[i])
                    hCh9Fn17X[s[i] - 'a' + 26]++;
                i++;
            };
        }
        for (i = 0; PsZnwgbG > i; i++) {
            if (EUh3xtoQ[i] >= 'A' && EUh3xtoQ[i] <= 'Z')
                hCh9Fn17X[EUh3xtoQ[i] - 'a']--;
            else if (EUh3xtoQ[i] >= 'a' && EUh3xtoQ[i] <= 'z')
                hCh9Fn17X[EUh3xtoQ[i] - 'a' + 26]--;
        }
        {
            i = 0;
            while (i < 52) {
                if (hCh9Fn17X[i]) {
                    flag = 0;
                    break;
                }
                i++;
            };
        }
        if (flag)
            ;
        else
            printf ("NO");
    };
}

