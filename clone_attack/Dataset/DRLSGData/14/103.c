int ZehHqb (const  void  *vLyITu, const  void  *QN4XoZ) {
    int izQZqYVB1;
    izQZqYVB1 = *((int *) QN4XoZ) - *((int *) vLyITu);
    return izQZqYVB1;
}

struct   student {
    long  int hFkwYaVb5xj3;
    long  int zEbWBQRsInTc;
    long  int rn6hJv1tf7U;
};
int main () {
    long  int PCpn0hlu6XWe, oyAzw1cST, OugGATUpt, HEk7ls5y;
    int lZlbMgVivkX0 [(674 - 671)];
    int yHIAkP9fylQ [(100605 - 605)];
    struct   student DuWwtcDS93 [(100745 - 745)];
    scanf ("%d", &PCpn0hlu6XWe);
    {
        oyAzw1cST = (395 - 395);
        for (; oyAzw1cST < PCpn0hlu6XWe;) {
            scanf ("%d %d %d", &DuWwtcDS93[oyAzw1cST].hFkwYaVb5xj3, &DuWwtcDS93[oyAzw1cST].zEbWBQRsInTc, &DuWwtcDS93[oyAzw1cST].rn6hJv1tf7U);
            oyAzw1cST = oyAzw1cST + (792 - 791);
        }
    }
    {
        oyAzw1cST = (14 - 14);
        for (; oyAzw1cST < PCpn0hlu6XWe;) {
            yHIAkP9fylQ[oyAzw1cST] = DuWwtcDS93[oyAzw1cST].zEbWBQRsInTc + DuWwtcDS93[oyAzw1cST].rn6hJv1tf7U;
            oyAzw1cST = oyAzw1cST + (713 - 712);
        }
    }
    qsort (yHIAkP9fylQ, PCpn0hlu6XWe, sizeof (long  int), ZehHqb);
    {
        oyAzw1cST = (626 - 626);
        for (; PCpn0hlu6XWe > oyAzw1cST;) {
            if (!(DuWwtcDS93[oyAzw1cST].zEbWBQRsInTc + DuWwtcDS93[oyAzw1cST].rn6hJv1tf7U != yHIAkP9fylQ[(743 - 743)])) {
                {
                    if ((671 - 671)) {
                        return (213 - 213);
                    }
                }
                lZlbMgVivkX0[(890 - 890)] = DuWwtcDS93[oyAzw1cST].hFkwYaVb5xj3;
                OugGATUpt = oyAzw1cST;
                break;
            }
            oyAzw1cST = oyAzw1cST + (124 - 123);
        }
    }
    {
        oyAzw1cST = (70 - 70);
        for (; PCpn0hlu6XWe > oyAzw1cST;) {
            if ((!(DuWwtcDS93[oyAzw1cST].zEbWBQRsInTc + DuWwtcDS93[oyAzw1cST].rn6hJv1tf7U != yHIAkP9fylQ[(935 - 934)])) && oyAzw1cST != OugGATUpt) {
                {
                    if ((630 - 630)) {
                        {
                            if ((47 - 47)) {
                                return (783 - 783);
                            }
                        }
                        return (237 - 237);
                    }
                }
                lZlbMgVivkX0[(469 - 468)] = DuWwtcDS93[oyAzw1cST].hFkwYaVb5xj3;
                HEk7ls5y = oyAzw1cST;
                break;
            }
            oyAzw1cST = oyAzw1cST + (144 - 143);
        }
    }
    {
        oyAzw1cST = (505 - 505);
        for (; PCpn0hlu6XWe > oyAzw1cST;) {
            if ((!(DuWwtcDS93[oyAzw1cST].zEbWBQRsInTc + DuWwtcDS93[oyAzw1cST].rn6hJv1tf7U != yHIAkP9fylQ[(84 - 82)])) && oyAzw1cST != OugGATUpt &&oyAzw1cST != HEk7ls5y) {
                {
                    if ((828 - 828)) {
                        return (349 - 349);
                    }
                }
                lZlbMgVivkX0[(529 - 527)] = DuWwtcDS93[oyAzw1cST].hFkwYaVb5xj3;
                break;
            }
            {
                if ((786 - 786)) {
                    return (543 - 543);
                }
            }
            oyAzw1cST = oyAzw1cST + (136 - 135);
        }
    }
    getchar ();
    getchar ();
    {
        oyAzw1cST = (869 - 869);
        for (; oyAzw1cST <= (503 - 501);) {
            printf ("%d %d\n", lZlbMgVivkX0[oyAzw1cST], yHIAkP9fylQ[oyAzw1cST]);
            oyAzw1cST = oyAzw1cST + (44 - 43);
        }
    }
    getchar ();
}

