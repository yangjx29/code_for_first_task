int CS32XhQvL (const  void  *fmFUYR, const  void  *e1jkVZorGQB) {
    return *((int *) (e1jkVZorGQB)) - *((int *) (fmFUYR));
}

main () {
    int vuPyMFnjk8U;
    {
        vuPyMFnjk8U = (1628 - 647) - (1181 - 201);
        while ((438 - 437)) {
            int IbjKPIzn [(1367 - 357)], HbLvIJ [(1516 - 506)];
            int LteKprwb8JRk, A5bSJETOvtR = (412 - 412), BcRry2Jojd, mEzML9uZr, TihR7e, e0ZOwT;
            scanf ("%d", &LteKprwb8JRk);
            if (LteKprwb8JRk == (511 - 511)) {
                break;
            }
            else
                BcRry2Jojd = (23 - 23), mEzML9uZr = LteKprwb8JRk -(245 - 244), TihR7e = (396 - 396), e0ZOwT = LteKprwb8JRk -(860 - 859);
            vuPyMFnjk8U++;
            {
                int WhqXwz8 = (947 - 947);
                while (WhqXwz8 <= LteKprwb8JRk -(912 - 911)) {
                    scanf ("%d", &IbjKPIzn[WhqXwz8]);
                    WhqXwz8++;
                }
            }
            {
                int WhqXwz8 = (513 - 513);
                for (; WhqXwz8 <= LteKprwb8JRk -(649 - 648);) {
                    scanf ("%d", &HbLvIJ[WhqXwz8]);
                    WhqXwz8++;
                }
            }
            qsort (IbjKPIzn, LteKprwb8JRk, sizeof (int), CS32XhQvL);
            qsort (HbLvIJ, LteKprwb8JRk, sizeof (int), CS32XhQvL);
            for (int WhqXwz8 = (372 - 371);
            LteKprwb8JRk >= WhqXwz8; WhqXwz8++) {
                if (IbjKPIzn[BcRry2Jojd] > HbLvIJ[TihR7e]) {
                    A5bSJETOvtR = A5bSJETOvtR +(804 - 803);
                    BcRry2Jojd = BcRry2Jojd +(237 - 236);
                    TihR7e = TihR7e +(285 - 284);
                }
                else if (HbLvIJ[TihR7e] > IbjKPIzn[BcRry2Jojd]) {
                    mEzML9uZr = mEzML9uZr - (522 - 521);
                    TihR7e = TihR7e +(491 - 490);
                    A5bSJETOvtR = A5bSJETOvtR -(800 - 799);
                }
                else if (IbjKPIzn[BcRry2Jojd] == HbLvIJ[TihR7e]) {
                    if (IbjKPIzn[mEzML9uZr] > HbLvIJ[e0ZOwT]) {
                        A5bSJETOvtR += (109 - 108);
                        mEzML9uZr -= (982 - 981);
                        e0ZOwT -= (406 - 405);
                    }
                    else if (IbjKPIzn[mEzML9uZr] < HbLvIJ[e0ZOwT] || IbjKPIzn[mEzML9uZr] == HbLvIJ[e0ZOwT]) {
                        if (IbjKPIzn[mEzML9uZr] < HbLvIJ[TihR7e]) {
                            mEzML9uZr -= (991 - 990);
                            A5bSJETOvtR -= (361 - 360);
                            TihR7e += (683 - 682);
                        }
                        else if (IbjKPIzn[mEzML9uZr] == HbLvIJ[TihR7e]) {
                            mEzML9uZr -= (65 - 64);
                            TihR7e += (839 - 838);
                        }
                    }
                }
            }
            printf ("%d\n", A5bSJETOvtR *200);
        }
    }
}

