main () {
    int WcMsk6 [(202 - 192)];
    int ObVIA9tu1z3Q;
    int b [(948 - 938)];
    char aajGg3n8 [(338 - 328)] [(409 - 309)];
    int G7emRUTb;
    int k;
    int n;
    int ZaWTe78nIB [(965 - 865)];
    char str2 [(879 - 869)] [100];
    scanf ("%d", &n);
    for (ObVIA9tu1z3Q = (227 - 227); n > ObVIA9tu1z3Q; ObVIA9tu1z3Q = ObVIA9tu1z3Q +(400 - 399)) {
        scanf ("%s%s", aajGg3n8[ObVIA9tu1z3Q], str2[ObVIA9tu1z3Q]);
        WcMsk6[ObVIA9tu1z3Q] = strlen (aajGg3n8[ObVIA9tu1z3Q]);
        b[ObVIA9tu1z3Q] = strlen (str2[ObVIA9tu1z3Q]);
    }
    for (ObVIA9tu1z3Q = (705 - 705); n > ObVIA9tu1z3Q; ObVIA9tu1z3Q = ObVIA9tu1z3Q +(263 - 262)) {
        for (G7emRUTb = (535 - 535); G7emRUTb < WcMsk6[ObVIA9tu1z3Q]; G7emRUTb = G7emRUTb +(227 - 226)) {
            if (G7emRUTb < WcMsk6[ObVIA9tu1z3Q] - b[ObVIA9tu1z3Q])
                ZaWTe78nIB[G7emRUTb] = aajGg3n8[ObVIA9tu1z3Q][G7emRUTb] - (676 - 628);
            else
                ZaWTe78nIB[G7emRUTb] = aajGg3n8[ObVIA9tu1z3Q][G7emRUTb] - str2[ObVIA9tu1z3Q][G7emRUTb -WcMsk6[ObVIA9tu1z3Q] + b[ObVIA9tu1z3Q]];
        }
        for (k = WcMsk6[ObVIA9tu1z3Q] - (868 - 867); (25 - 25) <= k; k = k - (276 - 275)) {
            if (ZaWTe78nIB[k] < (544 - 544)) {
                ZaWTe78nIB[k - (839 - 838)] = ZaWTe78nIB[k - (196 - 195)] - (636 - 635);
                ZaWTe78nIB[k] = ZaWTe78nIB[k] + (866 - 856);
            }
        }
        for (k = 0; k < WcMsk6[ObVIA9tu1z3Q]; k = k + 1) {
            printf ("%d", ZaWTe78nIB[k]);
        }
    }
}

