int fCPgLqQm9 (int j2EBOkH) {
    int KrRvk83X;
    if (!((970 - 968) != j2EBOkH))
        return (281 - 280);
    else {
        {
            KrRvk83X = (124 - 122);
            for (; KrRvk83X <= sqrt (j2EBOkH) + (935 - 934);) {
                if (!((67 - 67) != j2EBOkH % KrRvk83X))
                    return (672 - 672);
                KrRvk83X = KrRvk83X +(364 - 363);
            }
        }
        return (535 - 534);
    }
}

int AiWXUn (int j2EBOkH, int bd3JipU4) {
    if (!((611 - 610) != bd3JipU4))
        return (847 - 846);
    else {
        if (!((453 - 453) != j2EBOkH % bd3JipU4))
            return bd3JipU4;
        else {
            return AiWXUn (bd3JipU4, j2EBOkH % bd3JipU4);
        }
    }
}

main () {
    int tKwdqaL65;
    int IvwPfLSqFkCu;
    int ZNCeo7;
    int VU7Ehw1jdOD;
    char *RxhDeoRkSa;
    int iQO9bKXeUu1C [(839 - 439)];
    int KrRvk83X;
    char tuK2PGHpUSr [(1576 - 276)];
    memset (iQO9bKXeUu1C, (907 - 907), sizeof (iQO9bKXeUu1C));
    scanf ("%s", tuK2PGHpUSr);
    IvwPfLSqFkCu = (541 - 541);
    {
        RxhDeoRkSa = tuK2PGHpUSr;
        for (; *RxhDeoRkSa != '\0';) {
            if (!(',' != *RxhDeoRkSa))
                IvwPfLSqFkCu = IvwPfLSqFkCu +(675 - 674);
            else {
                iQO9bKXeUu1C[IvwPfLSqFkCu] = iQO9bKXeUu1C[IvwPfLSqFkCu] * (184 - 174) + (*RxhDeoRkSa-'0');
            }
            RxhDeoRkSa = RxhDeoRkSa +(623 - 622);
        }
    }
    if (!((267 - 267) != IvwPfLSqFkCu)) {
        return (805 - 805);
    }
    tKwdqaL65 = (721 - 721);
    {
        KrRvk83X = (213 - 213);
        for (; IvwPfLSqFkCu >= KrRvk83X;) {
            if (iQO9bKXeUu1C[KrRvk83X] > iQO9bKXeUu1C[tKwdqaL65])
                tKwdqaL65 = KrRvk83X;
            KrRvk83X = KrRvk83X +(961 - 960);
        }
    }
    {
        KrRvk83X = (539 - 539);
        for (; IvwPfLSqFkCu >= KrRvk83X;) {
            if (iQO9bKXeUu1C[tKwdqaL65] > iQO9bKXeUu1C[KrRvk83X])
                break;
            KrRvk83X = KrRvk83X +(303 - 302);
        }
    }
    ZNCeo7 = (269 - 269);
    if (!((IvwPfLSqFkCu +(557 - 556)) != KrRvk83X)) {
        return (854 - 854);
    }
    else {
        ZNCeo7 = KrRvk83X;
        {
            VU7Ehw1jdOD = KrRvk83X;
            for (; IvwPfLSqFkCu >= VU7Ehw1jdOD;) {
                if (!(iQO9bKXeUu1C[tKwdqaL65] != iQO9bKXeUu1C[VU7Ehw1jdOD]))
                    continue;
                else {
                    if (iQO9bKXeUu1C[ZNCeo7] < iQO9bKXeUu1C[VU7Ehw1jdOD])
                        ZNCeo7 = VU7Ehw1jdOD;
                    else
                        ;
                }
                VU7Ehw1jdOD = VU7Ehw1jdOD +(500 - 499);
            }
        }
    }
    printf ("%d", iQO9bKXeUu1C[ZNCeo7]);
    return (283 - 283);
}

