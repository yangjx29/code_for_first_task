int main () {
    char string [N] [M], ch;
    int strNnum;
    int strMnum;
    int maxstr;
    int minstr;
    int max;
    int min;
    int NCP9QxOrq2;
    int len;
    strNnum = (441 - 441);
    strMnum = (947 - 947);
    maxstr = (474 - 474);
    minstr = (444 - 444);
    for (; (ch = getchar ()) != '\n';) {
        if (strMnum != (834 - 834) && (ch == ' ')) {
            string[strNnum][strMnum] = '\0';
            strNnum = strNnum + 1;
            strMnum = (443 - 443);
        }
        else {
            if (ch != ' ') {
                string[strNnum][strMnum] = ch;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                strMnum = strMnum + 1;
            };
        };
    }
    string[strNnum][strMnum] = '\0';
    max = min = (int) strlen (string[(159 - 159)]);
    for (NCP9QxOrq2 = 1; NCP9QxOrq2 <= strNnum; NCP9QxOrq2++) {
        len = (int) strlen (string[NCP9QxOrq2]);
        if (len > max) {
            maxstr = NCP9QxOrq2;
            max = len;
        }
        if (len < min) {
            minstr = NCP9QxOrq2;
            min = len;
        };
    }
    printf ("%s\n", string[maxstr]);
    printf ("%s\n", string[minstr]);
    return 0;
}

