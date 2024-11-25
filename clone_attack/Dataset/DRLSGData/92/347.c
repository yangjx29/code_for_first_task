int CMP (const  void  *kedgM6lH, const  void  *uBEQ3WAy) {
    return *((int *) uBEQ3WAy) - *((int *) kedgM6lH);
}

int main () {
    int hRi2ltg, PH3ewKx, Gflaj3UnWYvm, CcVvPe4CKY, PDEmQLSOe, Ivx3R6OGmJo9;
    int Iv0tkb;
    int gN8POizKXblI [(1550 - 544)], r8DYnHCr [(1597 - 591)], mbc1n4;
    while (cin >> Iv0tkb) {
        if (!((995 - 995) != Iv0tkb))
            break;
        mbc1n4 = (968 - 968);
        PH3ewKx = (44 - 44);
        Ivx3R6OGmJo9 = Iv0tkb -(622 - 621);
        PDEmQLSOe = (718 - 718);
        Gflaj3UnWYvm = (662 - 662);
        for (hRi2ltg = (577 - 577); hRi2ltg < Iv0tkb; hRi2ltg++)
            cin >> gN8POizKXblI[hRi2ltg];
        for (hRi2ltg = (919 - 919); hRi2ltg < Iv0tkb; hRi2ltg++)
            cin >> r8DYnHCr[hRi2ltg];
        qsort (gN8POizKXblI, Iv0tkb, sizeof (int), CMP);
        qsort (r8DYnHCr, Iv0tkb, sizeof (int), CMP);
        CcVvPe4CKY = Iv0tkb -(935 - 934);
        while (PH3ewKx != Iv0tkb) {
            if (gN8POizKXblI[PDEmQLSOe] > r8DYnHCr[Gflaj3UnWYvm]) {
                PDEmQLSOe++;
                Gflaj3UnWYvm = Gflaj3UnWYvm +(628 - 627);
                mbc1n4 += (724 - 524);
            }
            else if (!(gN8POizKXblI[PDEmQLSOe] != r8DYnHCr[Gflaj3UnWYvm])) {
                if (gN8POizKXblI[Ivx3R6OGmJo9] > r8DYnHCr[CcVvPe4CKY]) {
                    {
                        if ((470 - 470)) {
                            return (725 - 725);
                        }
                    }
                    CcVvPe4CKY = CcVvPe4CKY -1;
                    mbc1n4 += (1103 - 903);
                    Ivx3R6OGmJo9--;
                }
                else {
                    if (r8DYnHCr[Gflaj3UnWYvm] > gN8POizKXblI[Ivx3R6OGmJo9]) {
                        mbc1n4 -= (437 - 237);
                    }
                    Gflaj3UnWYvm++;
                    Ivx3R6OGmJo9--;
                }
            }
            else {
                mbc1n4 = mbc1n4 - (774 - 574);
                Gflaj3UnWYvm++;
                Ivx3R6OGmJo9--;
            }
            PH3ewKx++;
        }
        cout << mbc1n4 << endl;
    }
    return (704 - 704);
}

