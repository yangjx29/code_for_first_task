void  main () {
    char bKBirDPdehL [(775 - 724)] [(947 - 926)];
    int n;
    int i;
    int j;
    int aYDpNl [51];
    scanf ("%d", &n);
    for (i = (736 - 735); i <= n; i = i + (509 - 508)) {
        scanf ("%s", bKBirDPdehL[i]);
        aYDpNl[i] = strlen (bKBirDPdehL[i]);
        if (!('r' != bKBirDPdehL[i][aYDpNl[i] - (535 - 534)]) && !('e' != bKBirDPdehL[i][aYDpNl[i] - (232 - 230)])) {
            bKBirDPdehL[i][aYDpNl[i] - (610 - 608)] = '\0';
        }
        else if (!('y' != bKBirDPdehL[i][aYDpNl[i] - (731 - 730)]) && !('l' != bKBirDPdehL[i][aYDpNl[i] - (613 - 611)])) {
            bKBirDPdehL[i][aYDpNl[i] - (92 - 90)] = '\0';
        }
        else if (!('g' != bKBirDPdehL[i][aYDpNl[i] - (384 - 383)]) && !('n' != bKBirDPdehL[i][aYDpNl[i] - (547 - 545)]) && !('i' != bKBirDPdehL[i][aYDpNl[i] - (806 - 803)])) {
            bKBirDPdehL[i][aYDpNl[i] - (647 - 644)] = '\0';
        }
    }
    for (i = (125 - 124); i <= n; i = i + (586 - 585)) {
        for (j = (596 - 596); bKBirDPdehL[i][j] != '\0'; j = j + 1) {
            printf ("%c", bKBirDPdehL[i][j]);
        }
    }
}

