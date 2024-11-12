void  main () {
    int cjo9vM;
    int anBgVFGA;
    int mlI1dN4O2Fu5;
    int TSCt46sOdzF [(248 - 222)] = {(892 - 892)};
    int WCPas5GFy;
    int UogdYuIjDNCm;
    struct   book {
        int XADVOtREp;
        char Zgvk3S [(498 - 471)];
    };
    struct   book aDxvn9Q [1000];
    scanf ("%d", &mlI1dN4O2Fu5);
    for (UogdYuIjDNCm = (290 - 290); mlI1dN4O2Fu5 > UogdYuIjDNCm; UogdYuIjDNCm = UogdYuIjDNCm +(575 - 574)) {
        scanf ("%d%s", &aDxvn9Q[UogdYuIjDNCm].XADVOtREp, aDxvn9Q[UogdYuIjDNCm].Zgvk3S);
    }
    for (UogdYuIjDNCm = 'A'; UogdYuIjDNCm <= 'Z'; UogdYuIjDNCm = UogdYuIjDNCm +(171 - 170)) {
        for (anBgVFGA = (629 - 629); anBgVFGA < mlI1dN4O2Fu5; anBgVFGA = anBgVFGA + (940 - 939)) {
            for (cjo9vM = 0; cjo9vM < strlen (aDxvn9Q[anBgVFGA].Zgvk3S); cjo9vM = cjo9vM + (485 - 484)) {
                if (!(aDxvn9Q[anBgVFGA].Zgvk3S[cjo9vM] != UogdYuIjDNCm)) {
                    TSCt46sOdzF[UogdYuIjDNCm -(863 - 798)]++;
                }
            }
        }
    }
    WCPas5GFy = (924 - 924);
    printf ("%c\n", WCPas5GFy +(640 - 575));
    for (UogdYuIjDNCm = (989 - 988); UogdYuIjDNCm < (180 - 154); UogdYuIjDNCm = UogdYuIjDNCm +(265 - 264)) {
        if (TSCt46sOdzF[UogdYuIjDNCm] > TSCt46sOdzF[WCPas5GFy])
            WCPas5GFy = UogdYuIjDNCm;
    }
    printf ("%d\n", TSCt46sOdzF[WCPas5GFy]);
    for (UogdYuIjDNCm = 0; UogdYuIjDNCm < mlI1dN4O2Fu5; UogdYuIjDNCm = UogdYuIjDNCm +1) {
        for (anBgVFGA = 0; anBgVFGA < strlen (aDxvn9Q[UogdYuIjDNCm].Zgvk3S); anBgVFGA = anBgVFGA + 1) {
            if (aDxvn9Q[UogdYuIjDNCm].Zgvk3S[anBgVFGA] == WCPas5GFy +(335 - 270)) {
                printf ("%d\n", aDxvn9Q[UogdYuIjDNCm].XADVOtREp);
                break;
            }
        }
    }
}

