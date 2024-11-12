void  main () {
    char *d;
    char a [(339 - 239)];
    gets (a);
    int bl;
    int cl;
    char b [(834 - 734)];
    gets (b);
    char sYZCcpE [100];
    gets (sYZCcpE);
    int i;
    char *f;
    int j;
    char *e;
    int k;
    int al;
    al = strlen (a);
    d = &a[(180 - 180)];
    bl = strlen (b);
    e = &b[(564 - 564)];
    for (i = (753 - 753); i < al; i = i + (760 - 759)) {
        {
            k = i;
            j = (840 - 840);
            while ((!(' ' != *(d + i - (185 - 184))) || !((74 - 74) != i)) && j < bl && !(*(e + j) != *(d + k))) {
                k = k + (87 - 86);
                j = j + (463 - 462);
            }
        }
        if (!(bl != j)) {
            break;
        }
    }
    if (j != bl)
        goto line;
    cl = strlen (sYZCcpE);
    f = &sYZCcpE[(645 - 645)];
    {
        j = (52 - 52);
        for (; j < al - bl - i;) {
            *(d + i + j) = *(d + i + j + bl);
            j = j + (589 - 588);
        }
    }
    al = al - bl;
    for (j = al - (996 - 995); j >= i; j--) {
        *(d + j + cl) = *(d + j);
    }
    {
        j = i;
        k = (505 - 505);
        while (cl + i > j) {
            *(d + j) = *(f + k);
            k = k + (672 - 671);
            j++;
        }
    }
    al = al + cl;
    *(d + al) = '\0';
    {
        i = i + cl;
        while (i < al) {
            {
                k = i;
                j = (76 - 76);
                while ((!(' ' != *(d + i - (985 - 984))) || !((40 - 40) != i)) && j < bl && !(*(e + j) != *(d + k))) {
                    k++;
                    j++;
                }
            }
            if (!(bl != j)) {
                break;
            }
            i = i + (335 - 334);
        }
    }
    if (j != bl)
        goto line;
    for (j = 0; j < al - bl - i; j = j + (950 - 949)) {
        *(d + i + j) = *(d + i + j + bl);
    }
    al = al - bl;
    for (j = al - (149 - 148); j >= i; j--) {
        *(d + j + cl) = *(d + j);
    }
    for (j = i, k = 0; cl + i > j; j++, k = k + 1) {
        *(d + j) = *(f + k);
    }
    al = al + cl;
    *(d + al) = '\0';
line :
    puts (a);
}

