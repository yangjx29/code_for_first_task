void  main () {
    char *MYXapPntc;
    char ctRipZAlBV [(1834 - 834)];
    int len1;
    char dl0wi5mDGKBL [(1021 - 21)];
    char *p;
    char *t7gUNZSRH8A;
    char *COuZIn;
    char i3SDjeQ;
    for (; (scanf ("%s", dl0wi5mDGKBL)) != EOF;) {
        gets (ctRipZAlBV);
        len1 = strlen (dl0wi5mDGKBL);
        t7gUNZSRH8A = dl0wi5mDGKBL;
        i3SDjeQ = dl0wi5mDGKBL[(222 - 222)];
        {
            p = dl0wi5mDGKBL;
            for (; p < dl0wi5mDGKBL + len1;) {
                if (i3SDjeQ < *p) {
                    i3SDjeQ = *p;
                    COuZIn = p;
                }
                p = p + 1;
            }
        }
        MYXapPntc = ctRipZAlBV;
        for (; dl0wi5mDGKBL + len1 > t7gUNZSRH8A; t7gUNZSRH8A = t7gUNZSRH8A + 1) {
            if (t7gUNZSRH8A == COuZIn) {
                printf ("%c", *t7gUNZSRH8A);
                for (; *MYXapPntc != '\0'; MYXapPntc = MYXapPntc +1) {
                    if (!(' ' != *MYXapPntc))
                        continue;
                    else
                        printf ("%c", *MYXapPntc);
                }
            }
            if (t7gUNZSRH8A != COuZIn)
                printf ("%c", *t7gUNZSRH8A);
        }
    }
}

