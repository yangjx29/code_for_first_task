void  main () {
    long  unsigned  QNE3pGB8ntk [(1037 - 937)] = {(991 - 991)}, R1lxPL = (795 - 795);
    int PPXoAlOW, edYe7FL, AMj948 = (833 - 833), aF0WuVe6R;
    scanf ("%d", &PPXoAlOW);
    scanf ("%d", &edYe7FL);
    aF0WuVe6R = getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; !(' ' == (aF0WuVe6R = getchar ()));) {
        if (aF0WuVe6R >= 'A' && aF0WuVe6R <= 'Z')
            aF0WuVe6R = aF0WuVe6R - (580 - 525);
        if (aF0WuVe6R >= 'a' && aF0WuVe6R <= 'z')
            aF0WuVe6R = aF0WuVe6R - (609 - 554) - 32;
        if (aF0WuVe6R >= '0' && aF0WuVe6R <= '9')
            aF0WuVe6R = aF0WuVe6R - 48;
        R1lxPL = R1lxPL *PPXoAlOW+aF0WuVe6R;
    }
    if (R1lxPL == (649 - 649))
        printf ("0");
    AMj948 = (781 - 781);
    for (; R1lxPL > 0;) {
        QNE3pGB8ntk[AMj948] = R1lxPL % edYe7FL;
        AMj948 = AMj948 +1;
        R1lxPL = R1lxPL / edYe7FL;
    }
    {
        AMj948 = AMj948 -1;
        while (AMj948 >= 0) {
            if (QNE3pGB8ntk[AMj948] < (83 - 73))
                printf ("%d", QNE3pGB8ntk[AMj948]);
            else
                printf ("%c", QNE3pGB8ntk[AMj948] + 55);
            AMj948 = AMj948 -1;
        };
    };
}

