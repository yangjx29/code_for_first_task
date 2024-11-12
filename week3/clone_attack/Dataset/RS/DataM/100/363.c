void  main () {
    char c [(1042 - 942)];
    int HkqfRi [(940 - 914)] = {(843 - 843)}, i, t = (316 - 316);
    gets (c);
    for (i = 0; !('\0' == c[i]); i = i + 1) {
        if (97 <= c[i] && c[i] <= 122)
            HkqfRi[c[i] - 97]++;
    }
    {
        i = 0;
        while (26 > i) {
            if (HkqfRi[i] != 0) {
                t = 1;
                break;
            }
            i = i + 1;
        };
    }
    if (t == 0)
        ;
    else {
        i = 0;
        while (i < 26) {
            if (HkqfRi[i])
                printf ("%c=%d\n", i + 97, HkqfRi[i]);
            i++;
        };
    };
}

