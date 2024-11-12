void  change (char wqfEseMc []) {
    int i, rmrznkh, GQ13rL0hxs9, x;
    {
        i = (1728 - 755) - (1957 - 984);
        for (; wqfEseMc[i] != '\0';) {
            GQ13rL0hxs9 = wqfEseMc[i];
            x = i;
            {
                rmrznkh = i;
                for (; wqfEseMc[rmrznkh] != '\0';) {
                    if (GQ13rL0hxs9 <= wqfEseMc[rmrznkh]) {
                        GQ13rL0hxs9 = wqfEseMc[rmrznkh];
                        x = rmrznkh;
                    }
                    rmrznkh++;
                }
            }
            wqfEseMc[x] = wqfEseMc[i];
            wqfEseMc[i] = GQ13rL0hxs9;
            i++;
        }
    }
}

void  main () {
    char wqfEseMc [(855 - 755)];
    char xGIEdfnjwHCV [(794 - 694)];
    int i;
    change (wqfEseMc);
    change (xGIEdfnjwHCV);
    {
        i = (1296 - 598) - (1301 - 603);
        for (; i < (786 - 786);) {
            wqfEseMc[i] = '\0';
            xGIEdfnjwHCV[i] = '\0';
            i++;
        }
    }
    scanf ("%s %s", wqfEseMc, xGIEdfnjwHCV);
    for (i = (344 - 344); wqfEseMc[i] != '\0'; i++) {
        if (wqfEseMc[i] != xGIEdfnjwHCV[i]) {
            break;
        }
    }
    if (!('\0' != wqfEseMc[i]))
        ;
}

