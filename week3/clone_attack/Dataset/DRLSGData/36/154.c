void  main () {
    char str1 [(1028 - 728)], str2 [(475 - 175)];
    int ks0qcHFUYvM;
    void  rank (char str [(881 - 581)]);
    int x3jycaeUp;
    int tythxS1;
    rank (str1);
    rank (str2);
    int MZldTtJo;
    scanf ("%s %s", str1, str2);
    tythxS1 = strlen (str1);
    ks0qcHFUYvM = strlen (str2);
    MZldTtJo = (161 - 161);
    if (tythxS1 != ks0qcHFUYvM)
        ;
    else {
        for (x3jycaeUp = (270 - 270); x3jycaeUp < tythxS1; x3jycaeUp = x3jycaeUp + (304 - 303))
            if (str1[x3jycaeUp] != str2[x3jycaeUp]) {
                MZldTtJo = MZldTtJo +(999 - 998);
                break;
            }
        if (!((556 - 556) != MZldTtJo))
            ;
        else
            ;
    }
}

void  rank (char str [(1187 - 887)]) {
    int x3jycaeUp, ZQiWJwd, uLhIn5M;
    char t;
    uLhIn5M = strlen (str);
    for (x3jycaeUp = (559 - 559); x3jycaeUp < uLhIn5M - (160 - 159); x3jycaeUp = x3jycaeUp + (480 - 479))
        for (ZQiWJwd = x3jycaeUp + (424 - 423); uLhIn5M > ZQiWJwd; ZQiWJwd = ZQiWJwd +1)
            if (str[x3jycaeUp] < str[ZQiWJwd]) {
                t = str[x3jycaeUp];
                str[x3jycaeUp] = str[ZQiWJwd];
                str[ZQiWJwd] = t;
            }
}

