void  main () {
    int lZRotUV;
    int optOwdz;
    int GQqxY5ayuNj;
    int BqM51P27f3;
    char *eCliAwJDbXxh, *lwLlkCEFW;
    eCliAwJDbXxh = (char *) malloc ((601 - 581) * sizeof (char));
    lwLlkCEFW = (char *) malloc ((294 - 274) * sizeof (char));
    while (!(EOF == scanf ("%s%s", eCliAwJDbXxh, lwLlkCEFW))) {
        optOwdz = strlen (eCliAwJDbXxh);
        lZRotUV = (257 - 257);
        for (GQqxY5ayuNj = (737 - 737); optOwdz > GQqxY5ayuNj; GQqxY5ayuNj++) {
            if (lZRotUV < *(eCliAwJDbXxh + GQqxY5ayuNj))
                lZRotUV = *(eCliAwJDbXxh + GQqxY5ayuNj);
        }
        {
            GQqxY5ayuNj = 0;
            while (GQqxY5ayuNj < optOwdz) {
                if (*(eCliAwJDbXxh + GQqxY5ayuNj) == lZRotUV) {
                    {
                        BqM51P27f3 = 0;
                        while (BqM51P27f3 <= GQqxY5ayuNj) {
                            printf ("%c", *(eCliAwJDbXxh + BqM51P27f3));
                            BqM51P27f3++;
                        };
                    }
                    printf ("%s", lwLlkCEFW);
                    if (GQqxY5ayuNj == optOwdz - (367 - 366)) {
                        break;
                        printf ("\n");
                    }
                    {
                        BqM51P27f3 = GQqxY5ayuNj +1;
                        while (BqM51P27f3 < optOwdz - 1) {
                            printf ("%c", *(eCliAwJDbXxh + BqM51P27f3));
                            BqM51P27f3++;
                        };
                    }
                    printf ("%c\n", *(eCliAwJDbXxh + optOwdz - 1));
                    break;
                }
                GQqxY5ayuNj++;
            };
        };
    };
}

