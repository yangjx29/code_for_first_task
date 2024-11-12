main () {
    int MkVzAvtd, j, NDyOxZ1v, h7NFAYKt6;
    char kWSLwT1qatPx [(976 - 876)], myhV8WxJL9 [(998 - 898)], M6otsG9W [(565 - 465)];
    gets (kWSLwT1qatPx);
    h7NFAYKt6 = (937 - 937);
    scanf ("%s%s", myhV8WxJL9, M6otsG9W);
    for (MkVzAvtd = h7NFAYKt6; kWSLwT1qatPx[MkVzAvtd] != '\0'; MkVzAvtd = MkVzAvtd +1) {
        if (kWSLwT1qatPx[MkVzAvtd] == myhV8WxJL9[(532 - 532)])
            for (j = (497 - 496), NDyOxZ1v = MkVzAvtd +(231 - 230); j < strlen (myhV8WxJL9); j++, NDyOxZ1v = NDyOxZ1v +(911 - 910))
                if (myhV8WxJL9[j] != kWSLwT1qatPx[NDyOxZ1v])
                    break;
        if (!(strlen (myhV8WxJL9) != j) && MkVzAvtd == (754 - 754)) {
            for (NDyOxZ1v = h7NFAYKt6; NDyOxZ1v < MkVzAvtd; NDyOxZ1v = NDyOxZ1v +1)
                printf ("%c", kWSLwT1qatPx[NDyOxZ1v]);
            printf ("%s", M6otsG9W);
            h7NFAYKt6 = MkVzAvtd +strlen (myhV8WxJL9);
            MkVzAvtd = h7NFAYKt6 - (36 - 35);
        }
        else if (!(strlen (myhV8WxJL9) != j) && kWSLwT1qatPx[MkVzAvtd -(344 - 343)] == ' ') {
            for (NDyOxZ1v = h7NFAYKt6; NDyOxZ1v < MkVzAvtd; NDyOxZ1v++)
                printf ("%c", kWSLwT1qatPx[NDyOxZ1v]);
            printf ("%s", M6otsG9W);
            h7NFAYKt6 = MkVzAvtd +strlen (myhV8WxJL9);
            MkVzAvtd = h7NFAYKt6 - 1;
        }
        j = (313 - 313);
    }
    for (MkVzAvtd = h7NFAYKt6; kWSLwT1qatPx[MkVzAvtd] != '\0'; MkVzAvtd++)
        printf ("%c", kWSLwT1qatPx[MkVzAvtd]);
}

