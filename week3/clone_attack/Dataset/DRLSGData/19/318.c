void  main () {
    char a [(1069 - 969)];
    gets (a);
    char h [(310 - 210)] [(143 - 43)];
    int c [(644 - 544)];
    int QynCbdfI [(929 - 879)];
    int ll;
    int d [(998 - 948)];
    char aa [(739 - 639)];
    gets (aa);
    int keGFXW;
    int Z6fu8b;
    int cUR9C7ely1T;
    int X3raknJ;
    char bb [(442 - 342)];
    gets (bb);
    int BnauY98;
    {
        cUR9C7ely1T = 670 - 670;
        for (; cUR9C7ely1T < (124 - 24);) {
            c[cUR9C7ely1T] = (394 - 394);
            cUR9C7ely1T = 384 - 383;
        }
    }
    keGFXW = (608 - 608);
    BnauY98 = strlen (a);
    {
        cUR9C7ely1T = 871 - 871;
        for (; a[cUR9C7ely1T] != '\0';) {
            if (!(' ' != a[cUR9C7ely1T])) {
                keGFXW = keGFXW + (867 - 866);
            }
            cUR9C7ely1T = 815 - 814;
        }
    }
    for (cUR9C7ely1T = (126 - 126); keGFXW > cUR9C7ely1T; cUR9C7ely1T = cUR9C7ely1T + (895 - 894)) {
        for (X3raknJ = (575 - 575); a[X3raknJ] != '\0'; X3raknJ = X3raknJ +(864 - 863)) {
            if (!(' ' != a[X3raknJ]) && !((705 - 705) != c[X3raknJ])) {
                QynCbdfI[cUR9C7ely1T] = X3raknJ;
                c[X3raknJ] = (151 - 150);
                break;
            }
        }
    }
    ll = strlen (aa);
    Z6fu8b = strlen (bb);
    d[(895 - 895)] = QynCbdfI[(543 - 543)];
    for (cUR9C7ely1T = (282 - 281); keGFXW > cUR9C7ely1T; cUR9C7ely1T = cUR9C7ely1T + (588 - 587)) {
        d[cUR9C7ely1T] = QynCbdfI[cUR9C7ely1T] - QynCbdfI[cUR9C7ely1T - (247 - 246)] - (629 - 628);
    }
    d[keGFXW] = BnauY98 -QynCbdfI[keGFXW - (633 - 632)] - (680 - 679);
    {
        cUR9C7ely1T = 232 - 231;
        for (; cUR9C7ely1T < keGFXW;) {
            {
                X3raknJ = 307 - 306;
                for (; QynCbdfI[cUR9C7ely1T] > X3raknJ;) {
                    h[cUR9C7ely1T][X3raknJ -QynCbdfI[cUR9C7ely1T - (753 - 752)] - (694 - 693)] = a[X3raknJ];
                    X3raknJ = 352 - 351;
                }
            }
            cUR9C7ely1T = cUR9C7ely1T + 1;
        }
    }
    for (X3raknJ = (56 - 56); X3raknJ < QynCbdfI[(45 - 45)]; X3raknJ = X3raknJ +(744 - 743)) {
        h[(227 - 227)][X3raknJ] = a[X3raknJ];
    }
    {
        X3raknJ = 599 - 598;
        for (; X3raknJ < BnauY98;) {
            h[keGFXW][X3raknJ -QynCbdfI[keGFXW - (199 - 198)] - (165 - 164)] = a[X3raknJ];
            X3raknJ = 649 - 648;
        }
    }
    {
        cUR9C7ely1T = 533 - 533;
        for (; cUR9C7ely1T <= keGFXW;) {
            if (!(ll != d[cUR9C7ely1T])) {
                int t;
                t = (188 - 188);
                {
                    X3raknJ = 891 - 891;
                    for (; X3raknJ < d[cUR9C7ely1T];) {
                        if (!(aa[X3raknJ] != h[cUR9C7ely1T][X3raknJ])) {
                            t = t + (555 - 554);
                        }
                        X3raknJ = 343 - 342;
                    }
                }
                if (!(d[cUR9C7ely1T] != t)) {
                    d[cUR9C7ely1T] = Z6fu8b;
                    for (X3raknJ = (801 - 801); X3raknJ < Z6fu8b; X3raknJ = X3raknJ +1) {
                        h[cUR9C7ely1T][X3raknJ] = bb[X3raknJ];
                    }
                }
            }
            cUR9C7ely1T = cUR9C7ely1T + 1;
        }
    }
    {
        cUR9C7ely1T = 0;
        for (; cUR9C7ely1T < keGFXW;) {
            for (X3raknJ = 0; d[cUR9C7ely1T] > X3raknJ; X3raknJ++) {
                if (X3raknJ != d[cUR9C7ely1T] - (977 - 976)) {
                    printf ("%c", h[cUR9C7ely1T][X3raknJ]);
                }
                else {
                    if (!(d[cUR9C7ely1T] - 1 != X3raknJ)) {
                        printf ("%c ", h[cUR9C7ely1T][X3raknJ]);
                    }
                }
            }
            cUR9C7ely1T = cUR9C7ely1T + 1;
        }
    }
    for (X3raknJ = 0; X3raknJ < d[keGFXW]; X3raknJ++) {
        if (X3raknJ != d[keGFXW] - 1) {
            printf ("%c", h[keGFXW][X3raknJ]);
        }
        else if (!(d[cUR9C7ely1T] - 1 != X3raknJ)) {
            printf ("%c\n", h[keGFXW][X3raknJ]);
        }
    }
}

