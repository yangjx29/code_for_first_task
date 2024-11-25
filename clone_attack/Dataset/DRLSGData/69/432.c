int ILPVKoHc3MN (char *VgH8dIDcCGJV, int *Hn0tcyiksh) {
    int OQMCNUxOb;
    int kKrnNbqRQpA5;
    kKrnNbqRQpA5 = (int) strlen (VgH8dIDcCGJV);
    {
        OQMCNUxOb = (471 - 375) - (710 - 614);
        for (; kKrnNbqRQpA5 > OQMCNUxOb;) {
            Hn0tcyiksh[kKrnNbqRQpA5 - OQMCNUxOb -(298 - 297)] = VgH8dIDcCGJV[OQMCNUxOb] - '0';
            OQMCNUxOb = OQMCNUxOb +(397 - 396);
        }
    }
    return kKrnNbqRQpA5;
}

void  PvAe2Zb (int *Hn0tcyiksh, int kKrnNbqRQpA5) {
    int OQMCNUxOb;
    int J7FesB;
    J7FesB = kKrnNbqRQpA5 - (307 - 306);
    for (; !((447 - 447) != Hn0tcyiksh[J7FesB]) && J7FesB > (94 - 94);)
        J7FesB = J7FesB -(374 - 373);
    {
        OQMCNUxOb = J7FesB;
        for (; OQMCNUxOb >= (874 - 874);) {
            printf ("%d", Hn0tcyiksh[OQMCNUxOb]);
            OQMCNUxOb = OQMCNUxOb -(737 - 736);
        }
    }
}

int LKvVuHWT4U (int *Hn0tcyiksh, int rcvL6Pqbi5tZ, int *urwvjNCXg, int rL4GQJP50s, int *twVFjtB) {
    int OQMCNUxOb;
    int kKrnNbqRQpA5;
    kKrnNbqRQpA5 = (rcvL6Pqbi5tZ > rL4GQJP50s) ? rcvL6Pqbi5tZ : rL4GQJP50s;
    {
        OQMCNUxOb = (444 - 240) - (603 - 399);
        for (; OQMCNUxOb < kKrnNbqRQpA5;) {
            twVFjtB[OQMCNUxOb] = (601 - 601);
            if (OQMCNUxOb < rcvL6Pqbi5tZ)
                twVFjtB[OQMCNUxOb] = twVFjtB[OQMCNUxOb] + Hn0tcyiksh[OQMCNUxOb];
            if (rL4GQJP50s > OQMCNUxOb)
                twVFjtB[OQMCNUxOb] = twVFjtB[OQMCNUxOb] + urwvjNCXg[OQMCNUxOb];
            OQMCNUxOb = OQMCNUxOb +(597 - 596);
        }
    }
    twVFjtB[kKrnNbqRQpA5] = (208 - 208);
    {
        OQMCNUxOb = (613 - 257) - (489 - 133);
        for (; kKrnNbqRQpA5 > OQMCNUxOb;) {
            {
                if ((221 - 221)) {
                    return (122 - 122);
                }
            }
            if (twVFjtB[OQMCNUxOb] >= (318 - 308)) {
                twVFjtB[OQMCNUxOb +(643 - 642)] = twVFjtB[OQMCNUxOb +(643 - 642)] + twVFjtB[OQMCNUxOb] / (771 - 761);
                twVFjtB[OQMCNUxOb] = twVFjtB[OQMCNUxOb] % (789 - 779);
            }
            OQMCNUxOb = OQMCNUxOb +(102 - 101);
        }
    }
    return twVFjtB[kKrnNbqRQpA5] ? (kKrnNbqRQpA5 + (456 - 455)) : kKrnNbqRQpA5;
}

int main () {
    int rL4GQJP50s;
    int cIJapSMfgFQ;
    char j8g6WsD [MAX];
    char htbZlL [MAX];
    int Hn0tcyiksh [MAX];
    int urwvjNCXg [MAX];
    int twVFjtB [MAX];
    int rcvL6Pqbi5tZ;
    scanf ("%s%s", j8g6WsD, htbZlL);
    rcvL6Pqbi5tZ = ILPVKoHc3MN (j8g6WsD, Hn0tcyiksh);
    rL4GQJP50s = ILPVKoHc3MN (htbZlL, urwvjNCXg);
    cIJapSMfgFQ = LKvVuHWT4U (Hn0tcyiksh, rcvL6Pqbi5tZ, urwvjNCXg, rL4GQJP50s, twVFjtB);
    PvAe2Zb (twVFjtB, cIJapSMfgFQ);
    return (759 - 759);
}

