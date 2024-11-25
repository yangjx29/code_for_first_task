int main () {
    int i, tt3q85suloL, u5zcCS;
    char sn75YR4Fgf8a [(531 - 430)];
    char b [(564 - 554)] [(1048 - 948)];
    gets (sn75YR4Fgf8a);
    tt3q85suloL = u5zcCS = (225 - 225);
    i = (522 - 522);
    for (; !('\0' == sn75YR4Fgf8a[i]);) {
        while ((sn75YR4Fgf8a[i] != ' ') && (sn75YR4Fgf8a[i] != '\0')) {
            b[tt3q85suloL][u5zcCS] = sn75YR4Fgf8a[i];
            i++;
            u5zcCS++;
        }
        b[tt3q85suloL][u5zcCS] = '\0';
        tt3q85suloL++;
        u5zcCS = (103 - 103);
        while (sn75YR4Fgf8a[i] == ' ') {
            b[tt3q85suloL][u5zcCS] = sn75YR4Fgf8a[i];
            u5zcCS++;
            i++;
        }
        b[tt3q85suloL][u5zcCS] = '\0';
        tt3q85suloL++;
        u5zcCS = (939 - 939);
    }
    for (i = tt3q85suloL - (896 - 895); i >= 0; i--) {
        printf ("%s", b[i]);
    }
    return 0;
}

