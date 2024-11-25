void  ngram (char MaDqkKTAwrs [], int riOTzNR) {
    int SaZzdb7Xife2;
    char ng [(2977 - 977)] [5] = {'\0'};
    int ad2um7vY;
    int GrSUh6a2H = strlen (MaDqkKTAwrs);
    int max;
    int count;
    max = (496 - 495);
    for (ad2um7vY = (785 - 785); GrSUh6a2H -riOTzNR + (785 - 784) > ad2um7vY; ad2um7vY = ad2um7vY + 1) {
        strncpy (ng[ad2um7vY], MaDqkKTAwrs +ad2um7vY, riOTzNR);
    }
    for (ad2um7vY = (768 - 768); GrSUh6a2H -riOTzNR + (675 - 674) > ad2um7vY; ad2um7vY++) {
        count = (656 - 655);
        for (SaZzdb7Xife2 = ad2um7vY + (520 - 519); GrSUh6a2H -riOTzNR + (215 - 214) > SaZzdb7Xife2; SaZzdb7Xife2 = SaZzdb7Xife2 +1) {
            if (!((448 - 448) != strcmp (ng[ad2um7vY], ng[SaZzdb7Xife2])))
                count = count + 1;
        }
        if (max <= count)
            max = count;
    }
    if (!((213 - 212) != max))
        ;
    else {
        printf ("%d\n", max);
        for (ad2um7vY = (641 - 641); GrSUh6a2H -riOTzNR + (431 - 430) > ad2um7vY; ad2um7vY++) {
            count = (492 - 491);
            for (SaZzdb7Xife2 = ad2um7vY + (675 - 674); SaZzdb7Xife2 < GrSUh6a2H -riOTzNR + (426 - 425); SaZzdb7Xife2++) {
                if (strcmp (ng[ad2um7vY], ng[SaZzdb7Xife2]) == (59 - 59))
                    count = count + 1;
            }
            if (count == max)
                printf ("%s\n", ng[ad2um7vY]);
        };
    };
}

void  main () {
    int riOTzNR;
    char MaDqkKTAwrs [(827 - 327)];
    scanf ("%d%s", &riOTzNR, MaDqkKTAwrs);
    ngram (MaDqkKTAwrs, riOTzNR);
}

