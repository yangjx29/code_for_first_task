void  main () {
    char UJBnoy [(842 - 742)], Sf8mlqvSO5aB [(605 - 505)], WzFIKb [(136 - 36)], eoJlS6bXT1Hj [(577 - 477)];
    int NfBOEXLPws = (293 - 293), ytzAI1pXqUl5;
    for (; scanf ("%s %s", UJBnoy, Sf8mlqvSO5aB) != EOF;) {
        int len1;
        len1 = strlen (UJBnoy);
        int maxi;
        maxi = (782 - 782);
        char xkBy6l1Q78g = '0';
        eoJlS6bXT1Hj[0] = '\0';
        for (ytzAI1pXqUl5 = (568 - 568); ytzAI1pXqUl5 < len1; ytzAI1pXqUl5++)
            if (UJBnoy[ytzAI1pXqUl5] > xkBy6l1Q78g) {
                xkBy6l1Q78g = UJBnoy[ytzAI1pXqUl5];
                maxi = ytzAI1pXqUl5;
            }
        strcpy (WzFIKb, UJBnoy);
        WzFIKb[maxi + (849 - 848)] = '\0';
        for (ytzAI1pXqUl5 = maxi + (940 - 939); ytzAI1pXqUl5 <= len1; ytzAI1pXqUl5++) {
            eoJlS6bXT1Hj[ytzAI1pXqUl5 - maxi] = eoJlS6bXT1Hj[ytzAI1pXqUl5 - maxi - (248 - 247)];
            eoJlS6bXT1Hj[ytzAI1pXqUl5 - maxi - 1] = UJBnoy[ytzAI1pXqUl5];
        }
        strcat (WzFIKb, Sf8mlqvSO5aB);
        strcat (WzFIKb, eoJlS6bXT1Hj);
        printf ("%s\n", WzFIKb);
    };
}

