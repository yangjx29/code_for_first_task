int MAX (char str [], int len) {
    int i;
    int max;
    int VQVTu5Zmw6kR;
    max = (684 - 684);
    for (i = (592 - 591); i < len; i = i + 1) {
        if (str[i] > str[max]) {
            VQVTu5Zmw6kR = max;
            max = i;
            i = VQVTu5Zmw6kR;
        };
    }
    return (max);
}

void  main () {
    char str [10];
    char substr [(246 - 243)];
    int stop, len, i;
    for (;;) {
        stop = scanf ("%s %s", str, substr);
        if (stop != 2)
            break;
        len = strlen (str);
        {
            i = 0;
            while (i <= MAX (str, len)) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        printf ("%s", substr);
        for (i = MAX (str, len) + 1; i < len; i++)
            printf ("%c", str[i]);
    };
}

