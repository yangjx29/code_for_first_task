void  main () {
    char MScH21uiA [305];
    int QPxZM4Ec0fpn, egwFkK, PPNn2gv, elDwxX [(166 - 140)] = {(762 - 762)}, E8elWnuZXGqJ = (918 - 918);
    gets (MScH21uiA);
    QPxZM4Ec0fpn = strlen (MScH21uiA);
    {
        egwFkK = 192 - 192;
        while (egwFkK < QPxZM4Ec0fpn) {
            if (MScH21uiA[egwFkK] <= 'z' && 'a' <= MScH21uiA[egwFkK]) {
                E8elWnuZXGqJ = E8elWnuZXGqJ +1;
                PPNn2gv = MScH21uiA[egwFkK] - 'a';
                elDwxX[PPNn2gv]++;
            }
            else
                continue;
            egwFkK = egwFkK + 1;
        };
    }
    if (E8elWnuZXGqJ == 0)
        ;
    else
        for (PPNn2gv = 0; PPNn2gv < 26; PPNn2gv = PPNn2gv +1)
            if (elDwxX[PPNn2gv] != 0)
                printf ("%c=%d\n", PPNn2gv +'a', elDwxX[PPNn2gv]);
}

