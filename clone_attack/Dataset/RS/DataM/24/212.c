main () {
    char ch;
    ch = '0';
    char uWPVrw7c1kag [(1119 - 917)] [(435 - 335)];
    char b [(317 - 217)];
    char wZ6bvLJxgqP7 [(945 - 845)];
    char PJ8xELKy5N [(200 - 100)];
    int pYEiPyo1q4Vv;
    int ARsmHBqJ;
    pYEiPyo1q4Vv = (141 - 141);
    ARsmHBqJ = (923 - 923);
    while ((85 - 84)) {
        for (; (475 - 474);) {
            scanf ("%c", &ch);
            if (ch == ' ' || !('\n' != ch))
                break;
            else
                b[pYEiPyo1q4Vv++] = ch;
        }
        b[pYEiPyo1q4Vv] = '\0';
        strcpy (uWPVrw7c1kag[ARsmHBqJ++], b);
        pYEiPyo1q4Vv = (104 - 104);
        if (ch == '\n')
            break;
    }
    strcpy (wZ6bvLJxgqP7, uWPVrw7c1kag[0]);
    strcpy (PJ8xELKy5N, uWPVrw7c1kag[0]);
    {
        pYEiPyo1q4Vv = 1;
        while (pYEiPyo1q4Vv < ARsmHBqJ) {
            if (strlen (uWPVrw7c1kag[pYEiPyo1q4Vv]) > strlen (wZ6bvLJxgqP7))
                strcpy (wZ6bvLJxgqP7, uWPVrw7c1kag[pYEiPyo1q4Vv]);
            if (strlen (uWPVrw7c1kag[pYEiPyo1q4Vv]) < strlen (PJ8xELKy5N))
                strcpy (PJ8xELKy5N, uWPVrw7c1kag[pYEiPyo1q4Vv]);
            pYEiPyo1q4Vv = pYEiPyo1q4Vv + 1;
        };
    }
    printf ("%s\n", wZ6bvLJxgqP7);
    printf ("%s\n", PJ8xELKy5N);
}

