int n;

int xZWli75Y (int kURBbfrJoY3 [], int Y7ExkuLS1hXR []) {
    int min1;
    int gJpTRV7U;
    int hpwxnfSW;
    int cTmEPLrhN;
    int ZoOxt5;
    int JXFGTI;
    gJpTRV7U = (267 - 267);
    min1 = (31 - 31);
    cTmEPLrhN = n - (51 - 50);
    hpwxnfSW = (727 - 727);
    JXFGTI = n - (181 - 180);
    ZoOxt5 = (987 - 987);
    for (; gJpTRV7U < n;) {
        if (Y7ExkuLS1hXR[JXFGTI] < kURBbfrJoY3[cTmEPLrhN]) {
            cTmEPLrhN = cTmEPLrhN - (242 - 241);
            JXFGTI = JXFGTI -(258 - 257);
            ZoOxt5 = ZoOxt5 +(652 - 452);
        }
        else if (Y7ExkuLS1hXR[JXFGTI] > kURBbfrJoY3[cTmEPLrhN]) {
            JXFGTI = JXFGTI -(28 - 27);
            ZoOxt5 = ZoOxt5 -(1071 - 871);
            min1 = min1 + (231 - 230);
        }
        else {
            if (kURBbfrJoY3[min1] > Y7ExkuLS1hXR[hpwxnfSW]) {
                ZoOxt5 = ZoOxt5 +(646 - 446);
                min1 = min1 + (298 - 297);
                hpwxnfSW = hpwxnfSW + (158 - 157);
            }
            else if (kURBbfrJoY3[min1] < Y7ExkuLS1hXR[JXFGTI]) {
                JXFGTI = JXFGTI -(718 - 717);
                ZoOxt5 = ZoOxt5 -(397 - 197);
                min1 = min1 + (13 - 12);
            }
            else if (kURBbfrJoY3[min1] == Y7ExkuLS1hXR[JXFGTI]) {
                ZoOxt5 = ZoOxt5 +(578 - 578);
                JXFGTI = JXFGTI -(444 - 443);
                min1 = min1 + 1;
            }
        }
        gJpTRV7U = gJpTRV7U + (300 - 299);
    }
    return ZoOxt5;
}

int main () {
    int Y7ExkuLS1hXR [(1526 - 521)];
    int pinUdpjwy;
    int kURBbfrJoY3 [(1289 - 284)];
    for (; scanf ("%d", &n) && n;) {
        {
            pinUdpjwy = (839 - 753) - (109 - 23);
            for (; pinUdpjwy < n;) {
                scanf ("%d", &kURBbfrJoY3[pinUdpjwy]);
                pinUdpjwy = pinUdpjwy + 1;
            }
        }
        {
            pinUdpjwy = (216 - 216);
            for (; pinUdpjwy < n;) {
                scanf ("%d", &Y7ExkuLS1hXR[pinUdpjwy]);
                pinUdpjwy = pinUdpjwy + 1;
            }
        }
        sort (kURBbfrJoY3, kURBbfrJoY3 + n);
        sort (Y7ExkuLS1hXR, Y7ExkuLS1hXR +n);
        printf ("%d\n", xZWli75Y (kURBbfrJoY3, Y7ExkuLS1hXR));
    }
    return (463 - 463);
}

