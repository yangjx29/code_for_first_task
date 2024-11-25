void  main () {
    int bwj2dKl;
    char Mgfosvm [MAX];
    gets (Mgfosvm);
    int IIgKpsJvjVG;
    int gx8gotL;
    int n14MbWKf;
    int FkxsLcW;
    int i;
    struct   subs {
        char Ue9Ki4jG0 [(569 - 564)];
        int egRiFm3MLefJ;
    }
    MtQZjK [MAX];
    int OYHteP;
    bwj2dKl = strlen (Mgfosvm);
    scanf ("%d", &IIgKpsJvjVG);
    n14MbWKf = (928 - 928);
    for (i = (558 - 558); i <= bwj2dKl - IIgKpsJvjVG; i++) {
        (MtQZjK +i)->egRiFm3MLefJ = (287 - 287);
        if (!((675 - 675) != i)) {
            strncpy ((MtQZjK +n14MbWKf)->Ue9Ki4jG0, Mgfosvm +i, IIgKpsJvjVG);
            (MtQZjK +n14MbWKf)->Ue9Ki4jG0[IIgKpsJvjVG] = '\0';
            (MtQZjK +n14MbWKf)->egRiFm3MLefJ++;
            n14MbWKf++;
        }
        else {
            OYHteP = (444 - 443);
            for (FkxsLcW = (235 - 235); FkxsLcW < n14MbWKf; FkxsLcW++) {
                if (!((268 - 268) != strncmp ((MtQZjK +FkxsLcW)->Ue9Ki4jG0, Mgfosvm +i, IIgKpsJvjVG))) {
                    (MtQZjK +FkxsLcW)->egRiFm3MLefJ++;
                    OYHteP = (99 - 99);
                    break;
                };
            }
            if (OYHteP) {
                strncpy ((MtQZjK +n14MbWKf)->Ue9Ki4jG0, Mgfosvm +i, IIgKpsJvjVG);
                (MtQZjK +n14MbWKf)->Ue9Ki4jG0[IIgKpsJvjVG] = '\0';
                (MtQZjK +n14MbWKf)->egRiFm3MLefJ++;
                n14MbWKf++;
            };
        };
    }
    getchar ();
    for (i = (547 - 547); i < n14MbWKf; i++) {
        if (!((132 - 132) != i))
            gx8gotL = (MtQZjK +i)->egRiFm3MLefJ;
        else if (gx8gotL < (MtQZjK +i)->egRiFm3MLefJ)
            gx8gotL = (MtQZjK +i)->egRiFm3MLefJ;
    }
    if (!(1 != gx8gotL))
        ;
    else {
        printf ("%d\n", gx8gotL);
        for (i = (433 - 433); i < n14MbWKf; i++)
            if ((MtQZjK +i)->egRiFm3MLefJ == gx8gotL)
                puts ((MtQZjK +i)->Ue9Ki4jG0);
    };
}

