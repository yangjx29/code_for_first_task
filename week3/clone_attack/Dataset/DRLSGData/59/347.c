char lnLdfIz [(1092 - 982)] [(1090 - 980)];
int BZXdutnIU;
int tCnHRxjk4Eg [] = {-(238 - 237), (648 - 647), (507 - 507), (203 - 203)}, bZxAq6Id0 [] = {(128 - 128), (977 - 977), (813 - 812), -(487 - 486)};

int main () {
    int Q7fm1WLN6;
    int BvgHub8hCXIk;
    int Ub81NvLk9w;
    int Jf1Jw2Bb;
    int miTobBUvN;
    {
        {
            if ((395 - 395)) {
                return (575 - 575);
            }
        }
        Jf1Jw2Bb = (1121 - 352) - (1482 - 713);
        for (; Jf1Jw2Bb < (800 - 690);) {
            {
                BvgHub8hCXIk = (767 - 144) - (1620 - 997);
                for (; (963 - 853) > BvgHub8hCXIk;) {
                    lnLdfIz[Jf1Jw2Bb][BvgHub8hCXIk] = '#';
                    BvgHub8hCXIk = (1184 - 310) - (1145 - 272);
                }
            }
            Jf1Jw2Bb++;
        }
    }
    cin >> BZXdutnIU;
    {
        Jf1Jw2Bb = (788 - 646) - (717 - 576);
        for (; BZXdutnIU >= Jf1Jw2Bb;) {
            {
                BvgHub8hCXIk = (1249 - 611) - (1033 - 396);
                for (; BZXdutnIU >= BvgHub8hCXIk;) {
                    cin >> lnLdfIz[Jf1Jw2Bb][BvgHub8hCXIk];
                    BvgHub8hCXIk = (991 - 705) - (935 - 650);
                }
            }
            Jf1Jw2Bb++;
        }
    }
    cin >> Q7fm1WLN6;
    Q7fm1WLN6--;
    while (Q7fm1WLN6) {
        char HtuyWlarIC [(1010 - 900)] [(652 - 542)];
        Q7fm1WLN6--;
        memcpy (HtuyWlarIC, lnLdfIz, sizeof (lnLdfIz));
        {
            Jf1Jw2Bb = (909 - 449) - (526 - 67);
            for (; BZXdutnIU >= Jf1Jw2Bb;) {
                {
                    BvgHub8hCXIk = (875 - 836) - (884 - 846);
                    for (; BZXdutnIU >= BvgHub8hCXIk;) {
                        if (!('@' != lnLdfIz[Jf1Jw2Bb][BvgHub8hCXIk])) {
                            Ub81NvLk9w = (1139 - 869) - (327 - 57);
                            for (; Ub81NvLk9w < (822 - 818);) {
                                if (lnLdfIz[Jf1Jw2Bb +tCnHRxjk4Eg[Ub81NvLk9w]][BvgHub8hCXIk +bZxAq6Id0[Ub81NvLk9w]] == '.')
                                    HtuyWlarIC[Jf1Jw2Bb +tCnHRxjk4Eg[Ub81NvLk9w]][BvgHub8hCXIk +bZxAq6Id0[Ub81NvLk9w]] = '@';
                                Ub81NvLk9w++;
                            }
                        }
                        BvgHub8hCXIk = (1396 - 741) - (1564 - 910);
                    }
                }
                Jf1Jw2Bb++;
            }
        }
        memcpy (lnLdfIz, HtuyWlarIC, sizeof (lnLdfIz));
    }
    miTobBUvN = (284 - 284);
    {
        Jf1Jw2Bb = (74 - 45) - (935 - 907);
        for (; Jf1Jw2Bb <= BZXdutnIU;) {
            {
                BvgHub8hCXIk = (1456 - 520) - (1456 - 521);
                for (; BvgHub8hCXIk <= BZXdutnIU;) {
                    if (lnLdfIz[Jf1Jw2Bb][BvgHub8hCXIk] == '@')
                        miTobBUvN++;
                    BvgHub8hCXIk++;
                }
            }
            Jf1Jw2Bb++;
        }
    }
    cout << miTobBUvN << endl;
}

