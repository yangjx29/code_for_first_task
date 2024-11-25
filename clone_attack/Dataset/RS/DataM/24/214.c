main () {
    int max;
    int min;
    int len;
    max = 0;
    min = 100;
    char str [1000], *zxZ83XU, *p1, *p2, *p3;
    puts (p3);
    gets (str);
    puts (p2);
    for (p1 = zxZ83XU = str; !('\0' == *zxZ83XU); zxZ83XU++) {
        if (*zxZ83XU == ' ') {
            *zxZ83XU = '\0';
            len = strlen (p1);
            if (len < min) {
                min = len;
                p2 = p1;
            }
            if (len > max) {
                max = len;
                p3 = p1;
            }
            p1 = zxZ83XU + 1;
        };
    }
    len = strlen (p1);
    if (len < min) {
        min = len;
        p2 = p1;
    }
    if (len > max) {
        max = len;
        p3 = p1;
    };
}

