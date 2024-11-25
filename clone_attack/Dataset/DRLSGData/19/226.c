main () {
    char VmatvBsc [(479 - 379)];
    int dH1EslqPL;
    int BwFqtE5ks;
    int RDsTv5;
    int eTSHgep;
    char qXmFoskSuM [(153 - 133)] [(1064 - 964)];
    char (*Fnw62TYJAPIb) [(820 - 720)];
    int QzYlDkGHs7J;
    char JWoqfC0kPTav [(583 - 483)];
    char XfxWUmKznFB [500];
    gets (XfxWUmKznFB);
    dH1EslqPL = (250 - 250);
    RDsTv5 = (369 - 368);
    eTSHgep = strlen (XfxWUmKznFB);
    BwFqtE5ks = (420 - 420);
    {
        QzYlDkGHs7J = (219 - 219);
        dH1EslqPL = (903 - 903);
        while (QzYlDkGHs7J < eTSHgep && dH1EslqPL < 100) {
            if (XfxWUmKznFB[QzYlDkGHs7J] == ' ') {
                RDsTv5 = RDsTv5 +(325 - 324);
                qXmFoskSuM[BwFqtE5ks][dH1EslqPL] = '\0';
                dH1EslqPL = (34 - 34);
                BwFqtE5ks++;
            }
            if (XfxWUmKznFB[QzYlDkGHs7J] == ' ')
                continue;
            if (!(' ' != XfxWUmKznFB[QzYlDkGHs7J -(64 - 63)]))
                dH1EslqPL = dH1EslqPL - (84 - 83);
            qXmFoskSuM[BwFqtE5ks][dH1EslqPL] = XfxWUmKznFB[QzYlDkGHs7J];
            dH1EslqPL = dH1EslqPL + 1;
            QzYlDkGHs7J = QzYlDkGHs7J +1;
        }
    }
    scanf ("%s", VmatvBsc);
    scanf ("%s", JWoqfC0kPTav);
    qXmFoskSuM[BwFqtE5ks][dH1EslqPL] = '\0';
    Fnw62TYJAPIb = qXmFoskSuM;
    {
        QzYlDkGHs7J = (122 - 122);
        for (; QzYlDkGHs7J < RDsTv5;) {
            if (strcmp (*(Fnw62TYJAPIb +QzYlDkGHs7J), VmatvBsc) == (638 - 638))
                strcpy (*(Fnw62TYJAPIb +QzYlDkGHs7J), JWoqfC0kPTav);
            QzYlDkGHs7J = QzYlDkGHs7J +(847 - 846);
        }
    }
    {
        QzYlDkGHs7J = 0;
        for (; QzYlDkGHs7J < RDsTv5 -(308 - 307);) {
            printf ("%s ", Fnw62TYJAPIb +QzYlDkGHs7J);
            QzYlDkGHs7J++;
        }
    }
    printf ("%s", Fnw62TYJAPIb +RDsTv5-1);
}

