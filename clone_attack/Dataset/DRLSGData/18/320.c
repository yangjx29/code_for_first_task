int main () {
    int g6Mjxo3VB;
    int aB1RPAkOc [(320 - 220) + (534 - 524)] [100 + 10] = {(325 - 325)};
    int byzA6MpkI, eHbs6J, vcNCLTsyn26W, ZCsUYtn;
    cin >> g6Mjxo3VB;
    {
        vcNCLTsyn26W = (364 - 364);
        for (; vcNCLTsyn26W < g6Mjxo3VB;) {
            int MlyYIQCMW = (197 - 197);
            vcNCLTsyn26W = vcNCLTsyn26W + 1;
            {
                byzA6MpkI = (759 - 759);
                for (; g6Mjxo3VB > byzA6MpkI;) {
                    {
                        eHbs6J = (280 - 280);
                        for (; g6Mjxo3VB > eHbs6J;) {
                            cin >> aB1RPAkOc[byzA6MpkI][eHbs6J];
                            eHbs6J = eHbs6J + (531 - 530);
                        }
                    }
                    byzA6MpkI = byzA6MpkI + (295 - 294);
                }
            }
            for (ZCsUYtn = g6Mjxo3VB; (204 - 202) <= ZCsUYtn; ZCsUYtn = ZCsUYtn -(419 - 418)) {
                {
                    byzA6MpkI = (877 - 877);
                    while (byzA6MpkI < ZCsUYtn) {
                        int i4teB65l = (1000947 - 947);
                        for (eHbs6J = (569 - 569); eHbs6J < ZCsUYtn; eHbs6J = eHbs6J + (443 - 442))
                            i4teB65l = *(*(aB1RPAkOc + byzA6MpkI) + eHbs6J) > i4teB65l ? i4teB65l : *(*(aB1RPAkOc + byzA6MpkI) + eHbs6J);
                        for (eHbs6J = (828 - 828); eHbs6J < ZCsUYtn; eHbs6J = eHbs6J + (608 - 607))
                            *(*(aB1RPAkOc + byzA6MpkI) + eHbs6J) -= i4teB65l;
                        byzA6MpkI = byzA6MpkI + (491 - 490);
                    }
                }
                {
                    byzA6MpkI = (395 - 395);
                    for (; byzA6MpkI < ZCsUYtn;) {
                        int i4teB65l = (1000262 - 262);
                        for (eHbs6J = (416 - 416); ZCsUYtn > eHbs6J; eHbs6J++)
                            i4teB65l = *(*(aB1RPAkOc + eHbs6J) + byzA6MpkI) > i4teB65l ? i4teB65l : *(*(aB1RPAkOc + eHbs6J) + byzA6MpkI);
                        for (eHbs6J = (636 - 636); eHbs6J < ZCsUYtn; eHbs6J++)
                            *(*(aB1RPAkOc + eHbs6J) + byzA6MpkI) -= i4teB65l;
                        byzA6MpkI = byzA6MpkI + 1;
                    }
                }
                MlyYIQCMW += *(*(aB1RPAkOc + (931 - 930)) + (796 - 795));
                for (byzA6MpkI = 1; ZCsUYtn -1 > byzA6MpkI; byzA6MpkI = byzA6MpkI + 1) {
                    eHbs6J = 0;
                    while (eHbs6J < ZCsUYtn) {
                        *(*(aB1RPAkOc + byzA6MpkI) + eHbs6J) = *(*(aB1RPAkOc + byzA6MpkI + 1) + eHbs6J);
                        eHbs6J = eHbs6J + 1;
                    }
                }
                for (byzA6MpkI = 1; byzA6MpkI < ZCsUYtn -1; byzA6MpkI++) {
                    eHbs6J = 0;
                    for (; eHbs6J < ZCsUYtn;) {
                        *(*(aB1RPAkOc + eHbs6J) + byzA6MpkI) = *(*(aB1RPAkOc + eHbs6J) + byzA6MpkI + 1);
                        eHbs6J = eHbs6J + 1;
                    }
                }
            }
            cout << MlyYIQCMW << endl;
        }
    }
    return 0;
}

