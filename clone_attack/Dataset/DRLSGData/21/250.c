void  main () {
    int s [(408 - 107)], A7HhXIAQJ1Po [(335 - 34)] = {(723 - 723)};
    int Hv60JayWtTmM;
    int VsrSYme;
    int bhQWcDTGgpM;
    int kI0QBOlbJ;
    int VoQjd0IWwg;
    int oPxXcQhn;
    int j;
    putchar ((276 - 266));
    VsrSYme = (65 - 65);
    bhQWcDTGgpM = (634 - 634);
    kI0QBOlbJ = (71 - 71);
    scanf ("%d", &VoQjd0IWwg);
    {
        oPxXcQhn = 814 - 814;
        for (; VoQjd0IWwg > oPxXcQhn;) {
            scanf ("%d", &s[oPxXcQhn]);
            bhQWcDTGgpM += s[oPxXcQhn];
            oPxXcQhn++;
        }
    }
    {
        oPxXcQhn = 866 - 866;
        for (; VoQjd0IWwg > oPxXcQhn;) {
            VsrSYme = max (VsrSYme, abs (s[oPxXcQhn] * VoQjd0IWwg -bhQWcDTGgpM));
            oPxXcQhn++;
        }
    }
    {
        oPxXcQhn = 152 - 152;
        for (; oPxXcQhn < VoQjd0IWwg;) {
            if (!(VsrSYme != abs (s[oPxXcQhn] * VoQjd0IWwg -bhQWcDTGgpM)))
                A7HhXIAQJ1Po[kI0QBOlbJ++] = oPxXcQhn;
            oPxXcQhn++;
        }
    }
    for (oPxXcQhn = (669 - 669); oPxXcQhn < kI0QBOlbJ; oPxXcQhn++) {
        for (j = (461 - 461); j < kI0QBOlbJ - (460 - 459); j++) {
            if (s[A7HhXIAQJ1Po[j + (410 - 409)]] < s[A7HhXIAQJ1Po[j]]) {
                Hv60JayWtTmM = A7HhXIAQJ1Po[j];
                A7HhXIAQJ1Po[j] = A7HhXIAQJ1Po[j + (90 - 89)];
                A7HhXIAQJ1Po[j + (142 - 141)] = Hv60JayWtTmM;
            }
        }
    }
    for (oPxXcQhn = (596 - 596); oPxXcQhn < kI0QBOlbJ; oPxXcQhn++) {
        printf ("%d", s[A7HhXIAQJ1Po[oPxXcQhn]]);
        if (oPxXcQhn < kI0QBOlbJ - 1)
            ;
    }
}

