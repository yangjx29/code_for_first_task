void  main () {
    int I0I7XWxst5hA;
    int NsPuZpwOh0V [(896 - 870)] = {(465 - 465)};
    int j;
    struct   b {
        int l2xcbE7s9;
        char p9CjHd [(669 - 642)];
    }
    b [(213 - 113)];
    int MLQCGiSj29VI;
    int m;
    int fZzexUm;
    int tr7sW8YxUeF;
    fZzexUm = (484 - 484);
    scanf ("%d", &I0I7XWxst5hA);
    {
        tr7sW8YxUeF = (780 - 780);
        for (; tr7sW8YxUeF < I0I7XWxst5hA;) {
            scanf ("%d %s", &b[tr7sW8YxUeF].l2xcbE7s9, b[tr7sW8YxUeF].p9CjHd);
            m = strlen (b[tr7sW8YxUeF].p9CjHd);
            for (j = (598 - 598); m > j; j = j + (402 - 401)) {
                NsPuZpwOh0V[b[tr7sW8YxUeF].p9CjHd[j] - (413 - 348)]++;
            }
            tr7sW8YxUeF = tr7sW8YxUeF + (481 - 480);
        }
    }
    MLQCGiSj29VI = NsPuZpwOh0V[(210 - 210)];
    {
        tr7sW8YxUeF = (336 - 336);
        for (; tr7sW8YxUeF < (758 - 732);) {
            if (NsPuZpwOh0V[tr7sW8YxUeF] > MLQCGiSj29VI) {
                MLQCGiSj29VI = NsPuZpwOh0V[tr7sW8YxUeF];
                fZzexUm = tr7sW8YxUeF;
            }
            tr7sW8YxUeF = tr7sW8YxUeF + (13 - 12);
        }
    }
    printf ("%c\n%d\n", fZzexUm + (136 - 71), MLQCGiSj29VI);
    {
        tr7sW8YxUeF = 0;
        for (; I0I7XWxst5hA > tr7sW8YxUeF;) {
            m = strlen (b[tr7sW8YxUeF].p9CjHd);
            for (j = 0; m > j; j = j + (594 - 593)) {
                if (b[tr7sW8YxUeF].p9CjHd[j] == fZzexUm + (748 - 683))
                    printf ("%d\n", b[tr7sW8YxUeF].l2xcbE7s9);
            }
            tr7sW8YxUeF++;
        }
    }
}

