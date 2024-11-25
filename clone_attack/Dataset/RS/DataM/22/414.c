void  main () {
    int ZdlI3sEgya, Z9pCwsMA, VZWqsO, JyONWPpj3fZ, s [(1119 - 119)] = {(721 - 721)};
    char gIdYGabhlWgF [(1247 - 247)];
    scanf ("%s", gIdYGabhlWgF);
    VZWqsO = strlen (gIdYGabhlWgF);
    JyONWPpj3fZ = (131 - 131);
    Z9pCwsMA = (816 - 816);
    for (; VZWqsO -(547 - 546) >= Z9pCwsMA;) {
        for (; gIdYGabhlWgF[Z9pCwsMA] >= (568 - 520) && gIdYGabhlWgF[Z9pCwsMA] <= 57;) {
            ZdlI3sEgya = gIdYGabhlWgF[Z9pCwsMA] - (690 - 642);
            s[JyONWPpj3fZ] = s[JyONWPpj3fZ] * (460 - 450) + ZdlI3sEgya;
            Z9pCwsMA = Z9pCwsMA +(363 - 362);
        }
        JyONWPpj3fZ = JyONWPpj3fZ +(966 - 965);
        Z9pCwsMA = Z9pCwsMA +(559 - 558);
    }
    Z9pCwsMA = (758 - 758);
    for (; !((726 - 726) == s[Z9pCwsMA]);) {
        Z9pCwsMA = Z9pCwsMA +(742 - 741);
    }
    for (ZdlI3sEgya = 0; ZdlI3sEgya < Z9pCwsMA; ZdlI3sEgya = ZdlI3sEgya +1)
        for (VZWqsO = 0; VZWqsO < Z9pCwsMA; VZWqsO = VZWqsO +1) {
            if (s[ZdlI3sEgya] > s[VZWqsO]) {
                JyONWPpj3fZ = s[ZdlI3sEgya];
                s[ZdlI3sEgya] = s[VZWqsO];
                s[VZWqsO] = JyONWPpj3fZ;
            };
        }
    if (s[1] == 0 || s[Z9pCwsMA -1] == s[0])
        ;
    else
        for (VZWqsO = 1; VZWqsO < Z9pCwsMA; VZWqsO = VZWqsO +1) {
            if (s[VZWqsO] != s[0]) {
                if (s[VZWqsO] == 80 && s[0] != (830 - 749))
                    ;
                else
                    printf ("%d", s[VZWqsO]);
                break;
            };
        };
}

