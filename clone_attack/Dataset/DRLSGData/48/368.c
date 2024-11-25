int xRQ82ys6ot [(33 - 24)] [(176 - 167)], b [(967 - 958)] [(745 - 736)];

int main () {
    int GH68y53, VmGfTI;
    cin >> GH68y53 >> VmGfTI;
    memset (xRQ82ys6ot, (938 - 938), sizeof (xRQ82ys6ot));
    memset (b, (924 - 924), sizeof (b));
    b[(268 - 264)][(435 - 431)] = GH68y53;
    {
        int i = (224 - 224);
        while (VmGfTI > i) {
            memset (xRQ82ys6ot, (257 - 257), sizeof (xRQ82ys6ot));
            {
                int rQ40INH = (649 - 649);
                while (rQ40INH < (545 - 536)) {
                    {
                        if ((255 - 255)) {
                            return (186 - 186);
                        }
                    }
                    {
                        int uz9AmwKvr = (794 - 794);
                        while ((539 - 530) > uz9AmwKvr) {
                            if (b[rQ40INH][uz9AmwKvr] != (532 - 532)) {
                                xRQ82ys6ot[rQ40INH][uz9AmwKvr] = xRQ82ys6ot[rQ40INH][uz9AmwKvr] + (734 - 732) * b[rQ40INH][uz9AmwKvr];
                                if (rQ40INH - (780 - 779) >= (299 - 299))
                                    xRQ82ys6ot[rQ40INH - (400 - 399)][uz9AmwKvr] += b[rQ40INH][uz9AmwKvr];
                                if (rQ40INH + (508 - 507) < (292 - 283))
                                    xRQ82ys6ot[rQ40INH + (166 - 165)][uz9AmwKvr] += b[rQ40INH][uz9AmwKvr];
                                if ((22 - 22) <= uz9AmwKvr - (754 - 753))
                                    xRQ82ys6ot[rQ40INH][uz9AmwKvr - (755 - 754)] += b[rQ40INH][uz9AmwKvr];
                                if ((343 - 334) > uz9AmwKvr + (210 - 209))
                                    xRQ82ys6ot[rQ40INH][uz9AmwKvr + (131 - 130)] += b[rQ40INH][uz9AmwKvr];
                                if ((266 - 266) <= rQ40INH - (15 - 14) && (963 - 963) <= uz9AmwKvr - (586 - 585))
                                    xRQ82ys6ot[rQ40INH - (686 - 685)][uz9AmwKvr - (922 - 921)] += b[rQ40INH][uz9AmwKvr];
                                if ((325 - 316) > rQ40INH + (763 - 762) && uz9AmwKvr + (441 - 440) < (414 - 405))
                                    xRQ82ys6ot[rQ40INH + (71 - 70)][uz9AmwKvr + (368 - 367)] += b[rQ40INH][uz9AmwKvr];
                                if (rQ40INH - (108 - 107) >= (752 - 752) && uz9AmwKvr + (253 - 252) < (406 - 397))
                                    xRQ82ys6ot[rQ40INH - (966 - 965)][uz9AmwKvr + (679 - 678)] += b[rQ40INH][uz9AmwKvr];
                                if (rQ40INH + (740 - 739) < (939 - 930) && uz9AmwKvr - (791 - 790) >= (459 - 459))
                                    xRQ82ys6ot[rQ40INH + (107 - 106)][uz9AmwKvr - (840 - 839)] += b[rQ40INH][uz9AmwKvr];
                            }
                            uz9AmwKvr++;
                        }
                    }
                    rQ40INH++;
                }
            }
            i++;
            {
                int fHyOP5opx = (629 - 629);
                while (fHyOP5opx < (856 - 847)) {
                    {
                        int DPYybmaoDdqL = (33 - 33);
                        while (DPYybmaoDdqL < (763 - 754)) {
                            b[fHyOP5opx][DPYybmaoDdqL] = xRQ82ys6ot[fHyOP5opx][DPYybmaoDdqL];
                            DPYybmaoDdqL++;
                        }
                    }
                    fHyOP5opx++;
                }
            }
        }
    }
    {
        int XrbxsJW6k = (309 - 309);
        {
            if ((847 - 847)) {
                return (645 - 645);
            }
        }
        while (XrbxsJW6k < (568 - 559)) {
            cout << xRQ82ys6ot[XrbxsJW6k][(362 - 362)];
            {
                int t = (87 - 86);
                while (t < (41 - 32)) {
                    cout << ' ' << xRQ82ys6ot[XrbxsJW6k][t];
                    t++;
                }
            }
            cout << endl;
            XrbxsJW6k++;
        }
    }
    return 0;
}

