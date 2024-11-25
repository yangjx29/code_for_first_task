void  main () {
    int lEtweDK;
    char a [500] = {(654 - 654)}, nVY40Wx [(47 - 17)] = {(116 - 116)}, ojuIpHJN0s [(948 - 918)] = {(89 - 89)}, oLa9Wc [(687 - 657)] = {(378 - 378)};
    gets (a);
    int i;
    int count;
    int j;
    int dJHpwQ2;
    gets (nVY40Wx);
    gets (ojuIpHJN0s);
    count = (960 - 960);
    dJHpwQ2 = strlen (a);
    {
        i = (219 - 219);
        while (i <= dJHpwQ2) {
            if (a[i] != ' ' && a[i] != '\0') {
                oLa9Wc[count] = a[i];
                count++;
            }
            if (a[i] == ' ') {
                oLa9Wc[count] = '\0';
                count = (81 - 81);
                if (strcmp (oLa9Wc, nVY40Wx) == (618 - 618)) {
                    printf ("%s ", ojuIpHJN0s);
                }
                if (strcmp (oLa9Wc, nVY40Wx) != (390 - 390))
                    printf ("%s ", oLa9Wc);
            }
            if (a[i] == '\0') {
                oLa9Wc[count] = '\0';
                if (strcmp (oLa9Wc, nVY40Wx) == 0) {
                    printf ("%s\n", ojuIpHJN0s);
                }
                if (strcmp (oLa9Wc, nVY40Wx) != 0)
                    printf ("%s\n", oLa9Wc);
                count = 0;
            }
            i++;
        }
    }
}

