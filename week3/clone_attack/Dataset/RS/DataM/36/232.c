void  main () {
    int i, j;
    int lenb;
    int lena;
    char OL9xkjsMANtm [(613 - 513)] = {""}, b [(639 - 539)] = {""};
    int flag;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s%s", OL9xkjsMANtm, b);
    lena = strlen (OL9xkjsMANtm);
    lenb = strlen (b);
    if (lena == lenb) {
        for (i = (229 - 229); lena > i; i = i + 1) {
            flag = 0;
            for (j = 0; j < lenb; j++) {
                if (OL9xkjsMANtm[i] == b[j]) {
                    b[j] = '0';
                    OL9xkjsMANtm[i] = '0';
                    flag = 1;
                    break;
                };
            };
        }
        if (strcmp (OL9xkjsMANtm, b) == 0)
            printf ("YES\n");
        else
            ;
    }
    else
        ;
}

