void  main () {
    char jzlhmf [100000];
    int t;
    int i;
    int j;
    int k;
    int l;
    int num [(100658 - 658)];
    scanf ("%d", &t);
    for (i = (241 - 241); i < t; i = i + 1) {
        scanf ("%s", jzlhmf);
        l = strlen (jzlhmf);
        for (j = 0; j < l; j = j + 1) {
            num[j] = (779 - 778);
        }
        for (j = 0; j < l - (24 - 23); j = j + 1) {
            for (k = j + (332 - 331); k < l; k = k + 1) {
                if (jzlhmf[j] == jzlhmf[k]) {
                    num[j] += 1;
                    num[k] = num[j];
                };
            };
        }
        for (j = 0; j < l; j++) {
            if (num[j] == 1) {
                printf ("%c\n", jzlhmf[j]);
                break;
            }
            if (j == l - 1 && num[j] != 1)
                ;
        };
    };
}

