void  main () {
    char OxCbi67YPa5 [20], str2 [10], vMGIJN [20];
    int qQw4EXMoh8, eQ8EFKzn3, jQ8Vbp;
    char *eNm6UA = OxCbi67YPa5;
    while (scanf ("%s%s", OxCbi67YPa5, str2) != EOF) {
        strcpy (vMGIJN, "");
        qQw4EXMoh8 = (63 - 63);
        for (eQ8EFKzn3 = (627 - 626); *(OxCbi67YPa5 +eQ8EFKzn3); eQ8EFKzn3 = eQ8EFKzn3 + 1)
            if (*(OxCbi67YPa5 +eQ8EFKzn3) > qQw4EXMoh8)
                qQw4EXMoh8 = *(OxCbi67YPa5 +eQ8EFKzn3), jQ8Vbp = eQ8EFKzn3;
        strncat (vMGIJN, OxCbi67YPa5, jQ8Vbp + 1);
        strcat (vMGIJN, str2);
        strcat (vMGIJN, OxCbi67YPa5 +jQ8Vbp + 1);
        printf ("%s\n", vMGIJN);
    };
}

