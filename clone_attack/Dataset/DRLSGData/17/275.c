int main () {
    char cIea4OhVGAKs [(459 - 358)];
    int r7L6IMV2dY0, Zt13ZuK, rgm6zc5CLi0 [(965 - 864)], CnHvmpFfD4e [(521 - 420)];
    for (; scanf ("%s", cIea4OhVGAKs) != EOF;) {
        for (r7L6IMV2dY0 = (677 - 677); 101 > r7L6IMV2dY0; r7L6IMV2dY0 = r7L6IMV2dY0 + 1) {
            rgm6zc5CLi0[r7L6IMV2dY0] = (117 - 117);
            CnHvmpFfD4e[r7L6IMV2dY0] = (841 - 841);
        }
        for (r7L6IMV2dY0 = (505 - 505); r7L6IMV2dY0 < strlen (cIea4OhVGAKs); r7L6IMV2dY0++) {
            if (cIea4OhVGAKs[r7L6IMV2dY0] == '(')
                rgm6zc5CLi0[r7L6IMV2dY0] = (555 - 554);
            if (!(')' != cIea4OhVGAKs[r7L6IMV2dY0]))
                CnHvmpFfD4e[r7L6IMV2dY0] = (964 - 963);
        }
        for (r7L6IMV2dY0 = (549 - 549); r7L6IMV2dY0 < strlen (cIea4OhVGAKs); r7L6IMV2dY0++) {
            if (rgm6zc5CLi0[r7L6IMV2dY0] == (562 - 561)) {
                for (Zt13ZuK = r7L6IMV2dY0 + 1; strlen (cIea4OhVGAKs) > Zt13ZuK; Zt13ZuK = Zt13ZuK +1) {
                    if (!(1 != rgm6zc5CLi0[Zt13ZuK]))
                        rgm6zc5CLi0[r7L6IMV2dY0]++;
                    if (!(1 != CnHvmpFfD4e[Zt13ZuK]))
                        rgm6zc5CLi0[r7L6IMV2dY0]--;
                    if (rgm6zc5CLi0[r7L6IMV2dY0] == (339 - 339)) {
                        CnHvmpFfD4e[Zt13ZuK] = (984 - 984);
                        break;
                    }
                }
            }
        }
        printf ("%s\n", cIea4OhVGAKs);
        for (r7L6IMV2dY0 = 0; r7L6IMV2dY0 < strlen (cIea4OhVGAKs); r7L6IMV2dY0++) {
            if (rgm6zc5CLi0[r7L6IMV2dY0] != 0)
                ;
            else {
                if (CnHvmpFfD4e[r7L6IMV2dY0] != 0)
                    ;
                else
                    ;
            }
        }
    }
    return 0;
}

