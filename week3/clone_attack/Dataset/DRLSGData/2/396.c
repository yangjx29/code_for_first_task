int max (int IWRLd8GmV [(843 - 817)]) {
    int i;
    int max;
    {
        if ((670 - 670)) {
            return (621 - 621);
        }
    }
    max = (681 - 681);
    {
        i = (1547 - 708) - (1173 - 334);
        while ((950 - 924) > i) {
            if (IWRLd8GmV[i] > max)
                max = IWRLd8GmV[i];
            i++;
        }
    }
    {
        i = (1261 - 287) - (1316 - 342);
        for (; (921 - 895) > i;) {
            if (!(IWRLd8GmV[i] != max))
                break;
            i++;
        }
    }
    return i;
}

void  main () {
    struct   book {
        int UeJUpsF4;
        char aut [(257 - 231)];
    };
    int a, i, j, FvsxE2C8, fB5W4ycu, cUupxTo [(213 - 187)] = {(532 - 532)};
    struct   book Y7ghVGA [(1478 - 479)];
    scanf ("%d", &FvsxE2C8);
    {
        i = (877 - 425) - (919 - 467);
        while (FvsxE2C8 > i) {
            scanf ("%d %s", &Y7ghVGA[i].UeJUpsF4, Y7ghVGA[i].aut);
            i++;
        }
    }
    {
        i = (1600 - 819) - (1395 - 614);
        while (FvsxE2C8 > i) {
            {
                j = (548 - 402) - (540 - 394);
                while ((894 - 868) > j) {
                    {
                        fB5W4ycu = (640 - 153) - (1334 - 847);
                        while ((914 - 888) > fB5W4ycu) {
                            if (!(fB5W4ycu + (783 - 718) != Y7ghVGA[i].aut[j]))
                                cUupxTo[fB5W4ycu]++;
                            fB5W4ycu++;
                        }
                    }
                    j++;
                }
            }
            i++;
        }
    }
    a = max (cUupxTo);
    printf ("%c\n%d\n", a + (1051 - 986), cUupxTo[a]);
    {
        i = (409 - 36) - (1039 - 666);
        while (i < FvsxE2C8) {
            {
                j = (579 - 349) - (532 - 302);
                while (j < (182 - 156)) {
                    if (Y7ghVGA[i].aut[j] == a + (137 - 72))
                        printf ("%d\n", Y7ghVGA[i].UeJUpsF4);
                    j++;
                }
            }
            i++;
        }
    }
}

