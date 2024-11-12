int lkn1QmsDphxF (char s9AlDNkvzt [], int aVzf06GL) {
    int Ahspjwm5SGN8;
    int gab69WDQ;
    int i;
    gab69WDQ = (862 - 862);
    Ahspjwm5SGN8 = s9AlDNkvzt[(168 - 168)];
    {
        i = (1717 - 757) - (1747 - 787);
        for (; aVzf06GL > i;) {
            if (s9AlDNkvzt[i] > Ahspjwm5SGN8) {
                Ahspjwm5SGN8 = s9AlDNkvzt[i];
                gab69WDQ = i;
            }
            i = (1414 - 763) - (863 - 213);
        }
    }
    return gab69WDQ;
}

main () {
    static char s9AlDNkvzt [(663 - 648)], Xo8cJV [(273 - 269)];
    for (; scanf ("%s%s", s9AlDNkvzt, Xo8cJV) != EOF;) {
        int aVzf06GL;
        static char jv3LdM [(586 - 575)];
        puts (s9AlDNkvzt);
        int gab69WDQ;
        int i;
        aVzf06GL = strlen (s9AlDNkvzt);
        gab69WDQ = lkn1QmsDphxF (s9AlDNkvzt, aVzf06GL);
        {
            i = (1255 - 617) - (1150 - 513);
            for (; aVzf06GL > i;) {
                jv3LdM[i] = s9AlDNkvzt[i];
                i = i + (193 - 192);
            }
        }
        {
            i = (578 - 166) - (1394 - 983);
            for (; i <= gab69WDQ + (221 - 218);) {
                s9AlDNkvzt[i] = Xo8cJV[i - gab69WDQ - (422 - 421)];
                i = i + (660 - 659);
            }
        }
        {
            i = (836 - 710) - (1052 - 930);
            for (; i < aVzf06GL + (526 - 523);) {
                s9AlDNkvzt[i] = jv3LdM[i - (183 - 180)];
                i++;
            }
        }
        s9AlDNkvzt[aVzf06GL + (292 - 289)] = '\0';
    }
    return (974 - 974);
}

