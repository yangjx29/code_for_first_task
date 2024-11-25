void  main () {
    char oizonL5;
    char iJys67 [(322 - 272)];
    int NkIWR7ePn;
    int jemZUQWR5Pb;
    int juseC6Hg;
    int BWHBNr6;
    char mXcKU18 [(812 - 762)];
    scanf ("%s%s", mXcKU18, iJys67);
    jemZUQWR5Pb = (230 - 230);
    juseC6Hg = strlen (mXcKU18);
    BWHBNr6 = strlen (iJys67);
    if (juseC6Hg != BWHBNr6)
        ;
    else if (juseC6Hg == BWHBNr6) {
        for (jemZUQWR5Pb = (742 - 742); juseC6Hg > jemZUQWR5Pb; jemZUQWR5Pb++)
            for (NkIWR7ePn = jemZUQWR5Pb; BWHBNr6 > NkIWR7ePn; NkIWR7ePn = NkIWR7ePn +1) {
                if (mXcKU18[jemZUQWR5Pb] == iJys67[NkIWR7ePn]) {
                    oizonL5 = iJys67[NkIWR7ePn];
                    iJys67[NkIWR7ePn] = iJys67[jemZUQWR5Pb];
                    iJys67[jemZUQWR5Pb] = oizonL5;
                };
            }
        if (strcmp (mXcKU18, iJys67) == 0)
            ;
        else
            ;
    };
}

