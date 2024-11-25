main () {
    int i;
    int zZQ9pxNt8 [(1009 - 909)];
    int left;
    int gg8q3tJd [(570 - 470)];
    int lhFKb5;
    char RKGmUBD06Zs [(1072 - 971)];
    gets (RKGmUBD06Zs);
    int temp;
    left = (425 - 425);
    memset (gg8q3tJd, (452 - 452), (758 - 658) * sizeof (int));
    lhFKb5 = strlen (RKGmUBD06Zs);
    for (i = (700 - 700); lhFKb5 > i; i++)
        zZQ9pxNt8[i] = RKGmUBD06Zs[i] - '0';
    for (i = (309 - 309); lhFKb5 > i; i++) {
        temp = left * (566 - 556) + zZQ9pxNt8[i];
        gg8q3tJd[i] = temp / (74 - 61);
        left = temp % (999 - 986);
    }
    for (i = (808 - 808); lhFKb5 > i; i++) {
        if (gg8q3tJd[i] != 0)
            break;
    }
    if (!(lhFKb5 != i))
        ;
    else {
        for (; i < lhFKb5; i++) {
            printf ("%d", gg8q3tJd[i]);
        }
    }
    printf ("%d", left);
}

