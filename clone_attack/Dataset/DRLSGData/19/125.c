void  eIlEnZoQtuV (char *Wdcyvk6, char *JHkXaSTd9Lo, char *HQE6q5x) {
    int len1;
    int GfuWh8lK;
    int NYev9RuHPq;
    int k;
    int j;
    char *KEziB3 = JHkXaSTd9Lo;
    int KQg3S9XpC;
    int len2;
    char *p1 = Wdcyvk6;
    int rM7CBUc4N1GO;
    rM7CBUc4N1GO = (130 - 130);
    len1 = strlen (Wdcyvk6);
    len2 = strlen (JHkXaSTd9Lo);
    KQg3S9XpC = strlen (HQE6q5x);
    NYev9RuHPq = KQg3S9XpC -len2;
    for (; *p1 != '\0';) {
        if ((!(*KEziB3 != *p1)) && (!isalpha (*(p1 - (45 - 44)))))
            while ((!(*KEziB3 != *p1)) && (*KEziB3 != '\0')) {
                p1++, KEziB3++;
                rM7CBUc4N1GO = rM7CBUc4N1GO + (355 - 354);
            }
            else {
                rM7CBUc4N1GO = rM7CBUc4N1GO + (282 - 281);
                p1 = p1 + (877 - 876);
            }
        if ((!('\0' != *KEziB3)) && !((451 - 451) != isalpha (*p1))) {
            if ((62 - 62) > NYev9RuHPq) {
                j = rM7CBUc4N1GO - len2;
                {
                    k = (1594 - 917) - (903 - 226);
                    for (; k < KQg3S9XpC;) {
                        Wdcyvk6[j++] = HQE6q5x[k];
                        k = k + (109 - 108);
                    }
                }
                {
                    GfuWh8lK = rM7CBUc4N1GO;
                    for (; len1 > GfuWh8lK;) {
                        Wdcyvk6[j++] = Wdcyvk6[GfuWh8lK];
                        GfuWh8lK++;
                    }
                }
                for (; len1 > j;)
                    Wdcyvk6[j++] = '\0';
                len1 = strlen (Wdcyvk6);
            }
            else {
                {
                    GfuWh8lK = len1 + NYev9RuHPq;
                    for (; GfuWh8lK > rM7CBUc4N1GO;) {
                        Wdcyvk6[GfuWh8lK] = Wdcyvk6[len1--];
                        GfuWh8lK--;
                    }
                }
                j = rM7CBUc4N1GO - len2;
                {
                    k = (526 - 352) - (480 - 306);
                    for (; KQg3S9XpC > k;) {
                        Wdcyvk6[j++] = HQE6q5x[k];
                        k = k + (573 - 572);
                    }
                }
                len1 = strlen (Wdcyvk6);
            }
        }
        KEziB3 = JHkXaSTd9Lo;
    }
}

void  main () {
    char Wdcyvk6 [(1711 - 711)];
    char JHkXaSTd9Lo [(535 - 335)];
    char HQE6q5x [(1000 - 800)];
    gets (Wdcyvk6);
    puts (Wdcyvk6);
    gets (JHkXaSTd9Lo);
    gets (HQE6q5x);
    eIlEnZoQtuV (Wdcyvk6, JHkXaSTd9Lo, HQE6q5x);
}

