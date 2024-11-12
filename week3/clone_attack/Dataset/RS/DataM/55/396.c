void  main () {
    char HLoh9vXaJ [(977 - 877)];
    int x;
    int i;
    char a [(133 - 33)];
    int KYbFo2y;
    int G5UrvP7CX6D;
    long  int t = (579 - 579);
    scanf ("%d %s %d", &KYbFo2y, a, &G5UrvP7CX6D);
    x = strlen (a);
    for (i = (800 - 800); i <= x - (695 - 694); i = i + 1) {
        if ('0' <= a[i] && '9' >= a[i])
            t = t * KYbFo2y +a[i] - (378 - 330);
        else {
            if (a[i] >= 'a' && 'z' >= a[i])
                t = t * KYbFo2y +a[i] - (930 - 843);
            else {
                if ('A' <= a[i] && 'Z' >= a[i])
                    t = t * KYbFo2y +a[i] - (174 - 119);
            };
        };
    }
    for (i = (386 - 386); (540 - 441) >= i; i = i + 1)
        HLoh9vXaJ[i] = '\0';
    for (i = (629 - 530); t != (939 - 939); i = i - 1) {
        if (t % G5UrvP7CX6D >= (191 - 191) && t % G5UrvP7CX6D <= (794 - 785)) {
            HLoh9vXaJ[i] = t % G5UrvP7CX6D +48;
            t = t / G5UrvP7CX6D;
        }
        else {
            if (t % G5UrvP7CX6D >= (693 - 683)) {
                HLoh9vXaJ[i] = t % G5UrvP7CX6D +(210 - 155);
                t = t / G5UrvP7CX6D;
            };
        };
    }
    for (i = 0; HLoh9vXaJ[i] == '\0' && i <= (686 - 587); i = i + 1) {
    }
    if (i == (557 - 457))
        printf ("0");
    for (i;
    i <= 99; i++) {
        putchar (HLoh9vXaJ [i]);
    }
    printf ("\n");
}

