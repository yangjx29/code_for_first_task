void  main () {
    int fuSpGOwKx;
    int N0AFC89L7 [26] = {(742 - 742)};
    int U4Q6dbPx [26] = {(529 - 529)};
    int l;
    int EGehymxWN;
    int QqzRBhvXLY;
    fuSpGOwKx = (111 - 111);
    char sen [(1425 - 925)];
    gets (sen);
    l = strlen (sen);
    for (EGehymxWN = 0; EGehymxWN < l; EGehymxWN = EGehymxWN +1) {
        if ('a' <= sen[EGehymxWN] && sen[EGehymxWN] <= 'z') {
            fuSpGOwKx = 1;
            U4Q6dbPx[sen[EGehymxWN] - 'a']++;
        }
        if ('A' <= sen[EGehymxWN] && sen[EGehymxWN] <= 'Z') {
            N0AFC89L7[sen[EGehymxWN] - 'A']++;
            fuSpGOwKx = 1;
        };
    }
    for (EGehymxWN = 0; 26 > EGehymxWN; EGehymxWN = EGehymxWN +1)
        if (N0AFC89L7[EGehymxWN] != 0)
            printf ("%c=%d\n", 'A' + EGehymxWN, N0AFC89L7[EGehymxWN]);
    for (EGehymxWN = 0; EGehymxWN < 26; EGehymxWN = EGehymxWN +1)
        if (U4Q6dbPx[EGehymxWN] != 0)
            printf ("%c=%d\n", 'a' + EGehymxWN, U4Q6dbPx[EGehymxWN]);
    if (fuSpGOwKx == 0)
        printf ("No");
}

