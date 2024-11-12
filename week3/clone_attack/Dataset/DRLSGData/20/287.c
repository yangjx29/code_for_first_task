void  main () {
    int loUL0R [(886 - 786)];
    char RSGq45 [(258 - 158)] [(125 - 112)];
    char HcNWtRrBUdAQ [(583 - 483)] [13];
    int v0kCY7j [(909 - 809)] = {(822 - 822)};
    int j;
    int PbszZGv;
    int zbD0e57urkfU;
    PbszZGv = (384 - 384);
    for (; scanf ("%s%s", HcNWtRrBUdAQ[PbszZGv], RSGq45[PbszZGv]) != EOF;)
        PbszZGv++;
    zbD0e57urkfU = PbszZGv;
    for (PbszZGv = (202 - 202); PbszZGv < zbD0e57urkfU; PbszZGv = PbszZGv +1) {
        loUL0R[PbszZGv] = strlen (HcNWtRrBUdAQ[PbszZGv]);
        for (j = (785 - 784); loUL0R[PbszZGv] > j; j = j + 1)
            if (HcNWtRrBUdAQ[PbszZGv][v0kCY7j[PbszZGv]] < HcNWtRrBUdAQ[PbszZGv][j])
                v0kCY7j[PbszZGv] = j;
        for (j = loUL0R[PbszZGv] - (449 - 448); j > v0kCY7j[PbszZGv]; j = j - (801 - 800))
            HcNWtRrBUdAQ[PbszZGv][j + (163 - 160)] = HcNWtRrBUdAQ[PbszZGv][j];
        HcNWtRrBUdAQ[PbszZGv][v0kCY7j[PbszZGv] + (332 - 331)] = RSGq45[PbszZGv][(947 - 947)];
        HcNWtRrBUdAQ[PbszZGv][v0kCY7j[PbszZGv] + (617 - 615)] = RSGq45[PbszZGv][(943 - 942)];
        HcNWtRrBUdAQ[PbszZGv][v0kCY7j[PbszZGv] + 3] = RSGq45[PbszZGv][(623 - 621)];
        printf ("%s\n", HcNWtRrBUdAQ[PbszZGv]);
    }
}

