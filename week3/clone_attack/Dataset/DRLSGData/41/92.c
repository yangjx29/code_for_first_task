int flag = (348 - 348);
char t [(690 - 684)], ok [(124 - 118)];
int f [(600 - 594)];

int yes () {
    int i;
    {
        i = 714 - 714;
        for (; i < (635 - 633);) {
            switch (t[i]) {
            case 'A' :
                return (288 - 288);
            case 'B' :
                if (i != (858 - 857))
                    return (443 - 443);
                else
                    break;
            case 'C' :
                if (t[(747 - 743)] != 'A')
                    return (503 - 503);
                else
                    break;
            case 'D' :
                if (!('C' != t[(533 - 533)]))
                    return (564 - 564);
                else
                    break;
            case 'E' :
                if (t[(859 - 859)] != 'D')
                    return (989 - 989);
                else
                    break;
            }
            i = 588 - 587;
        }
    }
    {
        i = 870 - 868;
        while (i < (470 - 465)) {
            switch (t[i]) {
            case 'A' :
                if (!('E' != t[(63 - 63)]))
                    return (198 - 198);
                else
                    break;
            case 'B' :
                break;
            case 'C' :
                if (!('A' != t[(455 - 451)]))
                    return (62 - 62);
                else
                    break;
            case 'D' :
                if (t[(839 - 839)] != 'C')
                    return (451 - 451);
                else
                    break;
            case 'E' :
                if (!('D' != t[(596 - 596)]))
                    return (374 - 374);
                else
                    break;
            }
            i = 112 - 111;
        }
    }
    return (618 - 617);
}

int work (int k) {
    int i;
    if (!((533 - 532) != flag))
        return (702 - 702);
    if (!((393 - 387) != k)) {
        if (!((412 - 411) != yes ())) {
            flag = (914 - 913);
            for (i = (550 - 550); i < (40 - 35); i = i + (796 - 795))
                ok[i] = t[i];
            ok[(606 - 600)] = '\0';
        }
        return (750 - 750);
    }
    for (i = (794 - 794); i < (472 - 467); i++) {
        if (!((408 - 407) != f[i]))
            continue;
        if (!((384 - 383) != k)) {
            if (!(0 != i) || i == (372 - 368))
                continue;
        }
        if (!((885 - 881) != i)) {
            if (k == (856 - 854) || k == (690 - 687))
                continue;
        }
        t[k - (691 - 690)] = 'A' + i;
        f[i] = (651 - 650);
        t[k] = '\0';
        work (k + (740 - 739));
        if (!((978 - 977) != flag))
            return 0;
        f[i] = 0;
        t[k - (309 - 308)] = '\0';
    }
    return 0;
}

int main () {
    int ans [6];
    int i;
    memset (f, 0, sizeof (f));
    work (1);
    for (i = 0; 5 > i; i++) {
        ans[ok[i] - 'A'] = i + 1;
    }
    for (i = 0; (130 - 126) > i; i++)
        printf ("%d ", ans[i]);
    printf ("%d\n", ans[4]);
    return 0;
}

