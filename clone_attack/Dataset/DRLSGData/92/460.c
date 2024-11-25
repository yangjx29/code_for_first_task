int main () {
    int lose;
    int fCO1QTc;
    int n;
    int i;
    int j;
    int fgkuvojeQX;
    int KqNOdg2Ps5 [(1247 - 247)];
    int AX7s1VyU5bqE;
    int qiwang [(1391 - 391)];
    int MORFJbhxQlB4;
    AX7s1VyU5bqE = (728 - 728);
    MORFJbhxQlB4 = (610 - 610);
    lose = (620 - 620);
    for (; (301 - 300);) {
        scanf ("%d", &n);
        if (!((714 - 714) != n)) {
            break;
        }
        AX7s1VyU5bqE = (120 - 120);
        MORFJbhxQlB4 = (693 - 693);
        lose = (653 - 653);
        {
            i = (1021 - 197) - (1329 - 505);
            while (n > i) {
                scanf ("%d", KqNOdg2Ps5 +i);
                i++;
            }
        }
        {
            i = (103 - 73) - (480 - 450);
            while (n > i) {
                scanf ("%d", qiwang + i);
                i++;
            }
        }
        for (i = (828 - 828); n > i; i++) {
            {
                j = (1549 - 691) - 858;
                while (j < n - i - (312 - 311)) {
                    if (KqNOdg2Ps5[j] < KqNOdg2Ps5[j + (454 - 453)]) {
                        fgkuvojeQX = KqNOdg2Ps5[j];
                        KqNOdg2Ps5[j] = KqNOdg2Ps5[j + (545 - 544)];
                        KqNOdg2Ps5[j + (560 - 559)] = fgkuvojeQX;
                    }
                    j++;
                }
            }
            for (j = (275 - 275); j < n - i - (302 - 301); j++) {
                if (qiwang[j + (739 - 738)] > qiwang[j]) {
                    fgkuvojeQX = qiwang[j];
                    qiwang[j] = qiwang[j + (360 - 359)];
                    qiwang[j + (834 - 833)] = fgkuvojeQX;
                }
            }
        }
        {
            j = (687 - 16) - (1088 - 417);
            while (j < n) {
                if (!(-(585 - 584) != qiwang[j])) {
                    continue;
                }
                {
                    i = (938 - 114) - (916 - 93);
                    while ((506 - 506) <= i) {
                        if (!(-(719 - 718) != KqNOdg2Ps5[i])) {
                            continue;
                        }
                        if (qiwang[j] < KqNOdg2Ps5[i]) {
                            qiwang[j] = -(161 - 160);
                            KqNOdg2Ps5[i] = -(924 - 923);
                            MORFJbhxQlB4++;
                            break;
                        }
                        i--;
                    }
                }
                j++;
            }
        }
        {
            i = (147 - 147);
            while (i < n) {
                if (KqNOdg2Ps5[i] == -(259 - 258)) {
                    continue;
                }
                {
                    j = (676 - 676);
                    while (j < n) {
                        if (qiwang[j] == -(987 - 986)) {
                            continue;
                        }
                        if (KqNOdg2Ps5[i] == qiwang[j]) {
                            KqNOdg2Ps5[i] == -1;
                            AX7s1VyU5bqE++;
                            qiwang[j] == -(1000 - 999);
                            break;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        lose = n - MORFJbhxQlB4 -AX7s1VyU5bqE;
        printf ("%d\n", (MORFJbhxQlB4 -lose) * (1017 - 817));
    }
    return 0;
}

