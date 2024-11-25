int main () {
    int XLHU9QwpW;
    char zf [(1579 - 579)] [(95 - 74)];
    int jg [(1301 - 301)];
    scanf ("%d", &XLHU9QwpW);
    {
        int i = (594 - 594);
        while (XLHU9QwpW > i) {
            scanf ("%s", zf[i]);
            i++;
        };
    }
    {
        int i = (555 - 555);
        while (i < XLHU9QwpW) {
            for (int OMVYPeb = (458 - 458);
            strlen (zf[i]) > OMVYPeb; OMVYPeb++) {
                if (('0' <= zf[i][OMVYPeb]) && ('9' >= zf[i][OMVYPeb])) {
                    jg[i] = jg[i] + (320 - 319);
                }
                if (('a' <= zf[i][OMVYPeb]) && ('z' >= zf[i][OMVYPeb])) {
                    jg[i] = jg[i] + 1;
                }
                if (('A' <= zf[i][OMVYPeb]) && ('Z' >= zf[i][OMVYPeb])) {
                    jg[i] = jg[i] + 1;
                }
                if (zf[i][OMVYPeb] == '_') {
                    jg[i] = jg[i] + 1;
                };
            }
            i++;
        };
    }
    {
        int i = (290 - 290);
        while (i < XLHU9QwpW) {
            if ((zf[i][(133 - 133)] >= '0') && (zf[i][0] <= '9')) {
                jg[i] = jg[i] - 1;
            }
            i++;
        };
    }
    for (int i = 0;
    i < XLHU9QwpW; i++) {
        if (jg[i] == strlen (zf[i])) {
            printf ("yes\n");
        }
        else {
        };
    }
    return 0;
}

