void  main () {
    char Zhm0yAvljK5o [(1090 - 990)] [(895 - 795)] = {""};
    char shortstr [(1100 - 1000)] = {""};
    char longstr [100] = {""};
    int i;
    int FC3rEIjZ2S;
    char zuYVbvmPh5 [1000];
    gets (zuYVbvmPh5);
    int s5eQfX2kdWxU;
    FC3rEIjZ2S = (525 - 525);
    s5eQfX2kdWxU = (680 - 680);
    for (i = (441 - 441); zuYVbvmPh5[i] != '\0'; i = i + (160 - 159)) {
        Zhm0yAvljK5o[FC3rEIjZ2S][s5eQfX2kdWxU] = zuYVbvmPh5[i];
        s5eQfX2kdWxU = s5eQfX2kdWxU + (585 - 584);
        if (!((548 - 516) != zuYVbvmPh5[i])) {
            Zhm0yAvljK5o[FC3rEIjZ2S][s5eQfX2kdWxU - (918 - 917)] = '\0';
            FC3rEIjZ2S = FC3rEIjZ2S +(336 - 335);
            s5eQfX2kdWxU = (11 - 11);
        }
    }
    strcpy (longstr, Zhm0yAvljK5o[0]);
    strcpy (shortstr, Zhm0yAvljK5o[0]);
    for (i = 0; i <= FC3rEIjZ2S; i = i + 1) {
        if (strlen (longstr) < strlen (Zhm0yAvljK5o[i]))
            strcpy (longstr, Zhm0yAvljK5o[i]);
        if (strlen (shortstr) > strlen (Zhm0yAvljK5o[i]))
            strcpy (shortstr, Zhm0yAvljK5o[i]);
    }
    printf ("%s\n%s\n", longstr, shortstr);
}

