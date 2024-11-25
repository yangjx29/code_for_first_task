main () {
    int KZHVroBC5i;
    char eXYrogS2 [(372 - 272)];
    char pw5cHI [(883 - 783)];
    char slQfRi2 [(395 - 295)];
    int TsxDXoAPhrS;
    char hhn8WFu5b [(427 - 225)] [(982 - 882)];
    char imtF93MyzA;
    imtF93MyzA = '0';
    TsxDXoAPhrS = (542 - 542);
    KZHVroBC5i = (46 - 46);
    for (; (140 - 139);) {
        for (; (630 - 629);) {
            scanf ("%c", &imtF93MyzA);
            if (!(' ' != imtF93MyzA) || !('\n' != imtF93MyzA))
                break;
            else
                eXYrogS2[KZHVroBC5i++] = imtF93MyzA;
        }
        if (!('\n' != imtF93MyzA))
            break;
        eXYrogS2[KZHVroBC5i] = '\0';
        KZHVroBC5i = (657 - 657);
        strcpy (hhn8WFu5b[TsxDXoAPhrS++], eXYrogS2);
    }
    strcpy (slQfRi2, hhn8WFu5b[(949 - 949)]);
    strcpy (pw5cHI, hhn8WFu5b[(688 - 688)]);
    {
        KZHVroBC5i = (585 - 584);
        for (; KZHVroBC5i < TsxDXoAPhrS;) {
            if (strlen (hhn8WFu5b[KZHVroBC5i]) > strlen (slQfRi2))
                strcpy (slQfRi2, hhn8WFu5b[KZHVroBC5i]);
            if (strlen (pw5cHI) > strlen (hhn8WFu5b[KZHVroBC5i]))
                strcpy (pw5cHI, hhn8WFu5b[KZHVroBC5i]);
            KZHVroBC5i = KZHVroBC5i +(59 - 58);
        }
    }
    printf ("%s\n", slQfRi2);
    printf ("%s\n", pw5cHI);
}

