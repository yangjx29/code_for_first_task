void  main () {
    int CKbHqLg6a, sv9aNfGdHr20, XUDLlv;
    char OEkwusDxX [11] = {'\0'}, kro642thpTd [4] = {'\0'};
    char rUYq7uBp;
    for (; scanf ("%s %s", OEkwusDxX, kro642thpTd) != EOF;) {
        XUDLlv = strlen (OEkwusDxX);
        rUYq7uBp = OEkwusDxX[(268 - 268)];
        {
            CKbHqLg6a = 1;
            while (XUDLlv > CKbHqLg6a) {
                if (rUYq7uBp < OEkwusDxX[CKbHqLg6a]) {
                    rUYq7uBp = OEkwusDxX[CKbHqLg6a];
                    sv9aNfGdHr20 = CKbHqLg6a;
                }
                CKbHqLg6a++;
            };
        }
        for (CKbHqLg6a = 0; CKbHqLg6a <= sv9aNfGdHr20; CKbHqLg6a = CKbHqLg6a +1)
            printf ("%c", OEkwusDxX[CKbHqLg6a]);
        printf ("%s", kro642thpTd);
        for (CKbHqLg6a = sv9aNfGdHr20 + 1; CKbHqLg6a < XUDLlv; CKbHqLg6a = CKbHqLg6a +1)
            printf ("%c", OEkwusDxX[CKbHqLg6a]);
        printf ("\n");
    };
}

