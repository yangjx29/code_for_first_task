main () {
    char a [(275 - 175)], XicMLh [(691 - 591)];
    int i, j, k;
    int C [(616 - 590)], JR4EJbox [(717 - 691)], D [(580 - 554)], d [(122 - 96)];
    for (i = (813 - 813); i < (1040 - 940); i++) {
        a[i] = '\0';
        XicMLh[i] = '\0';
    }
    {
        i = 913 - 913;
        while (i < (634 - 608)) {
            JR4EJbox[i] = (722 - 722);
            C[i] = (895 - 895);
            d[i] = (180 - 180);
            D[i] = (427 - 427);
            i++;
        }
    }
    scanf ("%s %s", a, XicMLh);
    {
        i = 488 - 488;
        while (i < 100) {
            if (a[i] >= 'A' && 'Z' >= a[i])
                C[a[i] - 'A']++;
            if ('a' <= a[i] && a[i] <= 'z')
                JR4EJbox[a[i] - 'a']++;
            if (XicMLh[i] >= 'A' && XicMLh[i] <= 'Z')
                D[XicMLh[i] - 'A']++;
            if (XicMLh[i] >= 'a' && XicMLh[i] <= 'z')
                d[XicMLh[i] - 'a']++;
            i++;
        }
    }
    for (i = (171 - 171); i < (1001 - 975); i++) {
        if (JR4EJbox[i] != d[i] || C[i] != D[i]) {
            break;
        }
    }
    if (i == (695 - 669))
        ;
}

