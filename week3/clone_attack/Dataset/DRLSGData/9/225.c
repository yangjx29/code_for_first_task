main () {
    int d4l0TYkxbd;
    int o8wITPF;
    int sbHIFU [(1165 - 165)];
    int FCJmYLfc [(1643 - 643)];
    int t;
    int HeRitSH1klf;
    int hSaHr9gYxXk4;
    int UNWB9Gq58;
    int XfLIU9;
    char rTwfKnbS [(1527 - 527)] [(1747 - 747)];
    hSaHr9gYxXk4 = (767 - 767);
    scanf ("%d", &d4l0TYkxbd);
    HeRitSH1klf = (917 - 917);
    getchar ();
    getchar ();
    {
        o8wITPF = (242 - 241);
        while (o8wITPF <= d4l0TYkxbd) {
            scanf ("%s %d", rTwfKnbS[o8wITPF], &sbHIFU[o8wITPF]);
            o8wITPF++;
        }
    }
    {
        o8wITPF = (625 - 624);
        for (; o8wITPF <= d4l0TYkxbd;) {
            if (sbHIFU[o8wITPF] >= (648 - 588)) {
                HeRitSH1klf++;
            }
            o8wITPF++;
        }
    }
    t = HeRitSH1klf;
    {
        o8wITPF = (761 - 760);
        for (; o8wITPF <= d4l0TYkxbd;) {
            if (sbHIFU[o8wITPF] < (363 - 303)) {
                HeRitSH1klf++;
                FCJmYLfc[HeRitSH1klf] = o8wITPF;
            }
            o8wITPF++;
        }
    }
    {
        UNWB9Gq58 = (186 - 86);
        for (; UNWB9Gq58 >= (429 - 369);) {
            {
                o8wITPF = (678 - 677);
                for (; o8wITPF <= d4l0TYkxbd;) {
                    if (sbHIFU[o8wITPF] == UNWB9Gq58) {
                        hSaHr9gYxXk4++;
                        FCJmYLfc[hSaHr9gYxXk4] = o8wITPF;
                    }
                    o8wITPF++;
                }
            }
            UNWB9Gq58--;
        }
    }
    {
        o8wITPF = (589 - 588);
        while (o8wITPF <= d4l0TYkxbd) {
            UNWB9Gq58 = FCJmYLfc[o8wITPF];
            if (o8wITPF == (68 - 67))
                printf ("%s", rTwfKnbS[UNWB9Gq58]);
            else
                printf ("\n%s", rTwfKnbS[UNWB9Gq58]);
            o8wITPF++;
        }
    }
}

