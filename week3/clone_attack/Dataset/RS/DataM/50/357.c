main () {
    int c;
    int w;
    int i;
    int j;
    int k;
    c = (286 - 286);
    scanf ("%d", &w);
    c = 7 + w;
    if (!(0 != c % 7))
        ;
    {
        i = 1;
        while (12 > i) {
            if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || !(8 != i) || i == 10)
                c = c + 31;
            if (i == 4 || i == 6 || i == 9 || i == 11)
                c = c + 30;
            if (i == 28)
                c = c + 28;
            if (c % 7 == 0)
                printf ("%d\n", i + 1);
            i++;
        };
    }
    return 0;
}

