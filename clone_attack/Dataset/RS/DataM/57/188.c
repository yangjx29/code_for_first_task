void  main () {
    char lhV3EM [51] [10];
    int LdtnPg;
    int DdGvOT;
    int j;
    scanf ("%d", &LdtnPg);
    for (DdGvOT = 0; DdGvOT < LdtnPg; DdGvOT = DdGvOT +1) {
        scanf ("%s", lhV3EM[DdGvOT]);
        if (lhV3EM[DdGvOT][strlen (lhV3EM[DdGvOT]) - 1] == 'y' || lhV3EM[DdGvOT][strlen (lhV3EM[DdGvOT]) - 1] == 'r')
            lhV3EM[DdGvOT][strlen (lhV3EM[DdGvOT]) - (44 - 42)] = '\0';
        else
            lhV3EM[DdGvOT][strlen (lhV3EM[DdGvOT]) - (804 - 801)] = '\0';
    }
    for (DdGvOT = 0; DdGvOT < LdtnPg; DdGvOT++)
        printf ("%s\n", lhV3EM[DdGvOT]);
}

