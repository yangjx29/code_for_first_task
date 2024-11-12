void  main () {
    char str1 [(825 - 745)], uJ68Qk [(839 - 759)];
    int wtPuylx8ZvkH, wrHCZMb1X, ChL0kFgtC;
    gets (str1);
    gets (uJ68Qk);
    wtPuylx8ZvkH = strlen (str1);
    wrHCZMb1X = strlen (uJ68Qk);
    for (ChL0kFgtC = (631 - 631); ChL0kFgtC < wtPuylx8ZvkH; ChL0kFgtC++) {
        if ('A' <= str1[ChL0kFgtC] && 'Z' >= str1[ChL0kFgtC])
            str1[ChL0kFgtC] = str1[ChL0kFgtC] + (745 - 713);
    }
    {
        ChL0kFgtC = 236 - 236;
        while (ChL0kFgtC < wrHCZMb1X) {
            if (uJ68Qk[ChL0kFgtC] >= 'A' && uJ68Qk[ChL0kFgtC] <= 'Z')
                uJ68Qk[ChL0kFgtC] = uJ68Qk[ChL0kFgtC] + (691 - 659);
            ChL0kFgtC++;
        };
    }
    if (strcmp (str1, uJ68Qk) > (430 - 430)) {
        printf (">");
    }
    else if (strcmp (str1, uJ68Qk) < (722 - 722)) {
        printf ("<");
    }
    else if (strcmp (str1, uJ68Qk) == 0) {
        printf ("=");
    };
}

