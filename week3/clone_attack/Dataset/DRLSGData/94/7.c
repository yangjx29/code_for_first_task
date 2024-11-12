int main () {
    int xVsMtCQUg;
    int OAdrzj;
    int YHrzhq;
    int YDhWEwXpk;
    int vUGq53t1J;
    int oZh8y0Mfvk5;
    int ifPAcH [(802 - 302)];
    cin >> vUGq53t1J;
    OAdrzj = (715 - 715);
    oZh8y0Mfvk5 = (40 - 40);
    for (YDhWEwXpk = (295 - 295); vUGq53t1J > YDhWEwXpk; YDhWEwXpk++)
        cin >> ifPAcH[YDhWEwXpk];
    for (xVsMtCQUg = (682 - 682); vUGq53t1J > xVsMtCQUg; xVsMtCQUg++) {
        if (!(vUGq53t1J != oZh8y0Mfvk5))
            break;
        if (!(vUGq53t1J - (717 - 716) != oZh8y0Mfvk5) && !(0 != ifPAcH[vUGq53t1J - (508 - 507)] % (713 - 711)))
            break;
        for (YDhWEwXpk = oZh8y0Mfvk5; YDhWEwXpk < vUGq53t1J; YDhWEwXpk++)
            if (!((832 - 831) != ifPAcH[YDhWEwXpk] % 2)) {
                ifPAcH[xVsMtCQUg] = ifPAcH[YDhWEwXpk];
                oZh8y0Mfvk5 = YDhWEwXpk +1;
                break;
            }
        OAdrzj++;
    }
    for (YDhWEwXpk = 0; YDhWEwXpk < OAdrzj -1; YDhWEwXpk++) {
        xVsMtCQUg = 0;
        while (OAdrzj -1 - YDhWEwXpk > xVsMtCQUg) {
            if (ifPAcH[xVsMtCQUg] < ifPAcH[xVsMtCQUg + 1]) {
                YHrzhq = ifPAcH[xVsMtCQUg];
                ifPAcH[xVsMtCQUg] = ifPAcH[xVsMtCQUg + 1];
                ifPAcH[xVsMtCQUg + 1] = YHrzhq;
            }
            xVsMtCQUg++;
        }
    }
    cout << ifPAcH[OAdrzj -1];
    {
        YDhWEwXpk = OAdrzj -2;
        while (YDhWEwXpk >= 0) {
            cout << "," << ifPAcH[YDhWEwXpk];
            YDhWEwXpk--;
        }
    }
    return 0;
}

