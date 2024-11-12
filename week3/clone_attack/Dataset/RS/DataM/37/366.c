main () {
    int vnHqKyalv, i, j, CmWyiBz0LV9J, t;
    char s [(10253 - 253)], qq4uI9Uyg;
    scanf ("%d", &vnHqKyalv);
    scanf ("%c", &qq4uI9Uyg);
    for (t = (594 - 594); t < vnHqKyalv; t++) {
        gets (s);
        for (i = 0; !('\0' == s[i]); i = i + 1) {
            CmWyiBz0LV9J = 0;
            for (j = 0; !('\0' == s[j]); j = j + 1)
                if ((!(s[j] != s[i])) && (i != j)) {
                    CmWyiBz0LV9J = 1;
                    break;
                }
            if (CmWyiBz0LV9J == 0) {
                printf ("%c\n", s[i]);
                break;
            };
        }
        if (s[i] == '\0')
            printf ("no\n");
    };
}

