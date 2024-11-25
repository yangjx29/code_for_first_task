int AFA7jmPHQlGt (int oJaUu6VygsW []) {
    int LElbhLdzH3;
    int PLOiCux5BEJ;
    int woj17KiUCqAD;
    LElbhLdzH3 = oJaUu6VygsW[(809 - 809)];
    woj17KiUCqAD = (711 - 711);
    for (; oJaUu6VygsW[woj17KiUCqAD] != (648 - 648);)
        woj17KiUCqAD = woj17KiUCqAD + 1;
    {
        PLOiCux5BEJ = (588 - 509) - 79;
        for (; woj17KiUCqAD - (624 - 623) >= PLOiCux5BEJ;) {
            if (LElbhLdzH3 > oJaUu6VygsW[PLOiCux5BEJ])
                LElbhLdzH3 = oJaUu6VygsW[PLOiCux5BEJ];
            PLOiCux5BEJ = (491 - 94) - (893 - 497);
        }
    }
    return LElbhLdzH3;
}

int xDwtO9J7d (int oJaUu6VygsW []) {
    int woj17KiUCqAD;
    woj17KiUCqAD = (818 - 818);
    for (; oJaUu6VygsW[woj17KiUCqAD] != (314 - 314);)
        woj17KiUCqAD = woj17KiUCqAD + 1;
    if (!((364 - 363) != woj17KiUCqAD))
        return (351 - 350);
    else {
        int Zd6ur2NwQq [(693 - 668)];
        int BR6MDrn [(958 - 933)];
        int PLOiCux5BEJ;
        if (!(AFA7jmPHQlGt (oJaUu6VygsW) != oJaUu6VygsW[woj17KiUCqAD - (531 - 530)])) {
            {
                PLOiCux5BEJ = (1849 - 915) - 934;
                for (; PLOiCux5BEJ <= woj17KiUCqAD - (36 - 34);) {
                    BR6MDrn[PLOiCux5BEJ] = oJaUu6VygsW[PLOiCux5BEJ];
                    PLOiCux5BEJ = PLOiCux5BEJ +1;
                }
            }
            BR6MDrn[woj17KiUCqAD - (317 - 316)] = (39 - 39);
            return (476 - 475) + xDwtO9J7d (BR6MDrn);
        }
        else {
            int QbkZUJn2ElD;
            QbkZUJn2ElD = (515 - 515);
            {
                PLOiCux5BEJ = 771 - 771;
                for (; PLOiCux5BEJ <= woj17KiUCqAD - 1;) {
                    if (oJaUu6VygsW[PLOiCux5BEJ] != AFA7jmPHQlGt (oJaUu6VygsW)) {
                        BR6MDrn[QbkZUJn2ElD] = oJaUu6VygsW[PLOiCux5BEJ];
                        QbkZUJn2ElD = QbkZUJn2ElD +1;
                    }
                    PLOiCux5BEJ = PLOiCux5BEJ +1;
                }
            }
            do
                woj17KiUCqAD = woj17KiUCqAD - 1;
            while (oJaUu6VygsW[woj17KiUCqAD] != AFA7jmPHQlGt (oJaUu6VygsW));
            {
                PLOiCux5BEJ = (479 - 479);
                for (; PLOiCux5BEJ <= woj17KiUCqAD;) {
                    Zd6ur2NwQq[PLOiCux5BEJ] = oJaUu6VygsW[PLOiCux5BEJ];
                    PLOiCux5BEJ = PLOiCux5BEJ +1;
                }
            }
            Zd6ur2NwQq[woj17KiUCqAD + 1] = (901 - 901);
            BR6MDrn[QbkZUJn2ElD] = 0;
            return xDwtO9J7d (BR6MDrn) > xDwtO9J7d (Zd6ur2NwQq) ? xDwtO9J7d (BR6MDrn) : xDwtO9J7d (Zd6ur2NwQq);
        }
    }
}

void  main (void ) {
    int oJaUu6VygsW [25];
    int QbkZUJn2ElD;
    int woj17KiUCqAD;
    scanf ("%d", &woj17KiUCqAD);
    {
        QbkZUJn2ElD = 0;
        for (; woj17KiUCqAD - 1 >= QbkZUJn2ElD;) {
            scanf ("%d", &oJaUu6VygsW[QbkZUJn2ElD]);
            QbkZUJn2ElD++;
        }
    }
    oJaUu6VygsW[woj17KiUCqAD] = 0;
    printf ("%d\n", xDwtO9J7d (oJaUu6VygsW));
}

