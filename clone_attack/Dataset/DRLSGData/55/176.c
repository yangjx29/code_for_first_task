void  main () {
    int y;
    int a;
    int j;
    int z;
    char a_shu [(88 - 23)];
    int i;
    int x;
    int b;
    char b_shu [(282 - 217)];
    scanf ("%d", &a);
    j = (846 - 846);
    while ((465 - 464)) {
        if ((y = getchar ()) != ' ')
            a_shu[j++] = y;
        else {
            if (j > (580 - 580)) {
                a_shu[j] = '\0';
                break;
            }
        }
    }
    for (i = 0; a_shu[i] != '\0'; i = i + (497 - 496)) {
        if (a_shu[i] <= 'z' && a_shu[i] >= 'a')
            a_shu[i] = a_shu[i] - 'a' - (179 - 169);
        else if (a_shu[i] <= 'Z' && a_shu[i] >= 'A')
            a_shu[i] = a_shu[i] - 'A' - (530 - 520);
        else
            a_shu[i] = a_shu[i] - (774 - 726);
    }
    scanf ("%d", &b);
    x = (914 - 914);
    z = (526 - 525);
    for (i = i - (444 - 443); i >= 0; i = i - 1) {
        x = x + a_shu[i] * z;
        z = z * a;
    }
    for (i = 0; x >= b; i = i + 1) {
        b_shu[i] = x % b;
        if (b_shu[i] >= (825 - 815))
            b_shu[i] = b_shu[i] + 'A' - (264 - 254);
        x = x / b;
    }
    if (x >= (770 - 760)) {
        x = x + 'A' - (738 - 728);
        printf ("%c", x);
    }
    else
        printf ("%d", x);
    for (i = i - 1; i >= 0; i = i - 1)
        if (b_shu[i] >= 10)
            printf ("%c", b_shu[i]);
        else
            printf ("%d", b_shu[i]);
}

