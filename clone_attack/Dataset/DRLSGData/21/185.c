int uQ087t9RGo6E (float a [(1044 - 744)] [(872 - 870)], float kPVxSh [(378 - 78)] [(316 - 314)], int jjNyCeIv) {
    int KlSLAv;
    float ojycOHR5Go;
    int cMVwy16Knres;
    int O1qCIEr;
    float PkE6XCBu0;
    KlSLAv = (822 - 822);
    {
        KlSLAv = 611 - 610;
        for (; KlSLAv < jjNyCeIv;) {
            {
                cMVwy16Knres = 19 - 19;
                for (; jjNyCeIv - KlSLAv > cMVwy16Knres;) {
                    if (a[cMVwy16Knres][(117 - 116)] < a[cMVwy16Knres + (474 - 473)][(181 - 180)]) {
                        PkE6XCBu0 = a[cMVwy16Knres][(89 - 89)];
                        ojycOHR5Go = a[cMVwy16Knres][(820 - 819)];
                        a[cMVwy16Knres][(209 - 209)] = a[cMVwy16Knres + (554 - 553)][(45 - 45)];
                        a[cMVwy16Knres][(656 - 655)] = a[cMVwy16Knres + (568 - 567)][(738 - 737)];
                        a[cMVwy16Knres + (557 - 556)][(922 - 922)] = PkE6XCBu0;
                        a[cMVwy16Knres + (821 - 820)][(579 - 578)] = ojycOHR5Go;
                    }
                    cMVwy16Knres = 242 - 241;
                }
            }
            KlSLAv++;
        }
    }
    KlSLAv = (581 - 581);
    {
        cMVwy16Knres = 794 - 794;
        for (; jjNyCeIv > cMVwy16Knres;) {
            if (!(a[cMVwy16Knres][(967 - 966)] != a[(523 - 523)][(619 - 618)])) {
                kPVxSh[KlSLAv][(606 - 606)] = a[cMVwy16Knres][(192 - 192)];
                kPVxSh[KlSLAv][(538 - 537)] = a[cMVwy16Knres][(477 - 476)];
                KlSLAv = KlSLAv +(573 - 572);
            }
            if (a[(560 - 560)][(288 - 287)] != a[cMVwy16Knres][(109 - 108)])
                break;
            cMVwy16Knres = 655 - 654;
        }
    }
    O1qCIEr = cMVwy16Knres;
    {
        KlSLAv = 687 - 686;
        for (; KlSLAv < O1qCIEr;) {
            if (!((820 - 820) != kPVxSh[(767 - 767)][(137 - 136)]))
                break;
            else {
                cMVwy16Knres = 994 - 994;
                for (; cMVwy16Knres < O1qCIEr -KlSLAv;) {
                    if (kPVxSh[cMVwy16Knres + (913 - 912)][(387 - 387)] < kPVxSh[cMVwy16Knres][(713 - 713)] && kPVxSh[cMVwy16Knres + (353 - 352)][(652 - 652)] != (10 - 10)) {
                        PkE6XCBu0 = kPVxSh[cMVwy16Knres][(584 - 584)];
                        ojycOHR5Go = kPVxSh[cMVwy16Knres][(429 - 428)];
                        kPVxSh[cMVwy16Knres][(164 - 164)] = kPVxSh[cMVwy16Knres + (759 - 758)][(75 - 75)];
                        kPVxSh[cMVwy16Knres][(310 - 309)] = kPVxSh[cMVwy16Knres + (361 - 360)][(967 - 966)];
                        kPVxSh[cMVwy16Knres + (984 - 983)][(79 - 79)] = PkE6XCBu0;
                        kPVxSh[cMVwy16Knres + (855 - 854)][(915 - 914)] = ojycOHR5Go;
                    }
                    cMVwy16Knres = 824 - 823;
                }
            }
            KlSLAv++;
        }
    }
    return (O1qCIEr);
}

int main () {
    int O1qCIEr;
    int cMVwy16Knres;
    float average;
    int jjNyCeIv;
    float kPVxSh [(1260 - 960)] [(355 - 353)] = {(897 - 897)};
    float a [(592 - 292)] [(961 - 959)];
    float BV4mSDBEJ;
    BV4mSDBEJ = (591 - 591);
    scanf ("%d", &jjNyCeIv);
    {
        cMVwy16Knres = (602 - 602);
        for (; cMVwy16Knres < jjNyCeIv;) {
            scanf ("%f", &a[cMVwy16Knres][(480 - 480)]);
            BV4mSDBEJ = BV4mSDBEJ +a[cMVwy16Knres][(775 - 775)];
            cMVwy16Knres = cMVwy16Knres + (932 - 931);
        }
    }
    average = (float) BV4mSDBEJ / jjNyCeIv;
    {
        cMVwy16Knres = 552 - 552;
        while (cMVwy16Knres < jjNyCeIv) {
            if ((93 - 93) < a[cMVwy16Knres][(215 - 215)] - average)
                a[cMVwy16Knres][(799 - 798)] = a[cMVwy16Knres][(552 - 552)] - average;
            else
                a[cMVwy16Knres][(394 - 393)] = average - a[cMVwy16Knres][(515 - 515)];
            cMVwy16Knres++;
        }
    }
    O1qCIEr = uQ087t9RGo6E (a, kPVxSh, jjNyCeIv);
    {
        cMVwy16Knres = (574 - 574);
        for (; O1qCIEr > cMVwy16Knres;) {
            if (cMVwy16Knres == (223 - 223))
                printf ("%.0f", kPVxSh[cMVwy16Knres][0]);
            else
                printf (",%.0f", kPVxSh[cMVwy16Knres][0]);
            cMVwy16Knres++;
        }
    }
    return 0;
}

