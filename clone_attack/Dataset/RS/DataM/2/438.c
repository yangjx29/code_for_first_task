struct   book {
    int Tmp2DIG0;
    char GuoZV2 [26];
};
void  main () {
    int HzajfoU2 [26] = {0};
    int ktI0lDYi, i, pyDWV5, kyJzWaQKGjt = 0, xX8ILbqJHlY5 = 0;
    struct   book dIXqV5HiW [999];
    scanf ("%d", &ktI0lDYi);
    for (i = 0; ktI0lDYi > i; i = i + 1)
        scanf ("%d %s", &dIXqV5HiW[i].Tmp2DIG0, dIXqV5HiW[i].GuoZV2);
    for (i = 0; ktI0lDYi > i; i = i + 1)
        for (pyDWV5 = 0; pyDWV5 < strlen (dIXqV5HiW[i].GuoZV2); pyDWV5++)
            HzajfoU2[dIXqV5HiW[i].GuoZV2[pyDWV5] - 'A']++;
    for (i = 0; i < 26; i = i + 1)
        if (HzajfoU2[i] > kyJzWaQKGjt) {
            kyJzWaQKGjt = HzajfoU2[i];
            xX8ILbqJHlY5 = i;
        }
    printf ("%c\n%d\n", ('A' + xX8ILbqJHlY5), kyJzWaQKGjt);
    for (i = 0; i < ktI0lDYi; i++)
        for (pyDWV5 = 0; pyDWV5 < strlen (dIXqV5HiW[i].GuoZV2); pyDWV5++) {
            if (dIXqV5HiW[i].GuoZV2[pyDWV5] == ('A' + xX8ILbqJHlY5)) {
                printf ("%d\n", dIXqV5HiW[i].Tmp2DIG0);
                break;
            };
        };
}

