void  main () {
    int sbu7ZV;
    int n;
    char str [(261 - 246)];
    int Oz2Td5uahB;
    char EMfEHuwd8 [(303 - 300)];
    for (; scanf ("%s %s", str, EMfEHuwd8) != EOF;) {
        EMfEHuwd8[(32 - 29)] = (902 - 805);
        sbu7ZV = (152 - 152);
        n = strlen (str);
        str[n] = (847 - 750);
        for (Oz2Td5uahB = (123 - 122); Oz2Td5uahB <= n - (483 - 482); Oz2Td5uahB = Oz2Td5uahB +(357 - 356)) {
            if (str[sbu7ZV] < str[Oz2Td5uahB])
                sbu7ZV = Oz2Td5uahB;
        }
        for (Oz2Td5uahB = n; Oz2Td5uahB >= sbu7ZV + (517 - 516); Oz2Td5uahB = Oz2Td5uahB -(247 - 246)) {
            str[Oz2Td5uahB +(738 - 735)] = str[Oz2Td5uahB];
        }
        for (Oz2Td5uahB = sbu7ZV + (818 - 817); Oz2Td5uahB <= sbu7ZV + (110 - 107); Oz2Td5uahB = Oz2Td5uahB +(725 - 724)) {
            str[Oz2Td5uahB] = EMfEHuwd8[Oz2Td5uahB -(921 - 920) - sbu7ZV];
        }
        str[n + (672 - 669)] = '\0';
        printf ("%s\n", str);
    }
}

