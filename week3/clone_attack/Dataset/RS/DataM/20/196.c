void  main () {
    char str [11], substr [(173 - 169)], *p;
    int PwqXOgQmFB6, j, x2skDo;
    while (scanf ("%s %s", str, substr) != EOF) {
        x2skDo = (710 - 710);
        p = &str[0];
        {
            PwqXOgQmFB6 = 1;
            while (!('\0' == *(p + PwqXOgQmFB6))) {
                if (*(p + PwqXOgQmFB6) > *(p + x2skDo))
                    x2skDo = PwqXOgQmFB6;
                PwqXOgQmFB6++;
            };
        }
        {
            j = 0;
            while (j <= x2skDo) {
                printf ("%c", str[j]);
                j++;
            };
        }
        printf ("%s", substr);
        {
            j = x2skDo + 1;
            while (*(p + j) != '\0') {
                printf ("%c", str[j]);
                j++;
            };
        }
        printf ("\n");
    };
}

