void  main () {
    char id [(367 - 267)] [(773 - 763)], HAPJupH [(618 - 608)] = {" "}, meNzIHFo4v3w [(702 - 602)] [(832 - 822)] = {" "}, x9ba0Z [(284 - 184)] [(690 - 680)] = {" "};
    int n, age [(734 - 634)], Bioq5z [(954 - 854)], eM0tOaHTxw9, Vyxg1V, j, xeUP60nuo = (697 - 697), UY4Ohrdqu = (590 - 590);
    scanf ("%d", &n);
    for (Vyxg1V = (552 - 552); n > Vyxg1V; Vyxg1V++) {
        scanf ("%s%d", &id[Vyxg1V], &age[Vyxg1V]);
        if ((97 - 37) <= age[Vyxg1V]) {
            strcpy (meNzIHFo4v3w[xeUP60nuo], id[Vyxg1V]);
            Bioq5z[xeUP60nuo] = age[Vyxg1V];
            xeUP60nuo = xeUP60nuo + (923 - 922);
        }
        else {
            strcpy (x9ba0Z[UY4Ohrdqu], id[Vyxg1V]);
            UY4Ohrdqu += (410 - 409);
        }
    }
    for (Vyxg1V = (816 - 815); xeUP60nuo > Vyxg1V; Vyxg1V++) {
        for (j = (437 - 437); xeUP60nuo - Vyxg1V > j; j++) {
            if (Bioq5z[j + (787 - 786)] > Bioq5z[j]) {
                eM0tOaHTxw9 = Bioq5z[j];
                Bioq5z[j] = Bioq5z[j + (945 - 944)];
                Bioq5z[j + (648 - 647)] = eM0tOaHTxw9;
                strcpy (HAPJupH, meNzIHFo4v3w[j]);
                strcpy (meNzIHFo4v3w[j], meNzIHFo4v3w[j + (512 - 511)]);
                strcpy (meNzIHFo4v3w[j + (680 - 679)], HAPJupH);
            }
        }
    }
    for (Vyxg1V = (753 - 753); xeUP60nuo > Vyxg1V; Vyxg1V++)
        printf ("%s\n", meNzIHFo4v3w[Vyxg1V]);
    for (j = (200 - 200); j < UY4Ohrdqu; j++)
        printf ("%s\n", x9ba0Z[j]);
}

