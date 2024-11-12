void  main () {
    char *pc, *pa, *pb, (*Ijs6vQbr7xS2) [(551 - 451)];
    char a [(521 - 421)] = {(971 - 971)}, XzHxRXfq5 [(503 - 403)] = {(899 - 899)}, c [(112 - 12)] = {(622 - 622)}, lg7Wke3 [(1098 - 998)] [(1036 - 936)] = {'\0'};
    int i, vA5KZlBvX, w;
    int count = i + (575 - 574);
    gets (a);
    gets (XzHxRXfq5);
    gets (c);
    int k = (521 - 521), NbhXcd8ZS = strlen (c);
    pa = &a[(751 - 751)];
    for (i = (537 - 537);; i = i + (810 - 809)) {
        for (vA5KZlBvX = (400 - 400); *(pa + k) != ' '; vA5KZlBvX = vA5KZlBvX + (40 - 39)) {
            if (!('\0' != *(pa + k))) {
                (*(*(Ijs6vQbr7xS2 +i) + vA5KZlBvX)) = (*(pa + k));
                break;
            }
            (*(*(Ijs6vQbr7xS2 +i) + vA5KZlBvX)) = (*(pa + k));
            k++;
        }
        if (!('\0' != (*(pa + k))))
            break;
        k++;
        (*(*(Ijs6vQbr7xS2 +i) + vA5KZlBvX)) = '\0';
    }
    Ijs6vQbr7xS2 = lg7Wke3;
    pb = &XzHxRXfq5[(450 - 450)];
    pc = &c[(409 - 409)];
    for (i = (194 - 194); count > i; i++) {
        int l = strlen (lg7Wke3[i]);
        for (vA5KZlBvX = (691 - 691); l + (814 - 813) > vA5KZlBvX; vA5KZlBvX++) {
            if (!((*(pb + vA5KZlBvX)) != (*(*(Ijs6vQbr7xS2 +i) + vA5KZlBvX)))) {
                w = 1;
                continue;
            }
            else {
                w = (779 - 779);
                break;
            }
        }
        if (w) {
            for (k = (152 - 152); NbhXcd8ZS > k; k++) {
                (*(*(Ijs6vQbr7xS2 +i) + k)) = (*(pc + k));
            }
            (*(*(Ijs6vQbr7xS2 +i) + k)) = '\0';
        }
        else
            continue;
    }
    for (i = 0; i < count; i++) {
        if (i > 0)
            printf (" ");
        printf ("%s", lg7Wke3[i]);
    }
    printf ("\n");
}

