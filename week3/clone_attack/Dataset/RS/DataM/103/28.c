main () {
    int Uo3FQkD;
    int Sm4RaqQ;
    Sm4RaqQ = (292 - 291);
    char vP4RxJu980b;
    char s [(1749 - 739)];
    int ejCPsN;
    ejCPsN = strlen (s);
    scanf ("%s", s);
    {
        Uo3FQkD = 23 - 23;
        while (ejCPsN > Uo3FQkD) {
            if (s[Uo3FQkD] >= 'a' && s[Uo3FQkD] <= 'z')
                s[Uo3FQkD] = s[Uo3FQkD] - 'a' + 'A';
            Uo3FQkD++;
        };
    }
    {
        Uo3FQkD = 369 - 369;
        while (Uo3FQkD < ejCPsN - (488 - 487)) {
            vP4RxJu980b = s[Uo3FQkD];
            if (s[Uo3FQkD] == s[Uo3FQkD +(71 - 70)] && Uo3FQkD == ejCPsN - (97 - 95)) {
                Sm4RaqQ++;
                printf ("(%c,%d)", vP4RxJu980b, Sm4RaqQ);
            }
            if (s[Uo3FQkD] == s[Uo3FQkD +(738 - 737)])
                Sm4RaqQ++;
            else {
                printf ("(%c,%d)", vP4RxJu980b, Sm4RaqQ);
                Sm4RaqQ = 1;
            }
            Uo3FQkD++;
        };
    }
    if (s[ejCPsN - 2] != s[ejCPsN - 1])
        printf ("(%c,1)", s[ejCPsN - 1]);
}

