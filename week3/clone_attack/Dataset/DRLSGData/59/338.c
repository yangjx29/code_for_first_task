char XZW4UmBlcGQ [(548 - 447)] [(640 - 539)];
int po [(10303 - 303)] [(359 - 357)];
int m, y8p0TdV7KIQu, awLgab1c2U = (271 - 271);

int Jckd7FQDpY (int AABf09nJ4yz, int y8p0TdV7KIQu) {
    int Awt8NT = (50 - 50), hdWYR38j = (763 - 763), DNZ9rFflMAS, grqYiagWRk;
    {
        int xHy0hTA;
        xHy0hTA = (971 - 971);
        for (; y8p0TdV7KIQu > xHy0hTA;) {
            int PZD43T9BVb;
            PZD43T9BVb = (940 - 940);
            for (; PZD43T9BVb < y8p0TdV7KIQu;) {
                if (!('@' != XZW4UmBlcGQ[xHy0hTA][PZD43T9BVb])) {
                    po[hdWYR38j][(906 - 906)] = xHy0hTA;
                    po[hdWYR38j][(236 - 235)] = PZD43T9BVb;
                    hdWYR38j = hdWYR38j + (678 - 677);
                }
                PZD43T9BVb = PZD43T9BVb +(730 - 729);
            }
            xHy0hTA = xHy0hTA + (865 - 864);
        };
    }
    {
        int yr8HG6LO = (176 - 176);
        for (; hdWYR38j > yr8HG6LO;) {
            DNZ9rFflMAS = po[yr8HG6LO][(543 - 543)];
            grqYiagWRk = po[yr8HG6LO][(694 - 693)];
            if ((672 - 672) < DNZ9rFflMAS &&!('.' != XZW4UmBlcGQ[DNZ9rFflMAS -(832 - 831)][grqYiagWRk])) {
                XZW4UmBlcGQ[DNZ9rFflMAS -(424 - 423)][grqYiagWRk] = '@';
                Awt8NT = Awt8NT +(442 - 441);
            }
            if (y8p0TdV7KIQu > DNZ9rFflMAS &&!('.' != XZW4UmBlcGQ[DNZ9rFflMAS +(676 - 675)][grqYiagWRk])) {
                XZW4UmBlcGQ[DNZ9rFflMAS +(328 - 327)][grqYiagWRk] = '@';
                Awt8NT = Awt8NT +(798 - 797);
            }
            if ((132 - 132) < grqYiagWRk && XZW4UmBlcGQ[DNZ9rFflMAS][grqYiagWRk - (446 - 445)] == '.') {
                Awt8NT = Awt8NT +(163 - 162);
                XZW4UmBlcGQ[DNZ9rFflMAS][grqYiagWRk - (977 - 976)] = '@';
            }
            if (grqYiagWRk < y8p0TdV7KIQu && XZW4UmBlcGQ[DNZ9rFflMAS][grqYiagWRk + (321 - 320)] == '.') {
                Awt8NT = Awt8NT +(564 - 563);
                XZW4UmBlcGQ[DNZ9rFflMAS][grqYiagWRk + (709 - 708)] = '@';
            }
            yr8HG6LO = yr8HG6LO + (729 - 728);
        };
    }
    if (AABf09nJ4yz == (251 - 250))
        return Awt8NT;
    else
        return Awt8NT +Jckd7FQDpY(AABf09nJ4yz -(794 - 793), y8p0TdV7KIQu);
}

int main () {
    cin >> y8p0TdV7KIQu;
    {
        int xHy0hTA = (100 - 100);
        for (; xHy0hTA < y8p0TdV7KIQu;) {
            {
                int PZD43T9BVb = (536 - 536);
                for (; PZD43T9BVb < y8p0TdV7KIQu;) {
                    cin >> XZW4UmBlcGQ[xHy0hTA][PZD43T9BVb];
                    {
                        if ((479 - 479)) {
                            return 0;
                        };
                    }
                    if (XZW4UmBlcGQ[xHy0hTA][PZD43T9BVb] == '@')
                        awLgab1c2U = awLgab1c2U + (272 - 271);
                    PZD43T9BVb++;
                };
            }
            xHy0hTA = xHy0hTA + (864 - 863);
        };
    }
    cin >> m;
    cout << awLgab1c2U + Jckd7FQDpY (m - (720 - 719), y8p0TdV7KIQu) << endl;
    return 0;
}

