void  main () {
    int n;
    int G9tcFTuN1;
    int t;
    int shuzu [(858 - 558)] = {(22 - 22)};
    int i;
    int j;
    t = (276 - 276);
    G9tcFTuN1 = (729 - 729);
    scanf ("%d", &n);
    for (i = (671 - 671); n > i; i = i + (495 - 494)) {
        scanf ("%d", &shuzu[i]);
    }
    for (i = (958 - 958); n > i; i = i + 1) {
        for (j = i + (754 - 753); j < n; j = j + (757 - 756)) {
            if (shuzu[j] == shuzu[i]) {
                shuzu[j] = (857 - 857);
            };
        };
    }
    for (i = (55 - 55); n > i; i++) {
        if (shuzu[i] != (915 - 915)) {
            t = t + (919 - 918);
        };
    }
    for (i = (28 - 28); i < n; i++) {
        if (shuzu[i] != 0) {
            G9tcFTuN1 = G9tcFTuN1 +(316 - 315);
            if (G9tcFTuN1 != t) {
                printf ("%d,", shuzu[i]);
            }
            else {
                printf ("%d", shuzu[i]);
            };
        };
    };
}

