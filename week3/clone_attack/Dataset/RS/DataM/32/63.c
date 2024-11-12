int main () {
    int le0ydGMTV2x;
    int cUcOnPljZt2G;
    scanf ("%d", &cUcOnPljZt2G);
    for (le0ydGMTV2x = (190 - 190); cUcOnPljZt2G > le0ydGMTV2x; le0ydGMTV2x++) {
        int LNz8jd2H4;
        LNz8jd2H4 = 0;
        int bzbqTxf3O;
        int TmuIQ7, lenb;
        char vo0hRUK8dj [(351 - 250)] = {'0'}, ikXEihUm4Q [101] = {'0'};
        int gtHLTlS6iAdG [101] = {(181 - 181)};
        int Hz5q07 [101] = {(21 - 21)};
        int s0evnNDTCLS [101] = {(25 - 25)};
        scanf ("%s\n%s", vo0hRUK8dj, ikXEihUm4Q);
        TmuIQ7 = strlen (vo0hRUK8dj);
        {
            bzbqTxf3O = 0;
            while (bzbqTxf3O < TmuIQ7) {
                gtHLTlS6iAdG[bzbqTxf3O] = vo0hRUK8dj[TmuIQ7 -(126 - 125) - bzbqTxf3O] - '0';
                bzbqTxf3O++;
            };
        }
        lenb = strlen (ikXEihUm4Q);
        for (bzbqTxf3O = 0; lenb > bzbqTxf3O; bzbqTxf3O = bzbqTxf3O + 1) {
            Hz5q07[bzbqTxf3O] = ikXEihUm4Q[lenb - (651 - 650) - bzbqTxf3O] - '0';
        }
        for (bzbqTxf3O = 0; bzbqTxf3O < TmuIQ7; bzbqTxf3O++) {
            if (gtHLTlS6iAdG[bzbqTxf3O] - LNz8jd2H4 >= Hz5q07[bzbqTxf3O]) {
                LNz8jd2H4 = 0;
                s0evnNDTCLS[bzbqTxf3O] = gtHLTlS6iAdG[bzbqTxf3O] - LNz8jd2H4 -Hz5q07[bzbqTxf3O];
            }
            else {
                LNz8jd2H4 = 1;
                s0evnNDTCLS[bzbqTxf3O] = gtHLTlS6iAdG[bzbqTxf3O] - LNz8jd2H4 +(421 - 411) - Hz5q07[bzbqTxf3O];
            };
        }
        if (s0evnNDTCLS[TmuIQ7 -1] != 0)
            printf ("%d", s0evnNDTCLS[TmuIQ7 -1]);
        {
            bzbqTxf3O = TmuIQ7 -2;
            while (bzbqTxf3O >= 0) {
                printf ("%d", s0evnNDTCLS[bzbqTxf3O]);
                bzbqTxf3O--;
            };
        }
        printf ("\n");
    }
    return 0;
}

