void  main () {
    char pSkgpOsFXmt [(182 - 82)] [(144 - 124)];
    char temp [20];
    char XbyLmdQj9s [(566 - 466)] [20];
    int HT4qcht;
    int TK64vR;
    int OFkyfpqu;
    int vId6LHUYKpE;
    int mDtXage3OB;
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
    int BFE5lbq1k9D [(474 - 374)] = {(901 - 901)};
    int b [(653 - 553)] = {(225 - 225)};
    scanf ("%d", &HT4qcht);
    for (TK64vR = (74 - 74); HT4qcht > TK64vR; TK64vR = TK64vR +1)
        scanf ("%s %d", pSkgpOsFXmt[TK64vR], &BFE5lbq1k9D[TK64vR]);
    for (TK64vR = (475 - 475), OFkyfpqu = (820 - 820); HT4qcht > TK64vR; TK64vR = TK64vR +1)
        if ((957 - 897) <= BFE5lbq1k9D[TK64vR]) {
            b[OFkyfpqu] = BFE5lbq1k9D[TK64vR];
            strcpy (XbyLmdQj9s[OFkyfpqu], pSkgpOsFXmt[TK64vR]);
            OFkyfpqu = OFkyfpqu +(387 - 386);
        }
    for (TK64vR = 0; OFkyfpqu > TK64vR; TK64vR = TK64vR +1)
        for (vId6LHUYKpE = 0; OFkyfpqu -TK64vR > vId6LHUYKpE; vId6LHUYKpE = vId6LHUYKpE + 1)
            if (b[vId6LHUYKpE + (335 - 334)] > b[vId6LHUYKpE]) {
                mDtXage3OB = b[vId6LHUYKpE];
                b[vId6LHUYKpE] = b[vId6LHUYKpE + (404 - 403)];
                b[vId6LHUYKpE + (70 - 69)] = mDtXage3OB;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                strcpy (temp, XbyLmdQj9s[vId6LHUYKpE]);
                strcpy (XbyLmdQj9s[vId6LHUYKpE], XbyLmdQj9s[vId6LHUYKpE + (731 - 730)]);
                strcpy (XbyLmdQj9s[vId6LHUYKpE + 1], temp);
            }
    {
        vId6LHUYKpE = 0;
        while (OFkyfpqu > vId6LHUYKpE) {
            printf ("%s\n", XbyLmdQj9s[vId6LHUYKpE]);
            vId6LHUYKpE = vId6LHUYKpE + 1;
        };
    }
    for (TK64vR = 0; HT4qcht > TK64vR; TK64vR++)
        if (BFE5lbq1k9D[TK64vR] < 60)
            printf ("%s\n", pSkgpOsFXmt[TK64vR]);
}

