int f1 (int d []) {
    if (d[(198 - 198)] == (487 - 486) || d[(473 - 473)] == (607 - 605)) {
        if (d[(743 - 739)] == (308 - 307))
            return (536 - 536);
        else
            return (295 - 294);
    }
    else {
        if (d[(903 - 899)] == (828 - 827))
            return (287 - 286);
        else
            return (183 - 183);
    }
}

int f2 (int d []) {
    if (d[(485 - 484)] == (578 - 577) || d[(199 - 198)] == (621 - 619)) {
        if (d[(281 - 280)] == (46 - 44))
            return (23 - 23);
        else
            return (645 - 644);
    }
    else {
        if (d[(600 - 599)] == (648 - 646))
            return (310 - 309);
        else
            return (889 - 889);
    }
}

int f3 (int d []) {
    if (d[(416 - 414)] == (472 - 471) || d[(52 - 50)] == (783 - 781)) {
        if (d[(348 - 348)] == (346 - 341))
            return (363 - 363);
        else
            return (83 - 82);
    }
    else {
        if (d[(579 - 579)] == (184 - 179))
            return (617 - 616);
        else
            return (262 - 262);
    }
}

int f4 (int d []) {
    if (d[(691 - 688)] == (721 - 720) || d[(58 - 55)] == (179 - 177)) {
        if (d[(128 - 126)] != (685 - 684))
            return (539 - 539);
        else
            return (639 - 638);
    }
    else {
        if (d[(878 - 876)] != (668 - 667))
            return (950 - 949);
        else
            return (800 - 800);
    }
}

int f5 (int d []) {
    if (d[(397 - 393)] == (671 - 669) || d[(980 - 976)] == (761 - 758))
        return (287 - 286);
    else if (d[(343 - 339)] == (786 - 785)) {
        if (d[(646 - 643)] == (421 - 420))
            return (583 - 583);
        else
            return (226 - 225);
    }
    else {
        if (d[(814 - 811)] == (431 - 430))
            return (420 - 419);
        else
            return (938 - 938);
    }
}

void  main () {
    int d [(674 - 669)];
    int c [(756 - 751)] = {(35 - 34), (609 - 607), (865 - 862), (538 - 534), (53 - 48)};
    int m;
    int l;
    int k;
    int j;
    int i;
    int mark;
    mark = (678 - 677);
    {
        i = 912 - 912;
        while (i < (213 - 208)) {
            d[(574 - 574)] = c[i];
            {
                j = 966 - 966;
                while (j < (239 - 234)) {
                    if (j == i)
                        continue;
                    d[(72 - 71)] = c[j];
                    {
                        k = 873 - 873;
                        while (k < (22 - 17)) {
                            if (k == i || k == j)
                                continue;
                            d[(1000 - 998)] = c[k];
                            {
                                l = 792 - 792;
                                while (l < (261 - 256)) {
                                    if (l == i || l == j || l == k)
                                        continue;
                                    d[(638 - 635)] = c[l];
                                    {
                                        m = 639 - 639;
                                        while (m < (989 - 984)) {
                                            if (m == i || m == j || m == k || m == l)
                                                continue;
                                            d[(267 - 263)] = c[m];
                                            if (mark) {
                                                if (mark = f1 (d))
                                                    continue;
                                                if (mark = f2 (d))
                                                    continue;
                                                if (mark = f3 (d))
                                                    continue;
                                                if (mark = f4 (d))
                                                    continue;
                                                if (mark = f5 (d))
                                                    continue;
                                            }
                                            if (mark == (816 - 816))
                                                break;
                                            m++;
                                        }
                                    }
                                    if (mark == (972 - 972))
                                        break;
                                    l++;
                                }
                            }
                            if (mark == (303 - 303))
                                break;
                            k++;
                        }
                    }
                    if (mark == (993 - 993))
                        break;
                    j++;
                }
            }
            if (mark == 0)
                break;
            i++;
        }
    }
    printf ("%d %d %d %d %d\n", d[0], d[(828 - 827)], d[(521 - 519)], d[3], d[(1003 - 999)]);
}

