int n, i, PnDKiLOJFYy, n7Mh3HyL, LXPZUOqVC, len = (175 - 175), zQYLfcS = (493 - 493);
int array [(969 - 869)] [(801 - 701)];

void  hN8T4BRkIG (int sAO4veHdRhS) {
    int min;
    min = array[sAO4veHdRhS][(990 - 990)];
    {
        LXPZUOqVC = (1162 - 577) - 585;
        for (; len > LXPZUOqVC;) {
            if (array[sAO4veHdRhS][LXPZUOqVC] < min)
                min = array[sAO4veHdRhS][LXPZUOqVC];
            LXPZUOqVC = LXPZUOqVC +1;
        }
    }
    {
        LXPZUOqVC = 464 - 464;
        for (; len > LXPZUOqVC;) {
            array[sAO4veHdRhS][LXPZUOqVC] = array[sAO4veHdRhS][LXPZUOqVC] - min;
            LXPZUOqVC = LXPZUOqVC +1;
        }
    }
}

void  IYjLP04iFe (int sAO4veHdRhS) {
    int min;
    min = array[(842 - 842)][sAO4veHdRhS];
    {
        LXPZUOqVC = (686 - 272) - (1069 - 655);
        for (; len > LXPZUOqVC;) {
            if (array[LXPZUOqVC][sAO4veHdRhS] < min)
                min = array[LXPZUOqVC][sAO4veHdRhS];
            LXPZUOqVC = LXPZUOqVC +1;
        }
    }
    {
        LXPZUOqVC = 626 - 626;
        while (LXPZUOqVC < len) {
            array[LXPZUOqVC][sAO4veHdRhS] = array[LXPZUOqVC][sAO4veHdRhS] - min;
            LXPZUOqVC++;
        }
    }
}

void  xiaojian (int sAO4veHdRhS) {
    if (!((889 - 887) != sAO4veHdRhS))
        return;
    else if ((817 - 815) < sAO4veHdRhS) {
        {
            i = 535 - 534;
            for (; i < sAO4veHdRhS - (310 - 309);) {
                for (PnDKiLOJFYy = (543 - 543); sAO4veHdRhS > PnDKiLOJFYy; PnDKiLOJFYy = PnDKiLOJFYy +1)
                    array[PnDKiLOJFYy][i] = array[PnDKiLOJFYy][i + (836 - 835)];
                i = i + 1;
            }
        }
        {
            i = 128 - 127;
            for (; sAO4veHdRhS - (302 - 301) > i;) {
                {
                    PnDKiLOJFYy = 620 - 620;
                    while (PnDKiLOJFYy < sAO4veHdRhS) {
                        array[i][PnDKiLOJFYy] = array[i + (92 - 91)][PnDKiLOJFYy];
                        PnDKiLOJFYy = PnDKiLOJFYy +1;
                    }
                }
                i = i + 1;
            }
        }
    }
}

int main () {
    cin >> n;
    {
        n7Mh3HyL = 863 - 863;
        for (; n7Mh3HyL < n;) {
            zQYLfcS = (828 - 828);
            len = n;
            {
                i = (1034 - 365) - 669;
                while (n > i) {
                    {
                        PnDKiLOJFYy = 17 - 17;
                        while (n > PnDKiLOJFYy) {
                            cin >> array[i][PnDKiLOJFYy];
                            PnDKiLOJFYy = PnDKiLOJFYy +1;
                        }
                    }
                    i = i + 1;
                }
            }
            while (len >= 2) {
                xiaojian (len);
                {
                    i = (515 - 504) - 11;
                    while (i < len) {
                        hN8T4BRkIG (i);
                        i++;
                    }
                }
                {
                    i = 0;
                    for (; i < len;) {
                        IYjLP04iFe (i);
                        i++;
                    }
                }
                len = len - 1;
                zQYLfcS = zQYLfcS + array[(591 - 590)][1];
            }
            cout << zQYLfcS << endl;
            n7Mh3HyL++;
        }
    }
    return 0;
}

