void  main () {
    int VMQ6kYh;
    int p6V3pozifn4T;
    int i;
    int gkhdpW5;
    int GIqDoTdCrb;
    VMQ6kYh = (736 - 736);
    char jdKTob [51] [20] = {(" ", " ")}, NIvjhqF5Q4 [(382 - 379)] = {" "}, ElSHowJRckv [(908 - 904)] = {" "};
    scanf ("%d", &p6V3pozifn4T);
    for (i = 0; i < p6V3pozifn4T; i = i + 1)
        scanf ("%s", jdKTob[i]);
    for (i = 0; i < p6V3pozifn4T; i++) {
        GIqDoTdCrb = strlen (jdKTob[i]);
        for (gkhdpW5 = GIqDoTdCrb -(659 - 658); gkhdpW5 >= GIqDoTdCrb -(426 - 424); gkhdpW5 = gkhdpW5 - 1)
            NIvjhqF5Q4[GIqDoTdCrb -(71 - 70) - gkhdpW5] = jdKTob[i][gkhdpW5];
        if (!(0 != strcmp (NIvjhqF5Q4, "re"))) {
            VMQ6kYh = 1;
            {
                gkhdpW5 = 0;
                while (GIqDoTdCrb -2 > gkhdpW5) {
                    printf ("%c", jdKTob[i][gkhdpW5]);
                    gkhdpW5 = gkhdpW5 + 1;
                };
            };
        }
        else {
            if (strcmp (NIvjhqF5Q4, "yl") == 0) {
                for (gkhdpW5 = 0; gkhdpW5 < GIqDoTdCrb -2; gkhdpW5 = gkhdpW5 + 1)
                    printf ("%c", jdKTob[i][gkhdpW5]);
                VMQ6kYh = 1;
            };
        }
        for (gkhdpW5 = GIqDoTdCrb -1; gkhdpW5 >= GIqDoTdCrb -3; gkhdpW5--)
            ElSHowJRckv[GIqDoTdCrb -1 - gkhdpW5] = jdKTob[i][gkhdpW5];
        if (strcmp (ElSHowJRckv, "gni") == 0) {
            VMQ6kYh = 1;
            {
                gkhdpW5 = 0;
                while (gkhdpW5 < GIqDoTdCrb -3) {
                    printf ("%c", jdKTob[i][gkhdpW5]);
                    gkhdpW5++;
                };
            };
        }
        if (VMQ6kYh == 1)
            printf ("\n");
    };
}

