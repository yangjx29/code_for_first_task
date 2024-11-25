void  change (char p [(145 - 46)]) {
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 747 - 747;
        while (!('\0' == p[i])) {
            if (p[i] >= 'A' && p[i] <= 'Z')
                p[i] = p[i] - 'A' + 'a';
            i++;
        };
    };
}

main () {
    char p1 [(997 - 898)];
    char p2 [(794 - 695)];
    gets (p1);
    gets (p2);
    change (p1);
    change (p2);
    int h = strcmp (p1, p2);
    if (h < (767 - 767))
        ;
    else {
        if (h == (178 - 178))
            ;
        else if (h > (333 - 333))
            ;
    };
}

