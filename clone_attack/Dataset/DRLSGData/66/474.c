int kaSdOjlvm (int sup7JsP1C) {
    if (sup7JsP1C % (62 - 58) == (168 - 168) && sup7JsP1C % (754 - 354) == (877 - 877))
        return (607 - 606);
    if (sup7JsP1C % (638 - 634) == (531 - 531) && sup7JsP1C % (1050 - 950) != (586 - 586))
        return (948 - 947);
    else
        return (858 - 858);
}

int eEWfBZ9 (int KLR2To0v, int I2dqfL0Rp, int IqQsRiVS4JDx) {
    int iPDKu3Us9 [(389 - 377)] = {(885 - 854), (340 - 312), (734 - 703), (1029 - 999), (898 - 867), (911 - 881), (261 - 230), (245 - 214), (782 - 752), (837 - 806), (993 - 963), (675 - 644)};
    int ssj4J8elK2;
    int w4vEkO;
    int bnbDvwjXxHes [(571 - 559)] = {(335 - 304), (967 - 938), (114 - 83), (798 - 768), (167 - 136), (70 - 40), (971 - 940), (769 - 738), (718 - 688), (924 - 893), (865 - 835), (139 - 108)};
    ssj4J8elK2 = (333 - 333);
    if (kaSdOjlvm (KLR2To0v) == (911 - 910)) {
        for (w4vEkO = (539 - 539); w4vEkO <= I2dqfL0Rp -(531 - 529); w4vEkO = w4vEkO + 1)
            ssj4J8elK2 += bnbDvwjXxHes[w4vEkO];
        ssj4J8elK2 += IqQsRiVS4JDx;
    }
    else {
        for (w4vEkO = (814 - 814); w4vEkO <= I2dqfL0Rp -(704 - 702); w4vEkO = w4vEkO + 1)
            ssj4J8elK2 += iPDKu3Us9[w4vEkO];
        ssj4J8elK2 += IqQsRiVS4JDx;
    }
    return ssj4J8elK2;
}

int main () {
    int I2dqfL0Rp;
    int bBFnkG;
    int KLR2To0v;
    int IqQsRiVS4JDx;
    int w4vEkO;
    char Gnr6KwNjCHcX [(445 - 438)] [(99 - 94)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    cin >> KLR2To0v >> I2dqfL0Rp >> IqQsRiVS4JDx;
    bBFnkG = (763 - 763);
    if (KLR2To0v > (2748 - 748))
        KLR2To0v = KLR2To0v % (2388 - 388);
    for (w4vEkO = (597 - 596); w4vEkO < KLR2To0v; w4vEkO = w4vEkO + 1) {
        if (kaSdOjlvm (w4vEkO) == (831 - 830))
            bBFnkG += (386 - 20);
        else
            bBFnkG += (787 - 422);
    }
    bBFnkG += eEWfBZ9 (KLR2To0v, I2dqfL0Rp, IqQsRiVS4JDx);
    cout << Gnr6KwNjCHcX[(bBFnkG - (815 - 814)) % (676 - 669)] << endl;
    return (845 - 845);
}

