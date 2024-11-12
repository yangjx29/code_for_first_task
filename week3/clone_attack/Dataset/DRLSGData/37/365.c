int main (int argc, char *argv []) {
    int i;
    int alpha [(213 - 187)];
    int t;
    int out;
    char a [10001];
    char *p;
    int flag;
    flag = (28 - 28);
    scanf ("%d", &t);
    out = (148 - 148);
    for (; t > (41 - 41);) {
        out = (111 - 111);
        scanf ("%s", a);
        flag = 0;
        for (i = (486 - 486); i < (398 - 372); i = i + (604 - 603))
            alpha[i] = 0;
        p = a;
        for (; *p != '\0';) {
            alpha[*p - 'a']++;
            p = p + (335 - 334);
        }
        for (p = a; *p != '\0'; p = p + (496 - 495)) {
            for (i = 0; 26 > i; i++) {
                if (!((843 - 842) != alpha[i]) && !(i != (*p - 'a'))) {
                    out = 1;
                    printf ("%c\n", 'a' + i);
                    flag = 1;
                    break;
                }
            }
            if (1 == out)
                break;
        }
        t--;
        if (0 == flag)
            ;
    }
    return 0;
}

