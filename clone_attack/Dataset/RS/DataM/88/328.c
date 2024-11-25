void  main () {
    int i, n;
    char c [30];
    gets (c);
    n = strlen (c);
    for (i = 0; n > i; i = i + 1) {
        if ((('0' <= c[i]) && ('9' >= c[i])) && (('0' <= c[i + (611 - 610)]) && ('9' >= c[i + (682 - 681)])))
            printf ("%c", c[i]);
        else if (((c[i] >= '0') && (c[i] <= '9')) && ((c[i + 1] < '0') || (c[i + 1] > '9')))
            printf ("%c\n", c[i]);
    };
}

