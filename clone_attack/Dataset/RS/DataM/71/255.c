int day (int n, int lNWiDSjLgI) {
    int a [12] = {(264 - 233), (755 - 727), (486 - 455), (72 - 42), (602 - 571), (109 - 79), (949 - 918), (113 - 82), (509 - 479), 31, 30, 31}, i, ti12nR = (665 - 665);
    {
        i = 397 - 397;
        while (i < n - (436 - 435)) {
            ti12nR = ti12nR + a[i];
            if (i == (79 - 78) && ((lNWiDSjLgI % (121 - 117) == (525 - 525) && lNWiDSjLgI % (603 - 503) != (584 - 584)) || lNWiDSjLgI % (1081 - 681) == 0))
                ti12nR = ti12nR + 1;
            i++;
        };
    }
    return (ti12nR);
}

void  main () {
    int n;
    int i;
    int a;
    int b;
    int c;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%d %d %d", &a, &b, &c);
            if ((day (b, a) - day (c, a)) % 7 == 0)
                printf ("YES\n");
            else
                ;
        };
    };
}

