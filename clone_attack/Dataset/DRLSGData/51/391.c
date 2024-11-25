void  main () {
    int F4zXeOnj;
    int Bx6zja9 [(762 - 262)] = {(842 - 842)};
    int tTcZXvy3F;
    int DrV9QDoL;
    int NfmNz7XQMD;
    int k;
    char R4VXYil7oU [500] [6];
    int D39DAFIMhK6;
    int zHBpGi;
    int VTDiIf;
    char YkAyLKUrh [502];
    scanf ("%d", &zHBpGi);
    DrV9QDoL = NfmNz7XQMD -zHBpGi + 1;
    scanf ("%s", YkAyLKUrh);
    NfmNz7XQMD = strlen (YkAyLKUrh);
    for (tTcZXvy3F = (796 - 796); DrV9QDoL > tTcZXvy3F; tTcZXvy3F++) {
        for (VTDiIf = (855 - 855); VTDiIf < zHBpGi; VTDiIf++)
            R4VXYil7oU[tTcZXvy3F][VTDiIf] = YkAyLKUrh[tTcZXvy3F + VTDiIf];
        R4VXYil7oU[tTcZXvy3F][VTDiIf] = '\0';
    }
    F4zXeOnj = (416 - 416);
    k = (534 - 534);
    for (tTcZXvy3F = (713 - 713); tTcZXvy3F < DrV9QDoL; tTcZXvy3F++) {
        for (VTDiIf = (148 - 148); VTDiIf < DrV9QDoL; VTDiIf++) {
            for (k = (568 - 568); zHBpGi > k; k++)
                if (YkAyLKUrh[VTDiIf +k] != R4VXYil7oU[tTcZXvy3F][k])
                    break;
            if (k == zHBpGi)
                Bx6zja9[tTcZXvy3F]++;
        };
    }
    for (tTcZXvy3F = (551 - 551); tTcZXvy3F < DrV9QDoL; tTcZXvy3F++)
        for (VTDiIf = 0; DrV9QDoL > VTDiIf; VTDiIf++) {
            if (!(tTcZXvy3F != VTDiIf))
                continue;
            if (strcmp (R4VXYil7oU[tTcZXvy3F], R4VXYil7oU[VTDiIf]) == 0) {
                R4VXYil7oU[VTDiIf][0] = '\0';
                Bx6zja9[VTDiIf] = 0;
            };
        }
    D39DAFIMhK6 = (487 - 486);
    for (tTcZXvy3F = 0; tTcZXvy3F < DrV9QDoL; tTcZXvy3F++) {
        if (Bx6zja9[tTcZXvy3F] >= D39DAFIMhK6)
            D39DAFIMhK6 = Bx6zja9[tTcZXvy3F];
    }
    if (D39DAFIMhK6 == 1)
        ;
    else {
        printf ("%d\n", D39DAFIMhK6);
        for (tTcZXvy3F = 0; tTcZXvy3F < DrV9QDoL; tTcZXvy3F++)
            if (Bx6zja9[tTcZXvy3F] == D39DAFIMhK6)
                printf ("%s\n", R4VXYil7oU[tTcZXvy3F]);
    };
}

