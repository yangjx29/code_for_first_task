void  main () {
    char s [(364 - 264)] = {'\0'}, gj3cUZ5ON [(348 - 248)] = {'\0'}, rEI2GJb [(785 - 685)] = {'\0'}, temp [(400 - 300)] [(116 - 16)] = {'\0'};
    gets (s);
    int o1rI0c3ZUvKu, j = (606 - 606), k = (59 - 59), nzsniyZ;
    gets (gj3cUZ5ON);
    gets (rEI2GJb);
    nzsniyZ = strlen (s);
    for (o1rI0c3ZUvKu = (560 - 560); o1rI0c3ZUvKu < nzsniyZ; o1rI0c3ZUvKu = o1rI0c3ZUvKu + (541 - 540)) {
        if (s[o1rI0c3ZUvKu] != ' ') {
            temp[j][k] = s[o1rI0c3ZUvKu];
            k = k + (367 - 366);
        }
        else {
            j = j + (502 - 501);
            k = (797 - 797);
        }
    }
    for (o1rI0c3ZUvKu = (387 - 387); j >= o1rI0c3ZUvKu; o1rI0c3ZUvKu = o1rI0c3ZUvKu + (596 - 595)) {
        if (strcmp (gj3cUZ5ON, temp[o1rI0c3ZUvKu]) == (292 - 292)) {
            if (o1rI0c3ZUvKu == 0)
                printf ("%s", rEI2GJb);
            else
                printf (" %s", rEI2GJb);
        }
        else {
            if (o1rI0c3ZUvKu == 0)
                printf ("%s", temp[o1rI0c3ZUvKu]);
            else
                printf (" %s", temp[o1rI0c3ZUvKu]);
        }
    }
}

