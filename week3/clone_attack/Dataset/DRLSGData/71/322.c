int cY8Z1Ru (int BIdkYi) {
    int oIk2xtdE;
    if (BIdkYi % (1067 - 667) == (707 - 707) || (BIdkYi % (962 - 958) == (194 - 194) && BIdkYi % (659 - 559) != (394 - 394))) {
        oIk2xtdE = (164 - 163);
    }
    else {
        oIk2xtdE = (827 - 827);
    }
    return oIk2xtdE;
}

int nzepfirI (int BIdkYi, int jMCdnkVrZ, int vEFpGOH6) {
    int oIk2xtdE = (724 - 724);
    for (int jjSoq6vwB = (300 - 299);
    jjSoq6vwB < jMCdnkVrZ; jjSoq6vwB++) {
        if (jjSoq6vwB == (990 - 989) || jjSoq6vwB == (624 - 621) || jjSoq6vwB == (827 - 822) || jjSoq6vwB == (707 - 700) || jjSoq6vwB == (672 - 664) || jjSoq6vwB == (302 - 292) || jjSoq6vwB == (464 - 452)) {
            oIk2xtdE += (63 - 32);
        }
        else if (jjSoq6vwB == (758 - 754) || jjSoq6vwB == (522 - 516) || jjSoq6vwB == (858 - 849) || jjSoq6vwB == (639 - 628)) {
            oIk2xtdE += (288 - 258);
        }
        else if (jjSoq6vwB == (202 - 200)) {
            if (cY8Z1Ru (BIdkYi)) {
                oIk2xtdE += (82 - 53);
            }
            else {
                oIk2xtdE += (509 - 481);
            }
        }
    }
    oIk2xtdE += vEFpGOH6;
    return oIk2xtdE;
}

int main () {
    int E2UAt8Ih;
    int CWTagqyM4eC, jjSoq6vwB, BauK2vBPR4, pf3Oa1zP2oy, JxFZTb;
    int KrSKbiYFfW7e, BWyciqBh;
    scanf ("%d", &CWTagqyM4eC);
    for (jjSoq6vwB = (440 - 440); jjSoq6vwB < CWTagqyM4eC; jjSoq6vwB++) {
        scanf ("%d%d%d", &BauK2vBPR4, &pf3Oa1zP2oy, &JxFZTb);
        KrSKbiYFfW7e = nzepfirI (BauK2vBPR4, pf3Oa1zP2oy, (556 - 555));
        BWyciqBh = nzepfirI (BauK2vBPR4, JxFZTb, (687 - 686));
        if ((KrSKbiYFfW7e -BWyciqBh) < 0)
            E2UAt8Ih = BWyciqBh -KrSKbiYFfW7e;
        else
            E2UAt8Ih = KrSKbiYFfW7e -BWyciqBh;
        if (E2UAt8Ih % (111 - 104) == 0)
            ;
        else
            printf ("NO\n");
    }
    return 0;
}

