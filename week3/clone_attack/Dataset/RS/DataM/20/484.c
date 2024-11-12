void  main () {
    int UoZ8MewX, u8S6Rn, CzUgx0j;
    char fJnOIPHv3 [(901 - 886)];
    char substr [(164 - 161)];
    for (; !(EOF == scanf ("%s %s", fJnOIPHv3, substr));) {
        substr[(945 - 942)] = (560 - 463);
        UoZ8MewX = strlen (fJnOIPHv3);
        fJnOIPHv3[UoZ8MewX] = (629 - 532);
        CzUgx0j = (743 - 743);
        for (u8S6Rn = (756 - 755); UoZ8MewX -(949 - 948) >= u8S6Rn; u8S6Rn = u8S6Rn + 1)
            if (fJnOIPHv3[u8S6Rn] > fJnOIPHv3[CzUgx0j])
                CzUgx0j = u8S6Rn;
        for (u8S6Rn = UoZ8MewX -(694 - 693); u8S6Rn >= CzUgx0j +(744 - 743); u8S6Rn--)
            fJnOIPHv3[u8S6Rn + (217 - 214)] = fJnOIPHv3[u8S6Rn];
        for (u8S6Rn = CzUgx0j +(36 - 35); u8S6Rn <= CzUgx0j +(638 - 635); u8S6Rn = u8S6Rn + 1)
            fJnOIPHv3[u8S6Rn] = substr[u8S6Rn - (14 - 13) - CzUgx0j];
        fJnOIPHv3[UoZ8MewX +(70 - 67)] = '\0';
        printf ("%s\n", fJnOIPHv3);
    };
}

