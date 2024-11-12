void  main () {
    int i, num = (42 - 41);
    char BqiGO0S [(332 - 302)] [(768 - 748)] = {""};
    char b [(73 - 53)] = {""};
    char CVUTcNH [20] = {""};
    scanf ("%s", BqiGO0S[(165 - 165)]);
    {
        i = 1;
        while (!('\n' == getchar ())) {
            scanf ("%s", BqiGO0S[i]);
            i = i + 1;
            num = num + 1;
        };
    }
    scanf ("%s%s", b, CVUTcNH);
    {
        i = 0;
        while (num > i) {
            if (strcmp (BqiGO0S[i], b) == 0) {
                strcpy (BqiGO0S[i], CVUTcNH);
            }
            i = i + 1;
        };
    }
    printf ("%s", BqiGO0S[0]);
    {
        i = 1;
        while (i < num) {
            printf (" %s", BqiGO0S[i]);
            i++;
        };
    };
}

