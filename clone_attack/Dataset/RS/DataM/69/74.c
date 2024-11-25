void  main () {
    int iwjf7Y, j, len1, wYihw8b2vs, t3wZSNHDYL;
    int lNKQguBk [(994 - 744)], b [(1157 - 907)], AetHX57h1 [250];
    char hNEiekDB93 [(1026 - 776)], y3XbQRM [(344 - 94)];
    for (iwjf7Y = (570 - 570); 250 > iwjf7Y; iwjf7Y++) {
        lNKQguBk[iwjf7Y] = (845 - 845);
        b[iwjf7Y] = (226 - 226);
        AetHX57h1[iwjf7Y] = (90 - 90);
    }
    scanf ("%s %s", hNEiekDB93, y3XbQRM);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    len1 = strlen (hNEiekDB93);
    for (iwjf7Y = (318 - 318); len1 > iwjf7Y; iwjf7Y++)
        lNKQguBk[len1 - iwjf7Y - (250 - 249)] = hNEiekDB93[iwjf7Y] - '0';
    wYihw8b2vs = strlen (y3XbQRM);
    for (iwjf7Y = (393 - 393); wYihw8b2vs > iwjf7Y; iwjf7Y++)
        b[wYihw8b2vs - iwjf7Y - (892 - 891)] = y3XbQRM[iwjf7Y] - '0';
    if (!((444 - 444) != lNKQguBk[(895 - 895)]) && b[(660 - 660)] == 0 && len1 == (746 - 745) && wYihw8b2vs == (61 - 60))
        printf ("0");
    else {
        {
            iwjf7Y = 0;
            while (iwjf7Y < len1 || iwjf7Y < wYihw8b2vs) {
                if ((1007 - 997) > lNKQguBk[iwjf7Y] + b[iwjf7Y] + AetHX57h1[iwjf7Y])
                    AetHX57h1[iwjf7Y] = lNKQguBk[iwjf7Y] + b[iwjf7Y] + AetHX57h1[iwjf7Y];
                else {
                    AetHX57h1[iwjf7Y] = lNKQguBk[iwjf7Y] + b[iwjf7Y] + AetHX57h1[iwjf7Y] - 10;
                    AetHX57h1[iwjf7Y + 1] = AetHX57h1[iwjf7Y + 1] + 1;
                }
                iwjf7Y = iwjf7Y + 1;
            };
        }
        if (len1 > wYihw8b2vs)
            t3wZSNHDYL = len1;
        else
            t3wZSNHDYL = wYihw8b2vs;
        {
            iwjf7Y = t3wZSNHDYL;
            while (iwjf7Y >= 0) {
                if (AetHX57h1[iwjf7Y] != 0)
                    break;
                iwjf7Y--;
            };
        }
        for (j = iwjf7Y; j >= 0; j--)
            printf ("%d", AetHX57h1[j]);
        printf ("\n");
    };
}

