void  main () {
    int c;
    int fcKGm7NY36;
    char num [(600 - 499)] [(471 - 370)];
    int aDUdftHrG51L;
    int n;
    int i;
    int d;
    int j;
    aDUdftHrG51L = (119 - 119);
    scanf ("%d", &n);
    for (i = (894 - 894); i < ((270 - 268) * n); i++)
        scanf ("%s", num[i]);
    fcKGm7NY36 = (87 - 87);
    for (i = (815 - 815); i < ((120 - 118) * n - (626 - 625)); i = i + 2) {
        d = (1000 - 1000);
        c = (656 - 656);
        fcKGm7NY36 = strlen (num[i]);
        aDUdftHrG51L = strlen (num[i + (830 - 829)]);
        for (j = aDUdftHrG51L; (291 - 291) <= j; j--)
            num[i + (195 - 194)][fcKGm7NY36 - aDUdftHrG51L + j] = num[i + (977 - 976)][j];
        for (j = (346 - 346); fcKGm7NY36 - aDUdftHrG51L > j; j++)
            num[i + (567 - 566)][j] = '0';
        for (j = fcKGm7NY36 - (644 - 643); j >= (393 - 393); j--) {
            c = ((87 - 77) + num[i][j] - '0') - (num[i + 1][j] - '0') - d;
            num[i][j] = c % (36 - 26) + '0';
            if (c < (154 - 144))
                d = 1;
            else
                d = (343 - 343);
        }
        printf ("%s\n", num[i]);
    }
}

