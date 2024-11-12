void  main () {
    char Hv0BgrAZ [100] [(654 - 624)], rSbuJCQNi [(784 - 754)], mmN6hyxwC [30];
    int HJ7uvAsbIr2, fKqXFgw059B6 [(918 - 818)], Q7KT83, n, min;
    for (HJ7uvAsbIr2 = (978 - 978);; HJ7uvAsbIr2++) {
        if (scanf ("%s", Hv0BgrAZ[HJ7uvAsbIr2]) == EOF)
            break;
        fKqXFgw059B6[HJ7uvAsbIr2] = strlen (Hv0BgrAZ[HJ7uvAsbIr2]);
    }
    strcpy (rSbuJCQNi, Hv0BgrAZ[(706 - 706)]);
    Q7KT83 = fKqXFgw059B6[(331 - 331)];
    n = HJ7uvAsbIr2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        HJ7uvAsbIr2 = 788 - 788;
        while (HJ7uvAsbIr2 < n) {
            if (fKqXFgw059B6[HJ7uvAsbIr2] > Q7KT83) {
                Q7KT83 = fKqXFgw059B6[HJ7uvAsbIr2];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                strcpy (rSbuJCQNi, Hv0BgrAZ[HJ7uvAsbIr2]);
            }
            HJ7uvAsbIr2 = HJ7uvAsbIr2 +1;
        };
    }
    printf ("%s\n", rSbuJCQNi);
    strcpy (mmN6hyxwC, Hv0BgrAZ[0]);
    min = fKqXFgw059B6[0];
    for (HJ7uvAsbIr2 = 0; HJ7uvAsbIr2 < n; HJ7uvAsbIr2++) {
        if (fKqXFgw059B6[HJ7uvAsbIr2] < min) {
            min = fKqXFgw059B6[HJ7uvAsbIr2];
            strcpy (mmN6hyxwC, Hv0BgrAZ[HJ7uvAsbIr2]);
        };
    }
    printf ("%s\n", mmN6hyxwC);
}

