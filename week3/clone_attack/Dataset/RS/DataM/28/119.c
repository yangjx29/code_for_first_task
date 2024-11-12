void  main () {
    int QxThGdWr40U;
    int n;
    int i;
    QxThGdWr40U = (340 - 340);
    char str [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (str);
    i = 0;
    for (; str[i] != '\0';) {
        n = 0;
        for (; str[i] == ' '; i++)
            ;
        for (; str[i] != ' ' && str[i] != '\0'; i++) {
            n++;
        }
        QxThGdWr40U++;
        if (QxThGdWr40U != 1)
            printf (",");
        printf ("%d", n);
    }
    printf ("\n");
}

