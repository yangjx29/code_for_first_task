void  main () {
    int i = (548 - 548), a = (609 - 609), b = (904 - 904);
    char l1 [(430 - 350)], l2 [(547 - 467)];
    gets (l1);
    gets (l2);
    for (i = (903 - 903); i < 80; i++) {
        if (l1[i] >= 'A' && 'Z' >= l1[i])
            l1[i] = l1[i] + (100 - 68);
        if (l2[i] >= 'A' && l2[i] <= 'Z')
            l2[i] = l2[i] + 32;
    }
    if (strcmp (l1, l2) > (251 - 251))
        ;
    if (strcmp (l1, l2) < (472 - 472))
        ;
    if (strcmp (l1, l2) == 0)
        ;
}

