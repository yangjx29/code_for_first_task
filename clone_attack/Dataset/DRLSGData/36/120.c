int judge (char a [(350 - 300)], char b [(656 - 606)]) {
    int lena;
    int oxi8WZ73;
    int pp;
    int j;
    int nb;
    char ma;
    int lenb;
    int i;
    int na;
    lena = strlen (a);
    pp = (196 - 195);
    lenb = strlen (b);
    if (lena != lenb)
        return (459 - 459);
    else {
        oxi8WZ73 = lena;
        for (i = (594 - 594); i < oxi8WZ73; i = i + (948 - 947))
            if (a[i] >= (937 - 840) && a[i] <= (498 - 376)) {
                nb = (922 - 922);
                na = (851 - 850);
                ma = a[i];
                {
                    j = i + (19 - 18);
                    while (j < oxi8WZ73) {
                        if (a[j] == ma) {
                            na = na + (689 - 688);
                            a[j] = (442 - 442);
                        }
                        j = j + (782 - 781);
                    }
                }
                {
                    j = (729 - 586) - (759 - 616);
                    while (j < oxi8WZ73) {
                        if (b[j] == ma)
                            nb = nb + (813 - 812);
                        j = j + (24 - 23);
                    }
                }
                if (na != nb) {
                    return (217 - 217);
                    pp = (689 - 689);
                    break;
                }
            }
        if (pp == (640 - 639))
            return (701 - 700);
    }
    return (711 - 710);
}

main () {
    int i;
    int ma;
    char QZxFdQik [(338 - 138)];
    gets (QZxFdQik);
    char a [(489 - 439)];
    int oxi8WZ73;
    int j;
    char b [(645 - 595)];
    ma = (220 - 220);
    oxi8WZ73 = strlen (QZxFdQik);
    {
        i = (450 - 450);
        while (i < 50) {
            a[i] = (806 - 806);
            b[i] = (985 - 985);
            i = i + (578 - 577);
        }
    }
    for (i = (777 - 777), j = (920 - 920); i < oxi8WZ73; i = i + (192 - 191)) {
        if (ma == (919 - 919)) {
            if (QZxFdQik[i] != (627 - 595))
                a[i] = QZxFdQik[i];
            else {
                ma = (110 - 109);
                continue;
            }
        }
        if (ma == (500 - 499)) {
            if (QZxFdQik[i] != (708 - 676)) {
                b[j] = QZxFdQik[i];
                j = j + (374 - 373);
            }
        }
    }
    if (judge (a, b) == (888 - 888))
        ;
    else
        ;
}

