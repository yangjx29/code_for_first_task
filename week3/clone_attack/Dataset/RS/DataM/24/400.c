void  main () {
    int eorubspkHO, Qg4i5jzkd38, uDyQtOkE, i3ROxjlL = 0, abP5Xo, max, qorgctYx6, NFaQjpGM, tYMnW4 [100];
    char str [100];
    char str2 [100] [100];
    gets (str);
    for (eorubspkHO = 0; str[eorubspkHO] != '\0'; eorubspkHO = eorubspkHO + 1)
        if (!(32 != str[eorubspkHO]))
            i3ROxjlL = i3ROxjlL + 1;
    eorubspkHO = 0;
    i3ROxjlL++;
    for (Qg4i5jzkd38 = 0; i3ROxjlL > Qg4i5jzkd38; Qg4i5jzkd38 = Qg4i5jzkd38 +1) {
        if (str[eorubspkHO] == '\0') {
            break;
            eorubspkHO = eorubspkHO + 1;
        }
        else {
            uDyQtOkE = 0;
            while (1) {
                if (!(32 != str[eorubspkHO]) || str[eorubspkHO] == '\0') {
                    eorubspkHO = eorubspkHO + 1;
                    break;
                }
                str2[Qg4i5jzkd38][uDyQtOkE] = str[eorubspkHO];
                uDyQtOkE = uDyQtOkE + 1;
                eorubspkHO = eorubspkHO + 1;
            };
        };
    }
    for (eorubspkHO = 0; i3ROxjlL > eorubspkHO; eorubspkHO = eorubspkHO + 1)
        tYMnW4[eorubspkHO] = strlen (str2[eorubspkHO]);
    abP5Xo = max = tYMnW4[0];
    for (eorubspkHO = 0; i3ROxjlL > eorubspkHO; eorubspkHO = eorubspkHO + 1) {
        max = tYMnW4[eorubspkHO] < max ? max : tYMnW4[eorubspkHO];
        abP5Xo = abP5Xo < tYMnW4[eorubspkHO] ? abP5Xo : tYMnW4[eorubspkHO];
    }
    for (eorubspkHO = i3ROxjlL - 1; eorubspkHO >= 0; eorubspkHO = eorubspkHO - 1) {
        if (max == tYMnW4[eorubspkHO])
            NFaQjpGM = eorubspkHO;
        if (abP5Xo == tYMnW4[eorubspkHO])
            qorgctYx6 = eorubspkHO;
    }
    for (Qg4i5jzkd38 = 0; str2[NFaQjpGM][Qg4i5jzkd38] != '\0'; Qg4i5jzkd38 = Qg4i5jzkd38 +1)
        printf ("%c", str2[NFaQjpGM][Qg4i5jzkd38]);
    for (Qg4i5jzkd38 = 0; str2[qorgctYx6][Qg4i5jzkd38] != '\0'; Qg4i5jzkd38 = Qg4i5jzkd38 +1)
        printf ("%c", str2[qorgctYx6][Qg4i5jzkd38]);
}

