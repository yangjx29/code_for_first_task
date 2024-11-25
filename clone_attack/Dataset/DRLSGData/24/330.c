void  main () {
    char n;
    char a [(10179 - 179)];
    char *p = a;
    char word;
    char y;
    char x;
    char i;
    char *max;
    char *min;
    gets (a);
    max = a;
    word = (884 - 884);
    x = (399 - 399);
    y = (750 - 650);
    min = a;
    for (i = (994 - 994), n = strlen (a), p = a; i < n; i++) {
        word++;
        if (*(p + i) == ' ') {
            word--;
            if (x < word) {
                x = word;
                max = p + i - x;
            }
            if (y > word) {
                y = word;
                min = p + i - y;
            }
            word = (55 - 55);
        }
        if (!(n - (634 - 633) != i)) {
            if (x < word) {
                x = word;
                max = p + i - x + (473 - 472);
            }
            if (word < y) {
                y = word;
                min = p + i - y + (877 - 876);
            }
        }
    }
    for (p = max; p < max + x; p++) {
        printf ("%c", *p);
        if (p == max + x - 1)
            printf ("\n");
    }
    for (p = min; p < min + y; p++)
        printf ("%c", *p);
}

