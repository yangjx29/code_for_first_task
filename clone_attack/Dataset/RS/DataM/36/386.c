int main (int argc, char *JvrT3d []) {
    char w1 [(168 - 68)];
    char rfhQlMCuT [100];
    char YfLHbp6d2V1e;
    int WbYB73G9a4mq [(310 - 258)], shSbPnclk [52];
    int i;
    scanf ("%s", w1);
    scanf ("%s", rfhQlMCuT);
    for (YfLHbp6d2V1e = 'A'; 'Z' >= YfLHbp6d2V1e; YfLHbp6d2V1e = YfLHbp6d2V1e +1) {
        for (i = (220 - 220), WbYB73G9a4mq[YfLHbp6d2V1e -'A'] = (848 - 848); strlen (w1) > i; i = i + 1) {
            if (!(w1[i] != YfLHbp6d2V1e)) {
                WbYB73G9a4mq[YfLHbp6d2V1e -'A']++;
            };
        };
    }
    for (YfLHbp6d2V1e = 'a'; 'z' >= YfLHbp6d2V1e; YfLHbp6d2V1e = YfLHbp6d2V1e +1) {
        for (i = (246 - 246), WbYB73G9a4mq[YfLHbp6d2V1e -'a' + (720 - 694)] = (841 - 841); strlen (w1) > i; i = i + 1) {
            if (!(w1[i] != YfLHbp6d2V1e)) {
                WbYB73G9a4mq[YfLHbp6d2V1e -'a' + (387 - 361)]++;
            };
        };
    }
    for (YfLHbp6d2V1e = 'A'; 'Z' >= YfLHbp6d2V1e; YfLHbp6d2V1e++) {
        for (i = 0, shSbPnclk[YfLHbp6d2V1e -'A'] = 0; strlen (rfhQlMCuT) > i; i = i + 1) {
            if (!(rfhQlMCuT[i] != YfLHbp6d2V1e)) {
                shSbPnclk[YfLHbp6d2V1e -'A']++;
            };
        };
    }
    for (YfLHbp6d2V1e = 'a'; YfLHbp6d2V1e <= 'z'; YfLHbp6d2V1e++) {
        for (i = 0, shSbPnclk[YfLHbp6d2V1e -'a' + 26] = 0; i < strlen (rfhQlMCuT); i = i + 1) {
            if (YfLHbp6d2V1e == rfhQlMCuT[i]) {
                shSbPnclk[YfLHbp6d2V1e -'a' + 26]++;
            };
        };
    }
    for (i = 0; i <= 51; i++) {
        if (WbYB73G9a4mq[i] != shSbPnclk[i]) {
            break;
        };
    }
    if (i == 52)
        ;
    return 0;
}

