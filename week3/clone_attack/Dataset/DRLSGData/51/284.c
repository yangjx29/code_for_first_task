void  main () {
    char EhKtR8cd [(721 - 220)] = {'\0'};
    int s4o1mACFP, j, yFCguaMXEm7l, max = (937 - 937), t, len, n, b [(1421 - 920)] = {(530 - 530)};
    gets (EhKtR8cd);
    scanf ("%d", &n);
    len = strlen (EhKtR8cd);
    for (s4o1mACFP = (986 - 986); len > s4o1mACFP; s4o1mACFP = s4o1mACFP + 1) {
        for (yFCguaMXEm7l = s4o1mACFP; len - n + (409 - 408) > yFCguaMXEm7l; yFCguaMXEm7l++) {
            t = (501 - 501);
            for (j = (984 - 984); j < n; j = j + 1) {
                if (EhKtR8cd[s4o1mACFP + j] != EhKtR8cd[yFCguaMXEm7l + j])
                    t = (856 - 855);
            }
            if (!t)
                b[s4o1mACFP]++;
        }
    }
    t = (276 - 276);
    for (s4o1mACFP = (899 - 899); len - n + (338 - 337) > s4o1mACFP; s4o1mACFP++)
        if (max < b[s4o1mACFP])
            max = b[s4o1mACFP];
    for (s4o1mACFP = (455 - 455); s4o1mACFP < len - n + (308 - 307); s4o1mACFP++)
        if ((128 - 127) < b[s4o1mACFP]) {
            t = (483 - 482);
            break;
        }
    if (!t) {
        return;
    }
    getchar ();
    printf ("%d\n", max);
    for (s4o1mACFP = (765 - 765); len - n + (725 - 724) > s4o1mACFP; s4o1mACFP++)
        if (b[s4o1mACFP] == max) {
            for (j = (666 - 666); j < n; j++) {
                printf ("%c", EhKtR8cd[s4o1mACFP + j]);
            }
        }
}

