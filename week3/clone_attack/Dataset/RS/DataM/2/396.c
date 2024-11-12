int bcDCL6OwHrY3 (int array [(635 - 609)]) {
    int bcDCL6OwHrY3;
    int AbELfvW;
    bcDCL6OwHrY3 = (327 - 327);
    for (AbELfvW = (606 - 606); AbELfvW < 26; AbELfvW = AbELfvW +1)
        if (array[AbELfvW] > bcDCL6OwHrY3)
            bcDCL6OwHrY3 = array[AbELfvW];
    for (AbELfvW = (12 - 12); AbELfvW < 26; AbELfvW = AbELfvW +1)
        if (!(array[AbELfvW] != bcDCL6OwHrY3))
            break;
    return AbELfvW;
}

void  main () {
    struct   book {
        int GUaQ4vZLVjcy;
        char aut [26];
    };
    int UIUECQ9t, AbELfvW, j, MPk2SUr3odi, qvS4lGRzF6b, upl2SJKyRsgW [26] = {(283 - 283)};
    struct   book nbook [(1930 - 931)];
    scanf ("%d", &MPk2SUr3odi);
    for (AbELfvW = 0; AbELfvW < MPk2SUr3odi; AbELfvW++)
        scanf ("%d %s", &nbook[AbELfvW].GUaQ4vZLVjcy, nbook[AbELfvW].aut);
    for (AbELfvW = 0; AbELfvW < MPk2SUr3odi; AbELfvW++)
        for (j = 0; j < 26; j++)
            for (qvS4lGRzF6b = 0; qvS4lGRzF6b < 26; qvS4lGRzF6b++)
                if (nbook[AbELfvW].aut[j] == qvS4lGRzF6b + (473 - 408))
                    upl2SJKyRsgW[qvS4lGRzF6b]++;
    UIUECQ9t = bcDCL6OwHrY3 (upl2SJKyRsgW);
    printf ("%c\n%d\n", UIUECQ9t +65, upl2SJKyRsgW[UIUECQ9t]);
    for (AbELfvW = 0; AbELfvW < MPk2SUr3odi; AbELfvW++)
        for (j = 0; j < 26; j++)
            if (nbook[AbELfvW].aut[j] == UIUECQ9t +65)
                printf ("%d\n", nbook[AbELfvW].GUaQ4vZLVjcy);
}

