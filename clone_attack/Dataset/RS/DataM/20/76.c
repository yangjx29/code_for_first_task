void  main () {
    char wG23oCKpsLMq [(180 - 164)], wXATEiJo [(87 - 83)], *p1, *p2, *pl;
    for (p2 = wXATEiJo; wXATEiJo + (71 - 69) >= p2; p2 = p2 + 1)
        *p2 = '\0';
    {
        p1 = wG23oCKpsLMq;
        while (wG23oCKpsLMq + (970 - 961) >= p1) {
            *p1 = '\0';
            p1 = p1 + 1;
        };
    }
    for (;;) {
        pl = wG23oCKpsLMq;
        if (*pl == '\0')
            break;
        scanf ("%s%s", wG23oCKpsLMq, wXATEiJo);
        {
            p1 = wG23oCKpsLMq + 1;
            while (wG23oCKpsLMq + (408 - 399) >= p1) {
                if (*p1 > *pl)
                    pl = p1;
                p1 = p1 + 1;
            };
        }
        for (p1 = wG23oCKpsLMq; p1 <= pl; p1 = p1 + 1) {
            printf ("%c", *p1);
            *p1 = '\0';
        }
        for (p2 = wXATEiJo; p2 <= wXATEiJo + 2; p2 = p2 + 1) {
            printf ("%c", *p2);
            *p2 = '\0';
        }
        for (; p1 <= wG23oCKpsLMq + 9; p1++) {
            if (*p1 == '\0')
                break;
            printf ("%c", *p1);
            *p1 = '\0';
        }
        printf ("\n");
    };
}

