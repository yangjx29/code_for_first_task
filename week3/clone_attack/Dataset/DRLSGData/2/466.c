void  main () {
    char x;
    int rk9dobKc;
    int PSnJVuIb;
    int shE4sTD3dCc;
    int I1Rc6aixDNdF;
    int *koRUeclWLP;
    struct   book {
        int AOElf8;
        char LVrFlDxCa26 [(887 - 861)];
    }
    JKNvz6e7t [999];
    int qNZcDxK7p;
    int zFf9SwLpkU;
    koRUeclWLP = (int *) malloc ((786 - 760) * sizeof (int));
    {
        PSnJVuIb = 889 - 889;
        while ((101 - 75) > PSnJVuIb) {
            *(koRUeclWLP + PSnJVuIb) = (100 - 100);
            PSnJVuIb++;
        }
    }
    scanf ("%d", &shE4sTD3dCc);
    I1Rc6aixDNdF = (336 - 336);
    {
        zFf9SwLpkU = 868 - 868;
        while (zFf9SwLpkU < shE4sTD3dCc) {
            scanf ("%d %s", &JKNvz6e7t[zFf9SwLpkU].AOElf8, JKNvz6e7t[zFf9SwLpkU].LVrFlDxCa26);
            {
                qNZcDxK7p = 14 - 14;
                while (JKNvz6e7t[zFf9SwLpkU].LVrFlDxCa26[qNZcDxK7p] != '\0') {
                    *(koRUeclWLP + ((int) JKNvz6e7t[zFf9SwLpkU].LVrFlDxCa26[qNZcDxK7p] - (246 - 181))) += 1;
                    qNZcDxK7p++;
                }
            }
            zFf9SwLpkU++;
        }
    }
    {
        rk9dobKc = 0;
        while (rk9dobKc < 26) {
            I1Rc6aixDNdF = *(koRUeclWLP + rk9dobKc) < I1Rc6aixDNdF ? I1Rc6aixDNdF : *(koRUeclWLP + rk9dobKc);
            rk9dobKc = rk9dobKc + 1;
        }
    }
    {
        rk9dobKc = 0;
        while (rk9dobKc < 26) {
            if (!(I1Rc6aixDNdF != *(koRUeclWLP + rk9dobKc))) {
                printf ("%c", (65 + rk9dobKc));
                printf ("%d\n", I1Rc6aixDNdF);
                x = rk9dobKc;
            }
            rk9dobKc = rk9dobKc + 1;
        }
    }
    {
        zFf9SwLpkU = 0;
        while (shE4sTD3dCc > zFf9SwLpkU) {
            qNZcDxK7p = 0;
            while (JKNvz6e7t[zFf9SwLpkU].LVrFlDxCa26[qNZcDxK7p] != '\0') {
                if ((int) JKNvz6e7t[zFf9SwLpkU].LVrFlDxCa26[qNZcDxK7p] - 65 == x)
                    printf ("%d\n", JKNvz6e7t[zFf9SwLpkU].AOElf8);
                qNZcDxK7p++;
            }
            zFf9SwLpkU++;
        }
    }
}

