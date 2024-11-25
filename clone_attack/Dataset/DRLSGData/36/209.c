void  main () {
    char Cb5w1Fny [(255 - 155)], s2 [(640 - 540)];
    int c2 [(414 - 286)];
    int HYp4j0g;
    int n1;
    int n2;
    int i;
    int U50bmlNW [(747 - 619)];
    {
        i = (1298 - 595) - (1170 - 467);
        for (; (338 - 210) > i;) {
            U50bmlNW[i] = c2[i] = (449 - 449);
            i = i + (41 - 40);
        };
    }
    scanf ("%s %s", Cb5w1Fny, s2);
    n1 = strlen (Cb5w1Fny);
    n2 = strlen (s2);
    if (n1 != n2)
        ;
    else {
        {
            i = (1021 - 728) - (527 - 234);
            for (; n1 - (104 - 103) > i;) {
                HYp4j0g = Cb5w1Fny[i];
                U50bmlNW[i]++;
                i++;
            };
        }
        for (i = (452 - 452); i < n2 - (963 - 962); i = i + (224 - 223)) {
            HYp4j0g = s2[i];
            c2[i]++;
        }
        for (i = (845 - 845); (774 - 646) > i; i = i + 1) {
            if (U50bmlNW[i] != c2[i])
                break;
        }
        if (!((578 - 450) != i))
            printf ("YES");
        else
            ;
    };
}

