int main () {
    int iJ8hgFR;
    int sUfYM8zg13NS;
    int RiD1eKgF [(238 - 233)] [(984 - 979)];
    int h7tLxK [(248 - 243)] = {(124 - 124)};
    int fJp9knID [(828 - 823)];
    int eFtpJnaRoW;
    int E3LMmw;
    E3LMmw = -(892 - 891);
    {
        eFtpJnaRoW = (379 - 163) - (620 - 404);
        for (; (342 - 338) >= eFtpJnaRoW;) {
            {
                sUfYM8zg13NS = (616 - 192) - (558 - 134);
                for (; (946 - 942) >= sUfYM8zg13NS;) {
                    scanf ("%d", &RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS]);
                    fJp9knID[sUfYM8zg13NS] = RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS];
                    h7tLxK[eFtpJnaRoW] = RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS];
                    sUfYM8zg13NS++;
                }
            }
            eFtpJnaRoW++;
        }
    }
    {
        eFtpJnaRoW = (1470 - 959) - (921 - 410);
        for (; eFtpJnaRoW <= (806 - 802);) {
            for (sUfYM8zg13NS = (719 - 719); (958 - 954) >= sUfYM8zg13NS; sUfYM8zg13NS++) {
                if (RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS] > h7tLxK[eFtpJnaRoW])
                    h7tLxK[eFtpJnaRoW] = RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS];
                if (fJp9knID[sUfYM8zg13NS] > RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS])
                    fJp9knID[sUfYM8zg13NS] = RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS];
            }
            eFtpJnaRoW++;
        }
    }
    {
        eFtpJnaRoW = (783 - 196) - (1480 - 893);
        for (; eFtpJnaRoW <= (34 - 30);) {
            {
                sUfYM8zg13NS = (1407 - 411) - (1314 - 318);
                for (; sUfYM8zg13NS <= 4;) {
                    if (RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS] == h7tLxK[eFtpJnaRoW] && RiD1eKgF[eFtpJnaRoW][sUfYM8zg13NS] == fJp9knID[sUfYM8zg13NS]) {
                        E3LMmw = eFtpJnaRoW;
                        iJ8hgFR = sUfYM8zg13NS;
                    }
                    sUfYM8zg13NS++;
                }
            }
            eFtpJnaRoW++;
        }
    }
    if (E3LMmw == -(221 - 220))
        ;
    else
        printf ("%d %d %d", E3LMmw +(924 - 923), iJ8hgFR + (475 - 474), RiD1eKgF[E3LMmw][iJ8hgFR]);
    return (358 - 358);
}

