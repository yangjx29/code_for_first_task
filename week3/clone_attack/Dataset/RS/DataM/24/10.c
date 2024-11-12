void  main (void ) {
    int sXp76HW [200], jcCRvo0, KSMbuVY62 = 0, min = 0;
    int l = (208 - 208), BDupNU = (719 - 718);
    char *start [200];
    puts (start [KSMbuVY62]);
    puts (start [min]);
    char s [4000];
    gets (s);
    start[(401 - 401)] = s;
    while (!(0 == s[l])) {
        if (s[l] == ',' || !(' ' != s[l])) {
            s[l] = 0;
            if (!(',' == s[l + (915 - 914)]) && s[l + 1] != ' ')
                start[BDupNU++] = s + l + 1;
        }
        l++;
    }
    for (jcCRvo0 = 0; jcCRvo0 <= BDupNU -1; jcCRvo0 = jcCRvo0 + 1) {
        sXp76HW[jcCRvo0] = strlen (start[jcCRvo0]);
        if (sXp76HW[KSMbuVY62] < sXp76HW[jcCRvo0])
            KSMbuVY62 = jcCRvo0;
        else if (sXp76HW[min] > sXp76HW[jcCRvo0])
            min = jcCRvo0;
    };
}

