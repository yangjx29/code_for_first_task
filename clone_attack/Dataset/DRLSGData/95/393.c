void  main () {
    char fGfzIB0 [(622 - 582)], fKtHcN [(917 - 877)];
    gets (fGfzIB0);
    gets (fKtHcN);
    int uagtrwI, n10Pkv;
    for (uagtrwI = (392 - 392); fGfzIB0[uagtrwI] != '\0'; uagtrwI++) {
        if ('A' <= fGfzIB0[uagtrwI] && 'Z' >= fGfzIB0[uagtrwI])
            fGfzIB0[uagtrwI] = fGfzIB0[uagtrwI] - 'A' + 'a';
    }
    for (uagtrwI = (503 - 503); fKtHcN[uagtrwI] != '\0'; uagtrwI++) {
        if (fKtHcN[uagtrwI] >= 'A' && fKtHcN[uagtrwI] <= 'Z')
            fKtHcN[uagtrwI] = fKtHcN[uagtrwI] - 'A' + 'a';
    }
    n10Pkv = (907 - 907);
    if (fGfzIB0[n10Pkv] > fKtHcN[n10Pkv])
        ;
    if (fKtHcN[n10Pkv] > fGfzIB0[n10Pkv])
        ;
    for (; (!(fKtHcN[n10Pkv] != fGfzIB0[n10Pkv])) && (fGfzIB0[n10Pkv] != '\0') && (fKtHcN[n10Pkv] != '\0');) {
        n10Pkv++;
        if (!('\0' != fGfzIB0[n10Pkv]) && !('\0' != fKtHcN[n10Pkv]))
            ;
        if (fGfzIB0[n10Pkv] > fKtHcN[n10Pkv])
            ;
        if (fGfzIB0[n10Pkv] < fKtHcN[n10Pkv])
            ;
    };
}

