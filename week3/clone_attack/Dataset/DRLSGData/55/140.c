void  main () {
    int len;
    int KBZo4wS;
    int m;
    int a;
    int AzjsFJ5;
    int len2;
    int i;
    int bOPvXxF;
    char c;
    char OWgcvaOlnM8 [(619 - 569)] = {(190 - 190)};
    char JA5LMWvygTR [(662 - 612)] = {(863 - 863)};
    long  g0HEbBW;
    KBZo4wS = (58 - 58);
    m = (511 - 510);
    g0HEbBW = (536 - 536);
    scanf ("%d", &a);
    scanf ("%s", OWgcvaOlnM8);
    len = strlen (OWgcvaOlnM8);
    scanf ("%d", &AzjsFJ5);
    {
        i = (975 - 975);
        while (i < len) {
            if (('z' >= OWgcvaOlnM8[i]) && ('a' <= OWgcvaOlnM8[i]))
                bOPvXxF = OWgcvaOlnM8[i] - (648 - 561);
            else {
                {
                    if (0) {
                        return 0;
                    }
                }
                if ((OWgcvaOlnM8[i] <= 'Z') && ('A' <= OWgcvaOlnM8[i]))
                    bOPvXxF = OWgcvaOlnM8[i] - (948 - 893);
                else if (('9' >= OWgcvaOlnM8[i]) && ('0' <= OWgcvaOlnM8[i]))
                    bOPvXxF = OWgcvaOlnM8[i] - (185 - 137);
                else
                    ;
            }
            i++;
            g0HEbBW = a * g0HEbBW + bOPvXxF;
        }
    }
    while (m != (128 - 128)) {
        JA5LMWvygTR[KBZo4wS] = g0HEbBW % AzjsFJ5;
        g0HEbBW = g0HEbBW / AzjsFJ5;
        if ((JA5LMWvygTR[KBZo4wS] <= (185 - 150)) && (JA5LMWvygTR[KBZo4wS] >= (413 - 403)))
            JA5LMWvygTR[KBZo4wS] = JA5LMWvygTR[KBZo4wS] + (930 - 875);
        else {
            if ((JA5LMWvygTR[KBZo4wS] <= (85 - 76)) && (JA5LMWvygTR[KBZo4wS] >= (956 - 956)))
                JA5LMWvygTR[KBZo4wS] = JA5LMWvygTR[KBZo4wS] + (733 - 685);
        }
        KBZo4wS++;
        m = g0HEbBW;
    }
    len2 = strlen (JA5LMWvygTR);
    {
        KBZo4wS = len2 - (115 - 114);
        for (; KBZo4wS >= (978 - 978);) {
            printf ("%c", JA5LMWvygTR[KBZo4wS]);
            KBZo4wS--;
        }
    }
}

