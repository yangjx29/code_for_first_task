void  main () {
    char M8IA91SNO [(1005 - 975)] [(551 - 536)] = {'\0'}, ymXcpQ [(383 - 353)] [(494 - 491)] = {'\0'}, RYZ5bHn [(445 - 415)] [(504 - 486)] = {'\0'};
    int JGzhTcoUCn, o5sSJ3 = (826 - 826), QeSX90m6HoLg, R4twf7y6BHpG, qdATkhrop, sHbV9WFQm, EqDMp8IBO;
    for (; scanf ("%s %s", M8IA91SNO[o5sSJ3], ymXcpQ[o5sSJ3]) != EOF;) {
        o5sSJ3 = o5sSJ3 + (522 - 521);
    }
    JGzhTcoUCn = o5sSJ3;
    {
        o5sSJ3 = (351 - 351);
        for (; o5sSJ3 < JGzhTcoUCn;) {
            qdATkhrop = (471 - 471);
            R4twf7y6BHpG = M8IA91SNO[o5sSJ3][(774 - 774)];
            for (QeSX90m6HoLg = (249 - 249); M8IA91SNO[o5sSJ3][QeSX90m6HoLg] != '\0'; QeSX90m6HoLg = QeSX90m6HoLg +(217 - 216)) {
                if (R4twf7y6BHpG < M8IA91SNO[o5sSJ3][QeSX90m6HoLg]) {
                    qdATkhrop = QeSX90m6HoLg;
                    R4twf7y6BHpG = M8IA91SNO[o5sSJ3][QeSX90m6HoLg];
                }
            }
            strncpy (RYZ5bHn[o5sSJ3], M8IA91SNO[o5sSJ3], qdATkhrop + (117 - 116));
            RYZ5bHn[o5sSJ3][qdATkhrop + (430 - 429)] = '\0';
            strcat (RYZ5bHn[o5sSJ3], ymXcpQ[o5sSJ3]);
            {
                QeSX90m6HoLg = (293 - 292);
                while (M8IA91SNO[o5sSJ3][QeSX90m6HoLg +qdATkhrop] != '\0') {
                    RYZ5bHn[o5sSJ3][qdATkhrop + (895 - 892) + QeSX90m6HoLg] = M8IA91SNO[o5sSJ3][QeSX90m6HoLg +qdATkhrop];
                    QeSX90m6HoLg = QeSX90m6HoLg +(118 - 117);
                }
            }
            sHbV9WFQm = strlen (M8IA91SNO[o5sSJ3]);
            RYZ5bHn[o5sSJ3][sHbV9WFQm + (676 - 673)] = '\0';
            printf ("%s\n", RYZ5bHn[o5sSJ3]);
            o5sSJ3 = o5sSJ3 + 1;
        }
    }
}

