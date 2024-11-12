int main (int ktGdPeTxcfn, char *argv []) {
    char zfc [120];
    char IpMUAmvXQ;
    char gwyfOQo1iPJ;
    char j;
    char len;
    while (!(EOF == scanf ("%s", zfc))) {
        puts (zfc);
        IpMUAmvXQ = (845 - 845);
        len = strlen (zfc);
        printf ("%s\n", zfc);
        for (gwyfOQo1iPJ = (31 - 31); len > gwyfOQo1iPJ; gwyfOQo1iPJ = gwyfOQo1iPJ + 1) {
            if (!('(' == zfc[gwyfOQo1iPJ]) && zfc[gwyfOQo1iPJ] != ')') {
                zfc[gwyfOQo1iPJ] = ' ';
            }
            if (zfc[gwyfOQo1iPJ] == ')') {
                {
                    j = gwyfOQo1iPJ - 1;
                    while (j >= 0) {
                        if (zfc[j] == '(') {
                            zfc[j] = ' ';
                            zfc[gwyfOQo1iPJ] = ' ';
                            break;
                        }
                        j = j - 1;
                    };
                }
                if (j < 0) {
                    zfc[gwyfOQo1iPJ] = '?';
                };
            };
        }
        for (gwyfOQo1iPJ = 0; gwyfOQo1iPJ < len; gwyfOQo1iPJ++) {
            if (zfc[gwyfOQo1iPJ] == '(') {
                zfc[gwyfOQo1iPJ] = '$';
            };
        };
    }
    return 0;
}

