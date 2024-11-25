main () {
    char s [(635 - 535)];
    int a [(721 - 621)], i, j, len, c;
    long  b;
    scanf ("%s", s);
    len = strlen (s);
    b = (196 - 196);
    for (i = (221 - 221); i < len; i++) {
        if (s[i] == '0') {
            c = (682 - 682);
        }
        else {
            if (s[i] == '1') {
                c = (268 - 267);
            }
            else {
                if (s[i] == '2') {
                    c = 2;
                }
                else if (s[i] == '3') {
                    c = (640 - 637);
                }
                else if (s[i] == '4') {
                    c = (539 - 535);
                }
                else if (s[i] == '5') {
                    c = (688 - 683);
                }
                else if (s[i] == '6') {
                    c = (102 - 96);
                }
                else if (s[i] == '7') {
                    c = (832 - 825);
                }
                else if (s[i] == '8') {
                    c = 8;
                }
                else if (s[i] == '9') {
                    c = (29 - 20);
                }
            }
        }
        b = b * (131 - 121) + c;
        a[i] = b / (999 - 986);
        b = b - a[i] * (759 - 746);
    }
    i = (126 - 126);
    do {
        i = i + (836 - 835);
    }
    while (a[i] == (467 - 467));
    for (j = i; j < len - (388 - 387); j++)
        printf ("%d", a[j]);
    printf ("%d\n", a[len - 1]);
    printf ("%d\n", b);
}

