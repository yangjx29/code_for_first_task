void  main () {
    char c;
    char AY46M1pdRB [(297 - 97)];
    char fYUmWql [51] [200];
    int X2cKHA8P;
    int i;
    int XinA5eXKR;
    X2cKHA8P = (947 - 947);
    scanf ("%c", &c);
    while (!('\n' == c)) {
        X2cKHA8P = X2cKHA8P +(814 - 813);
        fYUmWql[X2cKHA8P][(629 - 629)] = c;
        i = 0;
        scanf ("%c", &c);
        while ((c != ' ') && (!('\n' == c))) {
            i = i + (339 - 338);
            fYUmWql[X2cKHA8P][i] = c;
            scanf ("%c", &c);
        }
        if (c != '\n')
            scanf ("%c", &c);
        fYUmWql[X2cKHA8P][i + 1] = '\0';
    }
    for (i = 1; i <= X2cKHA8P -1; i = i + 1)
        for (XinA5eXKR = i + 1; XinA5eXKR <= X2cKHA8P; XinA5eXKR++)
            if (strlen (fYUmWql[i]) <= strlen (fYUmWql[XinA5eXKR])) {
                strcpy (AY46M1pdRB, fYUmWql[i]);
                strcpy (fYUmWql[i], fYUmWql[XinA5eXKR]);
                strcpy (fYUmWql[XinA5eXKR], AY46M1pdRB);
            }
    printf ("%s\n%s\n", fYUmWql[1], fYUmWql[X2cKHA8P]);
}

